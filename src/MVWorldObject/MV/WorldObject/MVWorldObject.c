
/* Void AddInputLink(Link) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddInputLink
               (MVWorldObject *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inputLinkRefs;
  if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)link,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
              );
    if (link != (Link *)0x0) {
      (link->fields).inputWOID = (this->fields).id;
      if ((this->fields).OnInputLinkChanged !=
          (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
        pAVar1 = (this->fields).OnInputLinkChanged;
        (*(pAVar1->fields)._._.invoke_impl)
                  ((pAVar1->fields)._._.method_code,(this->fields).inputLinkRefs);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean AddObjectLink(ObjectLink) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
               (MVWorldObject *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__Add_MV__WorldObject__ObjectLink_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).objectLinkRefs;
  if (this_00 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)link,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__Add_MV__WorldObject__ObjectLink_
              );
    (*(code *)(this->klass->vtable).OnObjectLinkChanged.method)
              (this,0,link,(this->klass->vtable).IsSingletonObject.methodPtr);
    return 1;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void AddOutputLink(Link) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddOutputLink
               (MVWorldObject *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).outputLinkRefs;
  if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)link,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
              );
    if (link != (Link *)0x0) {
      (link->fields).outputWOID = (this->fields).id;
      if ((this->fields).OnOutputLinkChanged !=
          (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
        pAVar1 = (this->fields).OnOutputLinkChanged;
        (*(pAVar1->fields)._._.invoke_impl)
                  ((pAVar1->fields)._._.method_code,(this->fields).outputLinkRefs);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean ContainObjectLink(ObjectLink) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_ContainObjectLink
               (MVWorldObject *this,ObjectLink *link,MethodInfo *method)

{
  iVar1 = MVWorldObject_GetIndexOfObjectLink(this,link,(MethodInfo *)0x0);
  return iVar1 != -1;
}


/* MVWorldObject DeepCopy() */

