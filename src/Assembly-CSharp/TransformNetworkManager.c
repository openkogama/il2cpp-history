
/* Void AddReporter(Int32, MVNetworkReporter) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_AddReporter
               (TransformNetworkManager *this,int32_t woID,MVNetworkReporter *networkReporter,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).networkedObjects;
  iVar1 = unaff_EDI;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                      );
    this = (TransformNetworkManager *)(this->fields).networkedObjects;
    if (bVar2 != 0) goto code_?;
    iVar1 = woID;
    if ((Dictionary_2_System_Object_System_Object_ *)this !=
        (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)woID,
                 (Object *)networkReporter,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                );
      return;
    }
  }
  woID = iVar1;
  func_?();
code_?:
  func_?(this);
  uVar3 = func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                         );
  iVar4 = func_?(this,woID,uVar3);
  pSVar5 = (String *)func_?(&StringLiteral_Trying_to_add_reporter_while_net);
  if (iVar4 == 0) {
    str1 = (String *)0x0;
  }
  else {
    pSVar5 = (String *)func_?(&StringLiteral_Trying_to_add_reporter_while_net);
    func_?(iVar4);
    str1 = (String *)func_?(3,iVar4);
  }
  pSVar5 = mscorlib.dll::System::String::String_Concat_3(pSVar5,str1,(MethodInfo *)0x0);
  uVar3 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar3);
  func_?(this_01);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar5,(MethodInfo *)0x0);
  uStack6 =
       func_?(&MethodInfo__TransformNetworkManager__AddReporter_int__MVNetworkReporter_);
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AddTransformPackage(Int32, NetworkTransformPackage) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_AddTransformPackage
               (TransformNetworkManager *this,int32_t woID,NetworkTransformPackage *p,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                   );
    func_?(&TypeRef__MVNetworkListener);
    func_?(&TypeInfo__MVNetworkListener);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral__this_is_probably_due_to_ownersh);
    func_?(&StringLiteral_Attempt_to_update_world_object__);
    func_?(&StringLiteral_worldObjectClientManager_WorldOb);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClientManager *)0x0) {
    owner = (MVWorldObjectClient *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (this_02,woID,(MethodInfo *)0x0);
    if (owner == (MVWorldObjectClient *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
      return;
    }
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (this->fields).networkedObjects;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)woID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                        );
      if (bVar1 == 0) {
        this_03 = (MVNetworkListener *)func_?();
        if (this_03 == (MVNetworkListener *)0x0) goto code_?;
        this_05 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        MVNetworkListener::MVNetworkListener__ctor(this_03,owner,(MethodInfo *)0x0);
        if (this_05 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_05,(Object *)woID,(Object *)this_03,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                  );
      }
      this_01 = (this->fields).networkedObjects;
      if (this_01 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
        p_00 = (NetworkTransformPackage *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,woID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                         );
        if (p_00 != (NetworkTransformPackage *)0x0) {
          pTVar2 = mscorlib.dll::System::Object::Object_GetType((Object *)p_00,(MethodInfo *)0x0);
          handle = TypeRef__MVNetworkListener;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
          bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)pTVar2,(Object **)right,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            if (((TypeInfo__MVNetworkListener->_1).typeHierarchyDepth <=
                 (p_00->klass->_1).typeHierarchyDepth) &&
               (ppIVar3 = (p_00->klass->_1).typeHierarchy,
               ppIVar3[(TypeInfo__MVNetworkListener->_1).typeHierarchyDepth - 1] ==
               (Il2CppClass *)TypeInfo__MVNetworkListener)) {
              this_04 = (NetworkTransformPackage *)0x0;
              if (ppIVar3[(TypeInfo__MVNetworkListener->_1).typeHierarchyDepth - 1] ==
                  (Il2CppClass *)TypeInfo__MVNetworkListener) {
                this_04 = p_00;
              }
              MVNetworkListener::MVNetworkListener_AddTransformPackage
                        ((MVNetworkListener *)this_04,p_00,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
          pTVar2 = mscorlib.dll::System::Object::Object_GetType((Object *)p_00,(MethodInfo *)0x0);
          pSVar4 = StringLiteral_worldObjectClientManager_WorldOb;
          if (pTVar2 == (Type *)0x0) {
            str1 = (String *)0x0;
          }
          else {
            str1 = (String *)(*(pTVar2->klass->vtable).ToString.methodPtr)();
          }
          pSVar4 = mscorlib.dll::System::String::String_Concat_4
                             (pSVar4,str1,StringLiteral__this_is_probably_due_to_ownersh,
                              (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)pSVar4,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVNetworkObject GetNetworkObject(Int32) */

MVNetworkObject *
Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_GetNetworkObject
          (TransformNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).networkedObjects;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)woID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return (MVNetworkObject *)0x0;
    }
    this_01 = (this->fields).networkedObjects;
    if (this_01 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
      pMVar2 = (MVNetworkObject *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,woID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                         );
      return pMVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar2 = (MVNetworkObject *)(*pcVar3)();
  return pMVar2;
}


