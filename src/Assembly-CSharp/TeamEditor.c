
/* Void Destroy() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_Destroy(TeamEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    func_?(&(this->fields)._.cullingSubscriberBase,0);
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_Initialize(TeamEditor *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::String>__get_Value__
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    dictionary = (pMVar3->fields).teamNames;
    this_01 = (Dictionary_2_System_UInt32_System_Object_ *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object___ctor_1
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
               (IDictionary_2_System_Int32Enum_System_Object_ *)dictionary,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
              );
    if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &pDStack_5,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__GetEnumerator__
                         );
      uStack_6 = 0;
      pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pDVar4->_current).key;
      uVar8 = *(undefined8 *)&(pDVar4->_current).value;
      pOStack_9 = (Object *)&stack0xffffffa0;
      do {
        method_00.m_Index = (int32_t)uVar8;
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           &stack0xffffffa0,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__MoveNext__
                          );
        if (bVar10 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffa0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__Dispose__
                     ,(MethodInfo *)method_00.m_Index);
          *unaff_FS_OFFSET = uVar1;
          return;
        }
        pDStack_11 = *(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                      (in_stack_12 + 0x58);
        EStack_13.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
        EStack_13.monitor = (MonitorData *)0xffffffff;
        pDStack_14 = pDVar7;
        pDStack_15 = pDVar7;
        pSVar16 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
        if (pDStack_11 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        break;
        uVar8._4_4_ = (int32_t)
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
        ;
        uVar8._0_4_ = (Object *)pSVar16;
        pDVar7 = pDStack_11;
        bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDStack_11,(Object *)pSVar16,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar10 != 0) {
          this_00 = *(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                     (in_stack_12 + 0x58);
          pSVar16 = mscorlib.dll::System::Enum::Enum_ToString
                             ((Enum *)&stack0xffffffc4,(MethodInfo *)0x0);
          if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) break;
          TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_00,(Object *)pSVar16,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          method_00.m_Index = 0;
          if (TVar17.m_Index != 0) {
            if (*(String__Class **)TVar17.m_Index == TypeInfo__System__String) {
              method_00 = TVar17;
            }
            if ((MethodInfo *)method_00.m_Index == (MethodInfo *)0x0) {
              EStack_13.monitor = (MonitorData *)TypeInfo__System__String;
              EStack_13.klass = (Enum__Class *)TVar17;
              func_?();
              break;
            }
          }
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pMVar3 = (pMVar2->fields).teamManager, pMVar3 == (MVTeamManager *)0x0)) break;
        MVTeamManager::MVTeamManager_UpdateTeamName
                  (pMVar3,(MVTeam__Enum)pDStack_15,(String *)method_00.m_Index,(MethodInfo *)0x0);
      } while( true );
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_InitializeInventory
               (TeamEditor *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  cVar1 = (*(code *)(this->klass->vtable).get_HasInputConnector.method)
                    (this,(this->klass->vtable).get_HasObjectConnector.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._._.inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasObjectConnector.method)();
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._._.objectConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_HasOutputConnector.method)
                    (this,(this->klass->vtable).get_HasInputConnector.methodPtr);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._._.outputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_OnDataUpdate(TeamEditor *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::String>__get_Value__
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    dictionary = (pMVar3->fields).teamNames;
    this_01 = (Dictionary_2_System_UInt32_System_Object_ *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object___ctor_1
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
               (IDictionary_2_System_Int32Enum_System_Object_ *)dictionary,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
              );
    if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &pDStack_5,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__GetEnumerator__
                         );
      uStack_6 = 0;
      pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pDVar4->_current).key;
      uVar8 = *(undefined8 *)&(pDVar4->_current).value;
      pOStack_9 = (Object *)&stack0xffffffa0;
      do {
        method_00.m_Index = (int32_t)uVar8;
        bVar10 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           &stack0xffffffa0,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__MoveNext__
                          );
        if (bVar10 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffa0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__Dispose__
                     ,(MethodInfo *)method_00.m_Index);
          *unaff_FS_OFFSET = uVar1;
          return;
        }
        pDStack_11 = *(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                      (in_stack_12 + 0x58);
        EStack_13.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
        EStack_13.monitor = (MonitorData *)0xffffffff;
        pDStack_14 = pDVar7;
        pDStack_15 = pDVar7;
        pSVar16 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
        if (pDStack_11 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        break;
        uVar8._4_4_ = (int32_t)
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
        ;
        uVar8._0_4_ = (Object *)pSVar16;
        pDVar7 = pDStack_11;
        bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDStack_11,(Object *)pSVar16,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar10 != 0) {
          this_00 = *(Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ **)
                     (in_stack_12 + 0x58);
          pSVar16 = mscorlib.dll::System::Enum::Enum_ToString
                             ((Enum *)&stack0xffffffc4,(MethodInfo *)0x0);
          if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) break;
          TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_00,(Object *)pSVar16,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          method_00.m_Index = 0;
          if (TVar17.m_Index != 0) {
            if (*(String__Class **)TVar17.m_Index == TypeInfo__System__String) {
              method_00 = TVar17;
            }
            if ((MethodInfo *)method_00.m_Index == (MethodInfo *)0x0) {
              EStack_13.monitor = (MonitorData *)TypeInfo__System__String;
              EStack_13.klass = (Enum__Class *)TVar17;
              func_?();
              break;
            }
          }
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pMVar3 = (pMVar2->fields).teamManager, pMVar3 == (MVTeamManager *)0x0)) break;
        MVTeamManager::MVTeamManager_UpdateTeamName
                  (pMVar3,(MVTeam__Enum)pDStack_15,(String *)method_00.m_Index,(MethodInfo *)0x0);
      } while( true );
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void UpdateTeamNamesFromData() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_UpdateTeamNamesFromData
               (TeamEditor *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::String>__get_Value__
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar6 != (MVNetworkGame *)0x0) &&
     (pMVar7 = (pMVar6->fields).teamManager, pMVar7 != (MVTeamManager *)0x0)) {
    dictionary = (pMVar7->fields).teamNames;
    this_01 = (Dictionary_2_System_UInt32_System_Object_ *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object___ctor_1
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
               (IDictionary_2_System_Int32Enum_System_Object_ *)dictionary,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
              );
    if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &pDStack_9,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__GetEnumerator__
                         );
      uStack_10 = 0;
      pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pDVar8->_current).key;
      uVar12 = *(undefined8 *)&(pDVar8->_current).value;
      uStack_1 = 1;
      pOStack_13 = (Object *)&stack0xffffff98;
      do {
        method_00.m_Index = (int32_t)uVar12;
        bVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           &stack0xffffff98,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__MoveNext__
                          );
        if (bVar14 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffff98,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__Dispose__
                     ,(MethodInfo *)method_00.m_Index);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pDStack_15 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                     (this->fields)._._._.data;
        EStack_16.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
        EStack_16.monitor = (MonitorData *)0xffffffff;
        pDStack_17 = pDVar11;
        pDStack_18 = pDVar11;
        pSVar19 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_16,(MethodInfo *)0x0);
        if (pDStack_15 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        break;
        uVar12._4_4_ = (int32_t)
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
        ;
        uVar12._0_4_ = (Object *)pSVar19;
        pDVar11 = pDStack_15;
        bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDStack_15,(Object *)pSVar19,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar14 != 0) {
          this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                    (this->fields)._._._.data;
          pSVar19 = mscorlib.dll::System::Enum::Enum_ToString
                             ((Enum *)&stack0xffffffbc,(MethodInfo *)0x0);
          if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) break;
          TVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_00,(Object *)pSVar19,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          method_00.m_Index = 0;
          if (TVar20.m_Index != 0) {
            if (*(String__Class **)TVar20.m_Index == TypeInfo__System__String) {
              method_00 = TVar20;
            }
            if ((MethodInfo *)method_00.m_Index == (MethodInfo *)0x0) {
              EStack_16.monitor = (MonitorData *)TypeInfo__System__String;
              EStack_16.klass = (Enum__Class *)TVar20;
              func_?();
              break;
            }
          }
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar6 == (MVNetworkGame *)0x0) ||
           (pMVar7 = (pMVar6->fields).teamManager, pMVar7 == (MVTeamManager *)0x0)) break;
        MVTeamManager::MVTeamManager_UpdateTeamName
                  (pMVar7,(MVTeam__Enum)pDStack_18,(String *)method_00.m_Index,(MethodInfo *)0x0);
      } while( true );
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* TeamEditor(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::TeamEditor::TeamEditor__ctor
               (TeamEditor *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).teamEditorPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    uVar3 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 & 0xffffdfff;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::TeamEditor::TeamEditor_get_DocumentationType
          (TeamEditor *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_TeamEditor;
}

