
/* KeyValuePair`2[System.Object,System.Object] <GetEnumerator>b__25_0(DictionaryEntry) */

KeyValuePair_2_System_Object_System_Object_
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::DictionaryWrapper`2[TKey,TValue]+<>c[System::
Object,System::Object]::
DictionaryWrapper_2_TKey_TValue_c_System_Object_System_Object___GetEnumerator_b__25_0
          (DictionaryWrapper_2_TKey_TValue_c_System_Object_System_Object_ *this,DictionaryEntry de,
          MethodInfo *method)

{
  VStack_1.Item1 = (Object *)0x0;
  VStack_1.Item2 = (Object *)0x0;
  pMStack_2 = method->klass->rgctx_data[6].method;
  pvVar3 = method->klass->rgctx_data[4].rgctxDataDummy;
  if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
    pvVar3 = (void *)func_?(pvVar3);
  }
  if (de._value == (Object *)0x0) {
    item2 = (Object *)0x0;
  }
  else {
    item2 = (Object *)func_?(de._value,pvVar3);
    if (item2 == (Object *)0x0) goto code_?;
  }
  pvVar3 = method->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
    pvVar3 = (void *)func_?(pvVar3);
  }
  if (de._key == (Object *)0x0) {
    item1 = (Object *)0x0;
  }
  else {
    item1 = (Object *)func_?(de._key,pvVar3);
    de._value = de._key;
    if (item1 == (Object *)0x0) {
code_?:
      func_?(de._value,pvVar3);
      pcVar4 = (code *)swi(3);
      KVar5 = (KeyValuePair_2_System_Object_System_Object_)(*pcVar4)();
      return KVar5;
    }
  }
  mscorlib.dll::System::ValueTuple`2[Object,Object]::ValueTuple_2_Object_Object___ctor
            (&VStack_1,item1,item2,pMStack_2);
  KVar5.key = VStack_1.Item1;
  KVar5.value = VStack_1.Item2;
  return KVar5;
}

