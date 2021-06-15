
/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[System::Object]::
     JEnumerable_1_System_Object__Equals
               (JEnumerable_1_System_Object_ *this,Object *obj,MethodInfo *method)

{
  pcVar1 = method->name;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  iVar2 = *(int *)(*(int *)(pcVar1 + 0x60) + 0xc);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  iVar2 = func_?(obj,iVar2);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar1 = method->name;
  pIVar3 = this[2]._enumerable;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  iVar2 = *(int *)(*(int *)(pcVar1 + 0x60) + 0xc);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  if (obj != (Object *)0x0) {
    if ((obj->klass->_0).element_class != *(Il2CppClass **)(iVar2 + 0x20)) goto code_?;
    puVar4 = (undefined4 *)func_?(obj);
    if (pIVar3 != (IEnumerable_1_System_Object_ *)0x0) {
      bVar5 = (*(code *)(pIVar3->klass->vtable).GetEnumerator.method)
                        (pIVar3,*puVar4,pIVar3->klass[1]._0.image);
      return bVar5;
    }
  }
  func_?(0);
code_?:
  func_?(obj,iVar2);
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[System::Object]::
        JEnumerable_1_System_Object__GetHashCode
                  (JEnumerable_1_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = this[2]._enumerable;
  if (pIVar1 != (IEnumerable_1_System_Object_ *)0x0) {
    iVar2 = (*(code *)pIVar1->klass[1]._0.namespaze)
                      (pIVar1,pIVar1->klass[1]._0.byval_arg.data.dummy);
    return iVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[System::Object]::
JEnumerable_1_System_Object__System_Collections_IEnumerable_GetEnumerator
          (JEnumerable_1_System_Object_ *this,MethodInfo *method)

{
  pcVar1 = method->name;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  pIVar2 = this[2]._enumerable;
  if (pIVar2 != (IEnumerable_1_System_Object_ *)0x0) {
    iVar3 = *(int *)(*(int *)(*(int *)(pcVar1 + 0x60) + 4) + 0xc);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    iVar3 = **(int **)(iVar3 + 0x60);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    pIVar4 = (IEnumerator *)func_?(0,iVar3,pIVar2);
    return pIVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pIVar4 = (IEnumerator *)(*pcVar5)();
  return pIVar4;
}


/* JEnumerable`1[System.Object]() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[System::Object]::
     JEnumerable_1_System_Object___cctor(MethodInfo *method)

{
  pcVar1 = method->name;
  pcVar2 = pcVar1;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
    pcVar2 = method->name;
  }
  if ((pcVar2[0xbe] & 1U) == 0) {
    func_?(pcVar2);
  }
  value = (Object *)
          (*(code *)**(undefined4 **)(*(int *)(pcVar2 + 0x60) + 0x10))
                    (*(undefined4 *)(*(int *)(pcVar1 + 0x60) + 0x10));
  if ((method->name[0xbe] & 1U) == 0) {
    func_?(method->name);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (value,StringLiteral_enumerable,(MethodInfo *)0x0);
  pcVar1 = method->name;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  iVar3 = *(int *)(*(int *)(pcVar1 + 0x60) + 0x18);
  if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
    func_?(iVar3);
  }
  **(undefined4 **)(iVar3 + 0x5c) = value;
  return;
}


/* IJEnumerable`1[JToken] get_Item(Object) */

IJEnumerable_1_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JEnumerable`1[System::Object]::
JEnumerable_1_System_Object__get_Item
          (JEnumerable_1_System_Object_ *this,Object *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  pIVar2 = this[2]._enumerable;
  pcVar3 = method->name;
  pcVar4 = pcVar3;
  if ((pcVar3[0xbe] & 1U) == 0) {
    func_?(pcVar3);
    pcVar4 = pMVar1->name;
  }
  if ((pcVar4[0xbe] & 1U) == 0) {
    func_?(pcVar4);
  }
  pMVar1 = (MethodInfo *)
           (*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 8))
                     (pIVar2,key,*(undefined4 *)(*(int *)(pcVar3 + 0x60) + 8));
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)pMVar1,StringLiteral_enumerable,(MethodInfo *)0x0);
  method = pMVar1;
  pIVar5 = (IJEnumerable_1_JToken_ *)
           func_?(TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>
                           ,&method);
  return pIVar5;
}