/* Void RemoveNetworkObject(Int32) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
               (TransformNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                   );
    func_?(&StringLiteral_RemoveNetworkObject_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&woID,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_RemoveNetworkObject_,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    woID = (int32_t)TypeInfo__UnityEngine__Debug;
    func_?();
  }
  woID = 0;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  key = woID;
  this_00 = (MethodInfo *)(pSVar1->fields)._stringLength;
  if (this_00 != (MethodInfo *)0x0) {
    woID = (int32_t)&UNK_?;
    method = this_00;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_Update
               (TransformNetworkManager *this,MVNetworkGame *game,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__Dispose__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    in_stack_6 =
         &MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVNetworkObject>__get_Key__;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVNetworkObject>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  auStack_8._0_4_ = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  auStack_8._4_4_ = 0;
  auStack_8._8_4_ = 0;
  auStack_8._12_2_ = 0;
  auStack_8._14_2_ = 0;
  if (game != (MVNetworkGame *)0x0) {
    iVar9 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(game,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField = iVar9 + -600;
    method_00 = (MethodInfo *)(this->fields).networkedObjects;
    if (method_00 != (MethodInfo *)0x0) {
      pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          (auStack_8 + 0x10),(Dictionary_2_System_Object_System_Object_ *)method_00
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__GetEnumerator__
                         );
      DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar10->_dictionary;
      DStack_7._version = pDVar10->_version;
      DStack_7._index = pDVar10->_index;
      DStack_7._current.key = (int32_t)(pDVar10->_current).key;
      DStack_7._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
      pOStack_11 = (Object *)0x0;
      uStack_1 = 1;
      pDStack_12 = &DStack_7;
code_?:
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__MoveNext__
                        );
      if (bVar13 != 0) {
        pMStack_14 = (MethodInfo *)DStack_7._current.key;
        pOStack_15 = DStack_7._current.value;
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_02 != (MVWorldObjectClientManager *)0x0) {
          in_stack_6 = (MethodInfo **)0x0;
          pMVar16 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_02,(int32_t)pMStack_14,(MethodInfo *)0x0);
          if (pMVar16 == (MVWorldObject *)0x0) {
            pLVar17 = (this->fields).removeList;
            if (pLVar17 != (List_1_System_Int32_ *)0x0) goto code_?;
          }
          else if (pOStack_15 != (Object *)0x0) goto code_?;
        }
        goto code_?;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__Dispose__
                 ,(MethodInfo *)in_stack_6);
      uStack_1 = 0xffffffff;
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).removeList;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)auStack_19,this_00,
                           MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
      auStack_8._0_4_ = pLVar18->_list;
      auStack_8._4_4_ = pLVar18->_index;
      auStack_8._8_4_ = pLVar18->_version;
      auStack_8._12_4_ = pLVar18->_current;
      pOStack_11 = (Object *)0x0;
      uStack_1 = 4;
      pDStack_12 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)auStack_8
      ;
      while (bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                               ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                 *)auStack_8,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                               ), bVar13 != 0) {
        this_01 = (this->fields).networkedObjects;
        if (this_01 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,auStack_8._12_4_,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                  );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)auStack_8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
                 method_00);
      uStack_1 = 0xffffffff;
      pLVar17 = (this->fields).removeList;
      if (pLVar17 != (List_1_System_Int32_ *)0x0) {
        piVar20 = &(pLVar17->fields)._version;
        *piVar20 = *piVar20 + 1;
        (pLVar17->fields)._size = 0;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar21 = func_?();
  uVar21 = func_?(uVar21);
  func_?(uVar21);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
code_?:
  in_stack_6 = (MethodInfo **)&UNK_?;
  func_?(5,pOStack_15,game);
  cVar23 = func_?(4,pOStack_15);
  if (cVar23 != '\0') {
    pLVar17 = (this->fields).removeList;
    if (pLVar17 == (List_1_System_Int32_ *)0x0) goto code_?;
code_?:
    method_00 = pMStack_14;
    func_?(pLVar17,pMStack_14,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
    ;
  }
  goto code_?;
}


/* TransformNetworkManager() */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager__ctor
               (TransformNetworkManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVNetworkObject_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>
                           );
  if (this_00 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Dictionary__
              );
    (this->fields).networkedObjects = this_00;
    func_?(&this->fields,this_00);
    this_01 = (List_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__List<int>);
    if (this_01 != (List_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      method_00 = (MethodInfo *)&(this->fields).removeList;
      (this->fields).removeList = this_01;
      func_?(method_00,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 get_DelayedTime() */

int32_t Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_get_DelayedTime
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TransformNetworkManager);
    cRam_? = '\x01';
  }
  return TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField;
}


/* Void set_DelayedTime(Int32) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_set_DelayedTime
               (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TransformNetworkManager);
    cRam_? = '\x01';
  }
  TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField = value;
  return;
}

