
/* IEnumerator`1[Newtonsoft.Json.Linq.JToken] GetEnumerator() */

IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[JToken]::
JEnumerable_1_JToken__GetEnumerator(JEnumerable_1_JToken_ *this,MethodInfo *method)

{
  pIVar1 = this[2]._enumerable;
  if (pIVar1 != (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    pcVar2 = method->name;
    if ((pcVar2[0xbe] & 1U) == 0) {
      func_?(pcVar2);
    }
    iVar3 = **(int **)(pcVar2 + 0x60);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    pIVar4 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)func_?(0,iVar3,pIVar1);
    return pIVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pIVar4 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar5)();
  return pIVar4;
}


/* JEnumerable`1[JToken](IEnumerable`1[Newtonsoft.Json.Linq.JToken]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[JToken]::JEnumerable_1_JToken___ctor
               (JEnumerable_1_JToken_ *this,IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *enumerable,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)enumerable,StringLiteral_enumerable,(MethodInfo *)0x0);
  this[2]._enumerable = enumerable;
  return;
}

