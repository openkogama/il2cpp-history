/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public class RandomGenerator
	{
		// Fields
		private static readonly ushort[] randomNumbers;
		private uint seed;
		private uint step;
		private uint round;
	
		// Constructors
		public RandomGenerator(uint seed);
		public RandomGenerator(uint seed, uint step, uint round);
		static RandomGenerator();
	
		// Methods
		public int[] ToIntArray();
		public int Range(int min, int max);
		public int GetNewRandom();
		private uint IncrementRandomIndex();
		public override string ToString();
	}
}
