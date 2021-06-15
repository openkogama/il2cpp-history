/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class LSEnumGenerator
{
	// Fields
	private const string mapAdd = "            map.Add((int){0}.{1}, TM._(\"{2}\"));\n";
	private const string basicString = "\r\n    public static string _({0} enumVal)\r\n    {{\r\n        return {0}LS.Get(enumVal);\r\n    }}\r\n    private static class {0}LS\r\n            {{\r\n                private static EnumLocalizeBookkeeping enumLocalizeBookkeeping = new EnumLocalizeBookkeeping(Init);\r\n                public static string Get({0} enumVal)\r\n                {{\r\n                    return enumLocalizeBookkeeping.GetLocalizedString((int)enumVal);\r\n                }}\r\n                \r\n                private static void Init(Dictionary<int, string> map)\r\n                {{\r\n                    {1}\r\n                }}\r\n            \r\n        }}";

	// Methods
	public static string Generate(Type type, Func<string, string> customStringCallback);
	private static string GenerateEnumCode(Type type, Func<string, string> customStringCallback);
}

