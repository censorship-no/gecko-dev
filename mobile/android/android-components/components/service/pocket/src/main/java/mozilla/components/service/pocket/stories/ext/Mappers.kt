/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

package mozilla.components.service.pocket.stories.ext

import androidx.annotation.VisibleForTesting
import mozilla.components.service.pocket.PocketRecommendedStory
import mozilla.components.service.pocket.api.PocketApiStory
import mozilla.components.service.pocket.stories.db.PocketLocalStoryTimesShown
import mozilla.components.service.pocket.stories.db.PocketStoryEntity

@VisibleForTesting
internal const val DEFAULT_CATEGORY = "general"
@VisibleForTesting
internal const val DEFAULT_TIMES_SHOWN = 0L

/**
 * Map Pocket API objects to the object type that we persist locally.
 */
internal fun PocketApiStory.toPocketLocalStory(): PocketStoryEntity =
    PocketStoryEntity(
        url, title, imageUrl, publisher, category, timeToRead, DEFAULT_TIMES_SHOWN
    )

/**
 * Map Room entities to the object type that we expose to service clients.
 */
internal fun PocketStoryEntity.toPocketRecommendedStory(): PocketRecommendedStory =
    PocketRecommendedStory(
        url = url,
        title = title,
        imageUrl = imageUrl,
        publisher = publisher,
        category = if (category.isNotBlank()) category else DEFAULT_CATEGORY,
        timeToRead = timeToRead,
        timesShown = timesShown
    )

/**
 * Maps an object of the type exposed to clients to one that can partially update only the "timesShown"
 * property of the type we persist locally.
 */
internal fun PocketRecommendedStory.toPartialTimeShownUpdate(): PocketLocalStoryTimesShown =
    PocketLocalStoryTimesShown(url, timesShown)
