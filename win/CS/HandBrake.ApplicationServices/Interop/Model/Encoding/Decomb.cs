﻿// --------------------------------------------------------------------------------------------------------------------
// <copyright file="Decomb.cs" company="HandBrake Project (http://handbrake.fr)">
//   This file is part of the HandBrake source code - It may be used under the terms of the GNU General Public License.
// </copyright>
// <summary>
//   Defines the Decomb type.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace HandBrake.ApplicationServices.Interop.Model.Encoding
{
    using HandBrake.ApplicationServices.Attributes;

    /// <summary>
    /// The decomb.
    /// </summary>
    public enum Decomb
    {
        [ShortName("off")]
        Off = 0,

        [ShortName("default")]
        Default = 2,

        [ShortName("fast")]
        Fast = 3,

        [ShortName("bob")]
        Bob = 4,

        [ShortName("custom")]
        Custom = 1
    }
}