MVWorldObject *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_DeepCopy
          (MVWorldObject *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                   );
    func_?(&TypeInfo__MV__WorldObject__Link);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMVar6 = (MVWorldObject *)
           (*(code *)(this->klass->vtable).ShallowCopy.method)
                     (this,(this->klass->vtable).DeepCopy.methodPtr);
  pMStack_7 = pMVar6;
  pRStack_8 = (RegexCharClass_SingleRange__Array *)
               func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pRStack_8,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
  if (pMVar6 != (MVWorldObject *)0x0) {
    (pMVar6->fields).outputLinkRefs = (List_1_MV_WorldObject_Link_ *)pRStack_8;
    func_?();
    pMVar9 = (MethodInfo *)(this->fields).outputLinkRefs;
    if (pMVar9 != (MethodInfo *)0x0) {
      pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_11,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          pMVar9,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                         );
      pMVar12 = (MethodInfo *)pLVar10->_list;
      RVar13 = pLVar10->_current;
      LStack_11._version = 0;
      uStack_1 = 1;
      LStack_11._current = (RegexCharClass_SingleRange)&stack0xffffffa8;
      while( true ) {
        bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffa8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                          );
        if (bVar14 == 0) break;
        pRStack_15 = (RegexCharClass_SingleRange__Array *)(pMVar6->fields).outputLinkRefs;
        if (RVar13 == (RegexCharClass_SingleRange)0x0) goto code_?;
        pRStack_8 = *(RegexCharClass_SingleRange__Array **)((int)RVar13 + 8);
        pIStack_16 = *(Il2CppClass **)((int)RVar13 + 0x10);
        uStack_17 = *(undefined1 *)((int)RVar13 + 0x14);
        pMVar18 = (MethodInfo *)func_?();
        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Fields *)
        &pMVar18->invoker_method)->_items = (RegexCharClass_SingleRange__Array *)0xffffffff;
        pMVar18->name = (char *)0xffffffff;
        pMVar18->klass = (Il2CppClass *)0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)pMVar18,ExceptionArgument__Enum_obj,pMVar9);
        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Fields *)
        &pMVar18->invoker_method)->_items = pRStack_8;
        pMVar18->name = (char *)pIStack_16;
        pMVar18->klass = pIStack_16;
        *(undefined1 *)&pMVar18->return_type = uStack_17;
        if (pRStack_15 == (RegexCharClass_SingleRange__Array *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pRStack_15,(Object *)pMVar18,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                  );
        pMVar6 = pMStack_7;
        pMVar9 = pMVar18;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&stack0xffffffa8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                 ,pMVar12);
      uStack_1 = 0xffffffff;
      this_00 = (List_1_MV_WorldObject_Link_ *)func_?();
      pMVar12 = MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__;
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
      (pMVar6->fields).inputLinkRefs = this_00;
      func_?();
      pMVar9 = (MethodInfo *)(this->fields).inputLinkRefs;
      if (pMVar9 != (MethodInfo *)0x0) {
        pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           (&LStack_11,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            pMVar9,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                           );
        RVar13 = pLVar10->_current;
        LStack_11._version = 0;
        uStack_1 = 4;
        LStack_11._current = (RegexCharClass_SingleRange)&stack0xffffff98;
        while( true ) {
          bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff98,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                            );
          if (bVar14 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&stack0xffffff98,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                       ,pMVar12);
            uStack_1 = 0xffffffff;
            pDVar19 = HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1
                               ((this->fields).data,(MethodInfo *)0x0);
            (pMVar6->fields).data = pDVar19;
            func_?();
            pDVar19 = HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1
                               ((this->fields).runTimeData,(MethodInfo *)0x0);
            (pMVar6->fields).runTimeData = pDVar19;
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return pMVar6;
          }
          pRStack_8 = (RegexCharClass_SingleRange__Array *)(pMVar6->fields).inputLinkRefs;
          if (RVar13 == (RegexCharClass_SingleRange)0x0) break;
          pRStack_15 = *(RegexCharClass_SingleRange__Array **)((int)RVar13 + 8);
          _Stack_28 = ((Il2CppType *)((int)RVar13 + 0x10))->data;
          uStack_17 = *(undefined1 *)((int)RVar13 + 0x14);
          RVar13 = (RegexCharClass_SingleRange)TypeInfo__MV__WorldObject__Link;
          pMVar18 = (MethodInfo *)func_?();
          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Fields *)
          &pMVar18->invoker_method)->_items = (RegexCharClass_SingleRange__Array *)0xffffffff;
          pMVar18->name = (char *)0xffffffff;
          pMVar18->klass = (Il2CppClass *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)pMVar18,ExceptionArgument__Enum_obj,pMVar9);
          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___Fields *)
          &pMVar18->invoker_method)->_items = pRStack_15;
          pMVar18->name = (char *)_Stack_28;
          pMVar18->klass = (Il2CppClass *)_Stack_28;
          *(undefined1 *)&pMVar18->return_type = uStack_17;
          if (pRStack_8 == (RegexCharClass_SingleRange__Array *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pRStack_8,(Object *)pMVar18,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                    );
          pMVar6 = pMStack_7;
          pMVar9 = pMVar18;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  pMVar6 = (MVWorldObject *)(*pcVar20)();
  return pMVar6;
}


/* Dictionary`2[System.Object,System.Object] DeepCopyWorldObjectDataParameters() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_DeepCopyWorldObjectDataParameters
          (MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Quaternion);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pOVar1 = (Object *)
           func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffb);
  pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectType,&stack0xffffffec);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffa);
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffff9);
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    (*(code *)(this->klass->vtable).get_Position.method)();
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    (*(code *)(this->klass->vtable).get_Rotation.method)();
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack3 = &stack0xfffffff3;
    pWStack4 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
    pOVar1 = (Object *)func_?();
    pIStack5 = (this->klass->vtable).set_Scale.methodPtr;
    pMStack6 = this;
    (*(code *)(this->klass->vtable).get_Scale.method)();
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    pDVar7 = HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1
                       ((this->fields).data,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,(Object *)pDVar7,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack8 = &stack0xfffffff1;
    pWStack9 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
    pOVar1 = (Object *)func_?();
    pIStack10 = (this->klass->vtable).set_RunTimeData.methodPtr;
    pMStack11 = this;
    pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
             (*(code *)(this->klass->vtable).get_RunTimeData.method)();
    pDVar7 = HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1(pDVar7,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,(Object *)pDVar7,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return (Dictionary_2_System_Object_System_Object_ *)this_00;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  pDVar7 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar12)();
  return pDVar7;
}


/* Int32 GetIndexOfObjectLink(ObjectLink) */

