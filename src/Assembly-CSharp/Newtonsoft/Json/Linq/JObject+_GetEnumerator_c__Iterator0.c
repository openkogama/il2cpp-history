
/* Void Dispose() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+<GetEnumerator>c__Iterator0::
     JObject_GetEnumerator_c_Iterator0_Dispose
               (JObject_GetEnumerator_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  iVar1 = (this->fields)._PC;
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  if ((iVar1 != 0) && (iVar1 == 1)) {
    pIVar2 = (this->fields)._locvar0;
    if (pIVar2 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
      func_?(0,TypeInfo__System__IDisposable,pIVar2,0x44);
    }
  }
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+<GetEnumerator>c__Iterator0::
     JObject_GetEnumerator_c_Iterator0_MoveNext
               (JObject_GetEnumerator_c_Iterator0 *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffcc;
  puVar5 = &stack0xffffffcc;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = ZEXT48((String *)uStack_6);
  func_?();
  iVar7 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar7 == 0) {
    pJVar8 = (this->fields)._this;
    puStack_4 = &stack0xffffffcc;
    if ((pJVar8 != (JObject *)0x0) &&
       (puStack_4 = &stack0xffffffcc,
       iVar7 = (*(code *)(pJVar8->klass->vtable).get_ChildrenTokens.method)
                          (pJVar8,(pJVar8->klass->vtable).InsertItem.methodPtr), iVar7 != 0)) {
      pIVar9 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)
               func_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                               ,iVar7);
      (this->fields)._locvar0 = pIVar9;
      goto code_?;
    }
  }
  else {
    puStack_4 = &stack0xffffffcc;
    if (iVar7 != 1) goto code_?;
code_?:
    uStack_1 = 0;
    pIVar9 = (this->fields)._locvar0;
    if (pIVar9 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
      cVar10 = func_?(1,TypeInfo__System__Collections__IEnumerator,pIVar9);
      if (cVar10 == '\0') {
        iVar7 = 0xca;
        uStack_1 = 0xffffffff;
        pIVar9 = (this->fields)._locvar0;
        if (pIVar9 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,pIVar9);
        }
        iVar11 = (int)uStack_6._4_4_;
        if (uStack_6._4_4_ != (JToken *)0x0) goto code_?;
code_?:
        if (iVar7 == 0xd3) {
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        (this->fields)._PC = -1;
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      pIVar9 = (this->fields)._locvar0;
      if (pIVar9 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
        uVar12 = func_?(0,
                                TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                                ,pIVar9);
        this_00 = (JProperty *)func_?(uVar12,TypeInfo__Newtonsoft__Json__Linq__JProperty);
        (this->fields)._property___1 = this_00;
        if (this_00 != (JProperty *)0x0) {
          pSVar13 = (this_00->fields)._name;
          JProperty::JProperty_get_Value(this_00,(MethodInfo *)0x0);
          uStack_6 = 0;
          func_?(&uStack_6,pSVar13);
          (this->fields)._current.key = (String *)uStack_6;
          (this->fields)._current.value = uStack_6._4_4_;
          if ((this->fields)._disposing == 0) {
            (this->fields)._PC = 1;
          }
          iVar7 = 0xd3;
          goto code_?;
        }
      }
    }
  }
  iVar11 = func_?(0);
code_?:
  func_?(iVar11,0,0);
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
}


/* Void Reset() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+<GetEnumerator>c__Iterator0::
     JObject_GetEnumerator_c_Iterator0_Reset
               (JObject_GetEnumerator_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Object System.Collections.IEnumerator.get_Current() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+<GetEnumerator>c__Iterator0::
         JObject_GetEnumerator_c_Iterator0_System_Collections_IEnumerator_get_Current
                   (JObject_GetEnumerator_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (this->fields)._current.key;
  pJStack_2 = (this->fields)._current.value;
  pOVar3 = (Object *)
           func_?(TypeInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>
                           ,&pSStack_1);
  return pOVar3;
}

