
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+<GetEnumerator>d__49::
     JObject_GetEnumerator_d_49_MoveNext(JObject_GetEnumerator_d_49 *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc8;
  puVar5 = &stack0xffffffc8;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JProperty);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__KeyValuePair_System__String__Newtonsoft__Json__Linq__JToken_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  ppJStack_6 = &this;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_1 = 1;
  iVar9 = (this->fields).__1__state;
  pJVar10 = (this->fields).__4__this;
  if (iVar9 == 0) {
    (this->fields).__1__state = -1;
    if (pJVar10 != (JObject *)0x0) {
      iVar9 = (*(pJVar10->klass->vtable).get_ChildrenTokens.methodPtr)
                        (pJVar10,(pJVar10->klass->vtable).get_ChildrenTokens.method);
      if (iVar9 != 0) {
        pIVar11 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                                 ,iVar9);
        (this->fields).__7__wrap1 = pIVar11;
        func_?(&(this->fields).__7__wrap1,pIVar11);
        goto code_?;
      }
    }
  }
  else {
    if (iVar9 != 1) goto code_?;
code_?:
    (this->fields).__1__state = -3;
    pIVar11 = (this->fields).__7__wrap1;
    if (pIVar11 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
      cVar12 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar11);
      pJVar13 = this;
      if (cVar12 == '\0') {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__IDisposable);
          cRam_? = '\x01';
        }
        (pJVar13->fields).__1__state = -1;
        if ((pJVar13->fields).__7__wrap1 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,(pJVar13->fields).__7__wrap1);
        }
        (this->fields).__7__wrap1 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0;
        func_?(&(this->fields).__7__wrap1,0);
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      pIVar11 = (this->fields).__7__wrap1;
      if (pIVar11 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
        unaff_ESI = (JProperty *)
                    func_?(0,
                                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                                    ,pIVar11);
        if (unaff_ESI != (JProperty *)0x0) {
          pJVar14 = TypeInfo__Newtonsoft__Json__Linq__JProperty;
          if (((TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth <=
               (unaff_ESI->klass->_1).typeHierarchyDepth) &&
             ((JProperty__Class *)
              (unaff_ESI->klass->_1).typeHierarchy
              [(TypeInfo__Newtonsoft__Json__Linq__JProperty->_1).typeHierarchyDepth - 1] ==
              TypeInfo__Newtonsoft__Json__Linq__JProperty)) {
            item1 = (unaff_ESI->fields)._name;
            item2 = JProperty::JProperty_get_Value(unaff_ESI,(MethodInfo *)0x0);
            VStack_15.Item1 = (Object *)0x0;
            VStack_15.Item2 = (Object *)0x0;
            mscorlib.dll::System::ValueTuple`2[Object,Object]::ValueTuple_2_Object_Object___ctor
                      (&VStack_15,(Object *)item1,(Object *)item2,
                       MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>__KeyValuePair_System__String__Newtonsoft__Json__Linq__JToken_
                      );
            (this->fields).__2__current.key = (String *)VStack_15.Item1;
            (this->fields).__2__current.value = (JToken *)VStack_15.Item2;
            uStack_8 = 0;
            VStack_15.Item2 = (Object *)&(this->fields).__2__current;
            VStack_15.Item1 = (Object *)&UNK_?;
            func_?();
            (this->fields).__1__state = 1;
            *unaff_FS_OFFSET = uStack_3;
            return 1;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
  pJVar14 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pJVar14);
  func_?();
  func_?(unaff_ESI);
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+<GetEnumerator>d__49::
     JObject_GetEnumerator_d_49_System_Collections_IEnumerator_Reset
               (JObject_GetEnumerator_d_49 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JObject___GetEnumerator_d__49__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Object System.Collections.IEnumerator.get_Current() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+<GetEnumerator>d__49::
         JObject_GetEnumerator_d_49_System_Collections_IEnumerator_get_Current
                   (JObject_GetEnumerator_d_49 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>
                   );
    cRam_? = '\x01';
  }
  pSStack_1 = (this->fields).__2__current.key;
  pJStack_2 = (this->fields).__2__current.value;
  pOVar3 = (Object *)
           func_?(TypeInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Linq::JToken>
                           ,&pSStack_1);
  return pOVar3;
}


/* Void System.IDisposable.Dispose() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+<GetEnumerator>d__49::
     JObject_GetEnumerator_d_49_System_IDisposable_Dispose
               (JObject_GetEnumerator_d_49 *this,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  iVar3 = (this->fields).__1__state;
  if ((iVar3 == -3) || (iVar3 == 1)) {
    uStack_4 = 0xffffffff;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__IDisposable);
      cRam_? = '\x01';
    }
    (this->fields).__1__state = -1;
    if ((this->fields).__7__wrap1 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
      func_?(0,TypeInfo__System__IDisposable,(this->fields).__7__wrap1);
      *unaff_FS_OFFSET = uStack_2;
      return;
    }
  }
  *unaff_FS_OFFSET = uStack_2;
  return;
}


/* Void <>m__Finally1() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JObject+<GetEnumerator>d__49::
     JObject_GetEnumerator_d_49___m__Finally1(JObject_GetEnumerator_d_49 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    cRam_? = '\x01';
  }
  (this->fields).__1__state = -1;
  if ((this->fields).__7__wrap1 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    func_?(0,TypeInfo__System__IDisposable,(this->fields).__7__wrap1);
  }
  return;
}