int32_t MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetIndexOfObjectLink
                  (MVWorldObject *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).objectLinkRefs;
  while (pLVar1 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return -1;
    }
    pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).objectLinkRefs;
    if (((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
        (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar2,index,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Item_int_
                           ), RVar3 == (RegexCharClass_SingleRange)0x0)) ||
       (link == (ObjectLink *)0x0)) break;
    if (*(int *)((int)RVar3 + 0xc) == (link->fields).objectConnectorWOID) {
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).objectLinkRefs;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      if (*(int *)((int)RVar3 + 0x10) == (link->fields).objectWOID) {
        return index;
      }
    }
    index = index + 1;
    pLVar1 = (this->fields).objectLinkRefs;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void GetLinksForClone(List`1[System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetLinksForClone
               (MVWorldObject *this,List_1_System_Int32_ *links,MethodInfo *method)

{
  uStack_1._0_2_ = 0xffff;
  uStack_1._2_2_ = 0xffff;
  puStack_2 = &DAT_?;
  _Stack_10.genericMethod = *(Il2CppGenericMethod **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->genericMethod = (Il2CppGenericMethod *)&_Stack_10;
  _Stack_14.rgctx_data = (Il2CppRGCTXData *)&stack0xffffffa4;
  _Var4.rgctx_data = (Il2CppRGCTXData *)&stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                   );
    cRam_? = '\x01';
    _Var4 = _Stack_14;
  }
  _Stack_14 = _Var4;
  LStack_3._list = (List_1_System_Object_ *)0x0;
  LStack_3._index = 0;
  LStack_3._version = 0;
  LStack_3._current = (Object *)0x0;
  LStack_4._list = (List_1_System_Object_ *)0x0;
  LStack_4._index = 0;
  LStack_4._version = 0;
  LStack_4._current = (Object *)0x0;
  pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).inputLinkRefs;
  if (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    method_00 = (MethodInfo *)&LStack_6;
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)method_00,pLVar5,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                       );
    LStack_3._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_3._index = pLVar7->_index;
    LStack_3._version = pLVar7->_version;
    LStack_3._current = *(Object **)&pLVar7->_current;
    LStack_6._version = 0;
    uStack_1._0_2_ = 1;
    uStack_1._2_2_ = 0;
    LStack_6._current = (RegexCharClass_SingleRange)&LStack_3;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_3,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                        );
      if (bVar8 == 0) break;
      RStack_9 = (RegexCharClass_SingleRange)LStack_3._current;
      if (((RegexCharClass_SingleRange)LStack_3._current == (RegexCharClass_SingleRange)0x0) ||
         (links == (List_1_System_Int32_ *)0x0)) goto code_?;
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__Contains
                        (links,*(int32_t *)((int)LStack_3._current + 8),
                         MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
      if (bVar8 == 0) {
        if (RStack_9 == (RegexCharClass_SingleRange)0x0) goto code_?;
        in_stack_10 = (MethodInfo *)links;
        func_?(links,*(undefined4 *)((int)RStack_9 + 8),
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
    uStack_1._0_2_ = 0xffff;
    uStack_1._2_2_ = 0xffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&LStack_3,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
               ,in_stack_10);
    uStack_1._0_2_ = 0xffff;
    uStack_1._2_2_ = 0xffff;
    pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).outputLinkRefs;
    if (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_6,pLVar5,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                         );
      LStack_4._list = (List_1_System_Object_ *)pLVar7->_list;
      LStack_4._index = pLVar7->_index;
      LStack_4._version = pLVar7->_version;
      LStack_4._current = *(Object **)&pLVar7->_current;
      LStack_6._version = 0;
      uStack_1._0_2_ = 4;
      uStack_1._2_2_ = 0;
      LStack_6._current = (RegexCharClass_SingleRange)&LStack_4;
      while( true ) {
        do {
          bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_4,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                            );
          pOVar11 = LStack_4._current;
          if (bVar8 == 0) {
            uStack_1._0_2_ = 0xffff;
            uStack_1._2_2_ = 0xffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&LStack_4,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                       ,method_00);
            *unaff_FS_OFFSET = _Stack_10;
            return;
          }
          if (((RegexCharClass_SingleRange)LStack_4._current == (RegexCharClass_SingleRange)0x0) ||
             (links == (List_1_System_Int32_ *)0x0)) goto code_?;
          bVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__Contains
                            (links,*(int32_t *)((int)LStack_4._current + 8),
                             MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
        } while (bVar8 != 0);
        if ((RegexCharClass_SingleRange)pOVar11 == (RegexCharClass_SingleRange)0x0) break;
        method_00 = (MethodInfo *)links;
        func_?(links,*(undefined4 *)((int)pOVar11 + 8),
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
  }
code_?:
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void GetObjectLinksForClone(List`1[System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetObjectLinksForClone
               (MVWorldObject *this,List_1_System_Int32_ *objectLinks,MethodInfo *method)

{
  _Stack_8 = (_union_155)0xffffffff;
  _Stack_c.rgctx_data = (Il2CppRGCTXData *)&DAT_?;
  ppIStack_1 = (Il2CppType **)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &ppIStack_1;
  pIStack_2 = (Il2CppType *)&stack0xffffffbc;
  pIVar3 = (Il2CppType *)&stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                   );
    cRam_? = '\x01';
    pIVar3 = pIStack_2;
  }
  pIStack_2 = pIVar3;
  LStack_4._list = (List_1_System_Object_ *)0x0;
  LStack_4._index = 0;
  LStack_4._version = 0;
  LStack_4._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).objectLinkRefs;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    method_00 = (MethodInfo *)&stack0xffffffd8;
    pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)method_00,this_00,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__GetEnumerator__
                       );
    LStack_4._list = (List_1_System_Object_ *)pLVar5->_list;
    LStack_4._index = pLVar5->_index;
    LStack_4._version = pLVar5->_version;
    LStack_4._current = *(Object **)&pLVar5->_current;
    pIStack_6 = (InvokerMethod)0x0;
    _Stack_8 = (_union_155)0x1;
    pLStack_7 = &LStack_4;
    while( true ) {
      do {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__MoveNext__
                          );
        pOVar9 = LStack_4._current;
        if (bVar8 == 0) {
          _Stack_8 = (_union_155)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&LStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::ObjectLink>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = ppIStack_1;
          return;
        }
        if (((RegexCharClass_SingleRange)LStack_4._current == (RegexCharClass_SingleRange)0x0) ||
           (objectLinks == (List_1_System_Int32_ *)0x0)) goto code_?;
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                List_1_System_Int32__Contains
                          (objectLinks,*(int32_t *)((int)LStack_4._current + 8),
                           MethodInfo__System__Collections__Generic__List<int>__Contains_int_);
      } while (bVar8 != 0);
      if ((RegexCharClass_SingleRange)pOVar9 == (RegexCharClass_SingleRange)0x0) break;
      method_00 = (MethodInfo *)objectLinks;
      func_?(objectLinks,*(undefined4 *)((int)pOVar9 + 8),
                      MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void PartialRemoveFromWOData(Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_PartialRemoveFromWOData
               (MVWorldObject *this,Dictionary_2_System_Object_System_Object_ *dataToRemove,
               MethodInfo *method)

{
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
            ((this->fields).data,dataToRemove,(MethodInfo *)0x0);
  return;
}


/* Void PartialUpdateWOData(Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_PartialUpdateWOData
               (MVWorldObject *this,Dictionary_2_System_Object_System_Object_ *newWOData,
               MethodInfo *method)

{
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            ((this->fields).data,newWOData,(MethodInfo *)0x0);
  return;
}


/* Boolean RemoveInputLink(Link) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveInputLink
               (MVWorldObject *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inputLinkRefs;
  if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Remove
                      ((List_1_System_Object_ *)this_00,(Object *)link,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
                      );
    pAVar2 = (this->fields).OnInputLinkChanged;
    if (pAVar2 != (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,(this->fields).inputLinkRefs,
                 (pAVar2->fields)._._.method);
      return bVar1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean RemoveObjectLink(ObjectLink) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
               (MVWorldObject *this,ObjectLink *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__RemoveAt_int_
                   );
    cRam_? = '\x01';
  }
  index = MVWorldObject_GetIndexOfObjectLink(this,link,(MethodInfo *)0x0);
  if (index != -1) {
    this_00 = (this->fields).objectLinkRefs;
    if (this_00 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)this_00,index,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__RemoveAt_int_
                );
      (*(code *)(this->klass->vtable).OnObjectLinkChanged.method)(this,1,link);
      return 1;
    }
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  return 0;
}


/* Boolean RemoveOutputLink(Link) */

bool MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveOutputLink
               (MVWorldObject *this,Link *link,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).outputLinkRefs;
  if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Remove
                      ((List_1_System_Object_ *)this_00,(Object *)link,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
                      );
    if ((this->fields).OnOutputLinkChanged !=
        (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
      pAVar2 = (this->fields).OnOutputLinkChanged;
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,(this->fields).outputLinkRefs,
                 (pAVar2->fields)._._.method);
    }
    return bVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* MVWorldObject ShallowCopy() */

MVWorldObject *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_ShallowCopy
          (MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MVWorldObject);
    cRam_? = '\x01';
  }
  pMVar1 = (MVWorldObject *)
           mscorlib.dll::System::Object::Object_MemberwiseClone((Object *)this,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObject *)0x0) {
    return (MVWorldObject *)0x0;
  }
  if (((TypeInfo__MV__WorldObject__MVWorldObject->_1).naturalAligment <=
       (pMVar1->klass->_1).naturalAligment) &&
     ((pMVar1->klass->_1).typeHierarchy
      [(TypeInfo__MV__WorldObject__MVWorldObject->_1).naturalAligment - 1] ==
      (Il2CppClass *)TypeInfo__MV__WorldObject__MVWorldObject)) {
    return pMVar1;
  }
  func_?(pMVar1,TypeInfo__MV__WorldObject__MVWorldObject);
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVWorldObject *)(*pcVar2)();
  return pMVar1;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_ToString
                   (MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    func_?(&StringLiteral__owner_);
    func_?(&StringLiteral__id__);
    func_?(&StringLiteral__groupId__);
    func_?(&StringLiteral__itemId__);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,9);
  iStack_1 = (this->fields).type;
  pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__WorldObjectType,&iStack_1);
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    if ((pOVar2 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    func_?(args->vector,pOVar2);
    if ((StringLiteral__id__ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral__id__,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    pSVar5 = StringLiteral__id__;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)StringLiteral__id__;
    func_?(args->vector + 1,pSVar5);
    iStack_6 = (this->fields).id;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if ((pOVar2 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    func_?(args->vector + 2,pOVar2);
    if ((StringLiteral__groupId__ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral__groupId__,(args->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral__groupId__;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = (Object *)StringLiteral__groupId__;
    func_?(args->vector + 3,pSVar5);
    iStack_7 = (this->fields).groupId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    if ((pOVar2 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length < 5) goto code_?;
    args->vector[4] = pOVar2;
    func_?(args->vector + 4,pOVar2);
    if ((StringLiteral__itemId__ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral__itemId__,(args->klass->_0).element_class), iVar4 == 0
       )) goto code_?;
    pSVar5 = StringLiteral__itemId__;
    if (args->max_length < 6) goto code_?;
    args->vector[5] = (Object *)StringLiteral__itemId__;
    func_?(args->vector + 5,pSVar5);
    iStack_8 = (this->fields).itemId;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_8);
    if ((pOVar2 != (Object *)0x0) &&
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    if (args->max_length < 7) goto code_?;
    args->vector[6] = pOVar2;
    func_?(args->vector + 6,pOVar2);
    if ((StringLiteral__owner_ != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral__owner_,(args->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    pSVar5 = StringLiteral__owner_;
    if (args->max_length < 8) goto code_?;
    args->vector[7] = (Object *)StringLiteral__owner_;
    func_?(args->vector + 7,pSVar5);
    iStack_9 = (this->fields).ownerActorNr;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_9);
    if ((pOVar2 == (Object *)0x0) ||
       (iVar4 = func_?(pOVar2,(args->klass->_0).element_class), iVar4 != 0)) {
      if (8 < args->max_length) {
        args->vector[8] = pOVar2;
        func_?(args->vector + 8,pOVar2);
        pSVar5 = mscorlib.dll::System::String::String_Concat_2(args,(MethodInfo *)0x0);
        return pSVar5;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar10)();
  return pSVar5;
}


/* MVWorldObject() */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
               (MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>);
    func_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_MV_WorldObject_Link_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
  (this->fields).outputLinkRefs = pLVar1;
  func_?(&(this->fields).outputLinkRefs,pLVar1);
  pLVar1 = (List_1_MV_WorldObject_Link_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::Link>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__List__);
  (this->fields).inputLinkRefs = pLVar1;
  func_?(&(this->fields).inputLinkRefs,pLVar1);
  this_00 = (List_1_MV_WorldObject_ObjectLink_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__List__);
  (this->fields).objectLinkRefs = this_00;
  func_?(&(this->fields).objectLinkRefs,this_00);
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this->fields).runTimeData = (Dictionary_2_System_Object_System_Object_ *)this_01;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)&(this->fields).runTimeData);
  return;
}


/* Vector3 get_Position() */

Vector3 * MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_Position
                    (Vector3 *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).position.y;
  fVar2 = (this->fields).position.z;
  __return_storage_ptr__->x = (this->fields).position.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Quaternion get_Rotation() */

Quaternion *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_Rotation
          (Quaternion *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).rotation.y;
  fVar2 = (this->fields).rotation.z;
  fVar3 = (this->fields).rotation.w;
  __return_storage_ptr__->x = (this->fields).rotation.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_Scale() */

Vector3 * MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_Scale
                    (Vector3 *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).scale.y;
  fVar2 = (this->fields).scale.z;
  __return_storage_ptr__->x = (this->fields).scale.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Vector3 get_WorldPosition() */

Vector3 * MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldPosition
                    (Vector3 *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  __return_storage_ptr__->x = (pVVar1->zeroVector).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Quaternion get_WorldRotation() */

Quaternion *
MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldRotation
          (Quaternion *__return_storage_ptr__,MVWorldObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  __return_storage_ptr__->x = (pQVar1->identityQuaternion).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}


/* Void set_Position(Vector3) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_set_Position
               (MVWorldObject *this,Vector3 value,MethodInfo *method)

{
  (this->fields).position.x = value.x;
  (this->fields).position.y = value.y;
  (this->fields).position.z = value.z;
  return;
}


/* Void set_PreviewOwnerProfileId(Int32) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_set_PreviewOwnerProfileId
               (MVWorldObject *this,int32_t value,MethodInfo *method)

{
  (this->fields).previewOwnerProfileId = value;
  return;
}


/* Void set_Rotation(Quaternion) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_set_Rotation
               (MVWorldObject *this,Quaternion value,MethodInfo *method)

{
  (this->fields).rotation.x = value.x;
  (this->fields).rotation.y = value.y;
  (this->fields).rotation.z = value.z;
  (this->fields).rotation.w = value.w;
  return;
}


/* Void set_RunTimeData(Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_set_RunTimeData
               (MVWorldObject *this,Dictionary_2_System_Object_System_Object_ *value,
               MethodInfo *method)

{
  (this->fields).runTimeData = value;
  func_?(&(this->fields).runTimeData,value);
  return;
}


/* Void set_Scale(Vector3) */

void MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_set_Scale
               (MVWorldObject *this,Vector3 value,MethodInfo *method)

{
  (this->fields).scale.x = value.x;
  (this->fields).scale.y = value.y;
  (this->fields).scale.z = value.z;
  return;
}

