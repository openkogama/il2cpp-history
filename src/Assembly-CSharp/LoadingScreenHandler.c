
/* IEnumerator FadeInAnimation() */

IEnumerator *
Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_FadeInAnimation
          (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LoadingScreenHandler___FadeInAnimation_d__24);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LoadingScreenHandler___FadeInAnimation_d__24;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* IEnumerator LoadingBarAnimation() */

IEnumerator *
Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_LoadingBarAnimation
          (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LoadingScreenHandler___LoadingBarAnimation_d__23);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__LoadingScreenHandler___LoadingBarAnimation_d__23;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_OnDestroy
               (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MVJoinState>);
    func_?(&
                    MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&MethodInfo__LoadingScreenHandler__OnJoinStateChanged_MVJoinState_);
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  source = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMStack1 =
       (MVGameControllerBase_OnReceivedGameMsgDelegate__Class *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMStack1 == (MVGameControllerBase_OnReceivedGameMsgDelegate__Class *)0x0) {
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
         (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    pMStack2 = (MVGameControllerBase_OnReceivedGameMsgDelegate__Class *)0x0;
code_?:
    pMStack1 =
         (MVGameControllerBase_OnReceivedGameMsgDelegate__Class *)
         &TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
    func_?();
    pAVar3 = MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged((MethodInfo *)0x0);
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__LoadingScreenHandler__OnJoinStateChanged_MVJoinState_,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    if ((pDVar4 == (Delegate *)0x0) || (iVar5 = func_?(), iVar5 != 0)) {
      if (cRam_? == '\0') {
        ppMStack6 = &TypeInfo__MVGameControllerBase;
        func_?();
        cRam_? = '\x01';
      }
      pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar7 != (MVGameControllerBase *)0x0) {
        ppMStack6 = (MVGameControllerBase__Class **)in_stack_8;
        (pMVar7->fields).onJoinStateChanged = in_stack_8;
        func_?();
        pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar7 != (MVGameControllerBase *)0x0) {
          pAVar3 = (pMVar7->fields).onJoinStateChanged;
          if (pAVar3 != (Action_1_MVJoinState_ *)0x0) {
            ppMStack6 = (pAVar3->fields)._._.method;
            (*(pAVar3->fields)._._.invoke_impl)();
          }
          return;
        }
      }
      ppMStack6 = (MVGameControllerBase__Class **)&stack0x00000040;
      func_?();
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    pMVar10 = (MVGameControllerBase_OnReceivedGameMsgDelegate__Class *)0x0;
    if ((MVGameControllerBase_OnReceivedGameMsgDelegate__Class *)(pMStack1->_0).image ==
        TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar10 = pMStack1;
    }
    if (pMVar10 != (MVGameControllerBase_OnReceivedGameMsgDelegate__Class *)0x0) {
      TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
           (MVGameControllerBase_OnReceivedGameMsgDelegate *)pMVar10;
      pMStack2 = (MVGameControllerBase_OnReceivedGameMsgDelegate__Class *)0x0;
      if ((MVGameControllerBase_OnReceivedGameMsgDelegate__Class *)(pMStack1->_0).image ==
          TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
        pMStack2 = pMStack1;
      }
      pMVar10 = TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate;
      if (pMStack2 == (MVGameControllerBase_OnReceivedGameMsgDelegate__Class *)0x0)
      goto code_?;
      goto code_?;
    }
    pMStack2 = TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate;
    func_?();
  }
  func_?();
  pMStack1 = extraout_ECX;
  pMVar10 = extraout_EDX;
code_?:
  pMStack2 = pMVar10;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnGameMessageReceived(MVGameMsgType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_OnGameMessageReceived
               (LoadingScreenHandler *this,MVGameMsgType__Enum gameMsgType,
               Dictionary_2_System_Object_System_Object_ *gameMsgData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  if (gameMsgType != MVGameMsgType__Enum_JoinFlowStatus) {
    return;
  }
  gameMsgType = 0x500000a;
  key = (Object *)func_?(TypeInfo__System__Byte,(byte *)((int)&gameMsgType + 3));
  if (gameMsgData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)gameMsgData,
                       key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    TVar2.m_Index = 0;
    if (TVar1.m_Index != 0) {
      if (*(String__Class **)TVar1.m_Index == TypeInfo__System__String) {
        TVar2 = TVar1;
      }
      if (TVar2.m_Index == 0) goto code_?;
    }
    pTVar3 = (unaff_ESI->fields).loadingTextMessage;
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)(pTVar3,TVar2.m_Index);
      iVar4 = (unaff_ESI->fields).currentEventCount + 1;
      (unaff_ESI->fields).currentEventCount = iVar4;
      fVar5 = (float)iVar4 / (float)(unaff_ESI->fields).eventsCount;
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
      else if (_UNK_? < fVar5) {
        fVar5 = _UNK_?;
      }
      (unaff_ESI->fields).targetProgress = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_1
                ((MonoBehaviour *)unaff_ESI,(unaff_ESI->fields).loadingBarCoroutine,
                 (MethodInfo *)0x0);
      routine = LoadingScreenHandler_LoadingBarAnimation(unaff_ESI,(MethodInfo *)0x0);
      pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
               MonoBehaviour_StartCoroutine_Auto
                         ((MonoBehaviour *)unaff_ESI,routine,(MethodInfo *)0x0);
      (unaff_ESI->fields).loadingBarCoroutine = pCVar6;
      func_?(&(unaff_ESI->fields).loadingBarCoroutine);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnJoinStateChanged(MVJoinState) */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_OnJoinStateChanged
               (LoadingScreenHandler *this,MVJoinState__Enum joinState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__get_Item_MV__Common__MVGameMode_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (joinState == MVJoinState__Enum_Playing) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField ==
       (GameSessionData *)0x0) || ((this->fields).hasCapturedSessionData != 0)) {
    return;
  }
  pTVar2 = (this->fields).planetNameText;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if ((pGVar3 != (GameSessionData *)0x0) && (pTVar2 != (Text *)0x0)) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,(pGVar3->fields).planetName,
               (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar2 = (this->fields).planetNameText;
    if (pTVar2 != (Text *)0x0) {
      a = (String *)
          (*(code *)(pTVar2->klass->vtable).get_text.method)
                    (pTVar2,(pTVar2->klass->vtable).set_text.methodPtr);
      bVar4 = mscorlib.dll::System::String::String_op_Equality
                        (a,::StringLiteral__,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pTVar2 = (this->fields).planetNameText;
        if ((pTVar2 == (Text *)0x0) ||
           (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)
           ) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
      }
      this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).eventCountLookup;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if ((pGVar3 != (GameSessionData *)0x0) &&
         (this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)) {
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           (this_00,(pGVar3->fields).gameMode,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__get_Item_MV__Common__MVGameMode_
                           );
        (this->fields).eventsCount = (int32_t)pOVar5;
        (this->fields).hasCapturedSessionData = 1;
        routine = LoadingScreenHandler_LoadingBarAnimation(this,(MethodInfo *)0x0);
        pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                 MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        (this->fields).loadingBarCoroutine = pCVar6;
        func_?(&(this->fields).loadingBarCoroutine,pCVar6);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__LoadingScreenHandler___FadeInAnimation_d__24;
        pOVar5 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar5,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        pOVar5[1].klass = (Object__Class *)0x0;
        pOVar5[2].klass = (Object__Class *)this;
        func_?();
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)pOVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler_Start
               (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MVJoinState>);
    func_?(&
                    UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                   );
    func_?(&
                    MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&MethodInfo__LoadingScreenHandler__OnJoinStateChanged_MVJoinState_);
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).planetNameText;
  if (pTVar1 == (Text *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,::StringLiteral__,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar1 = (this->fields).loadingTextMessage;
    if (pTVar1 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,::StringLiteral__,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (this->fields).centerTransform;
    if (this_00 == (RectTransform *)0x0) goto code_?;
    pCVar2 = (CanvasGroup *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)this_00,
                         UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                        );
    (this->fields).centerCanvasGroup = pCVar2;
    func_?(&(this->fields).centerCanvasGroup,pCVar2);
    this_01 = (ProgressBarAndroid *)(this->fields).loadingBar;
    if (this_01 == (ProgressBarAndroid *)0x0) goto code_?;
    ProgressBarAndroid::ProgressBarAndroid_set_Progress(this_01,0.0,(MethodInfo *)0x0);
    pCVar2 = (this->fields).centerCanvasGroup;
    if (pCVar2 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar2,0.0,(MethodInfo *)0x0);
    pTVar3 = (Transform *)(this->fields).centerTransform;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    fVar4 = (this->fields).startCenterScale;
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar6 = (pVVar5->oneVector).x;
    uVar7 = (pVVar5->oneVector).y;
    if (pTVar3 == (Transform *)0x0) goto code_?;
    value.y = (float)uVar7 * fVar4;
    value.x = (float)uVar6 * fVar4;
    value.z = (pVVar5->oneVector).z * fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar3,value,(MethodInfo *)0x0);
    this_02 = (this->fields).sceneObjects;
    if (this_02 == (GameObject *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_02,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar4 = (this->fields).startObjectsScale;
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar8 = (pVVar5->oneVector).x;
    uVar9 = (pVVar5->oneVector).y;
    if (pTVar3 == (Transform *)0x0) goto code_?;
    value_00.y = (float)uVar9 * fVar4;
    value_00.x = (float)uVar8 * fVar4;
    value_00.z = (pVVar5->oneVector).z * fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar3,value_00,(MethodInfo *)0x0);
    pLVar10 = (this->fields).cube;
    if ((pLVar10 == (LoadingCube *)0x0) ||
       (pMVar11 = (pLVar10->fields)._CubeMaterial_k__BackingField, pMVar11 == (Material *)0x0))
    goto code_?;
    pCVar12 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                        ((Color *)&stack0xffffffec,pMVar11,(MethodInfo *)0x0);
    uVar13 = pCVar12->r;
    uVar14 = pCVar12->g;
    uVar15 = pCVar12->b;
    value_01.b = (float)uVar15;
    value_01.g = (float)uVar14;
    value_01.r = (float)uVar13;
    pLVar10 = (this->fields).cube;
    if ((pLVar10 == (LoadingCube *)0x0) ||
       (pMVar11 = (pLVar10->fields)._CubeMaterial_k__BackingField, pMVar11 == (Material *)0x0))
    goto code_?;
    value_01.a = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (pMVar11,value_01,(MethodInfo *)0x0);
    pMVar16 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
    this_03 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_03,(Object *)this,
               MethodInfo__LoadingScreenHandler__OnGameMessageReceived_MV__Common__MVGameMsgType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pMVar16 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar16,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pMVar16 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg =
           (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
code_?:
      func_?();
      pAVar17 = MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged((MethodInfo *)0x0)
      ;
      this_04 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_04,(Object *)this,
                 MethodInfo__LoadingScreenHandler__OnJoinStateChanged_MVJoinState_,(MethodInfo *)0x0
                );
      pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar17,(Delegate *)this_04,(MethodInfo *)0x0);
      if (pDVar18 == (Delegate *)0x0) {
        MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged
                  ((Action_1_MVJoinState_ *)0x0,(MethodInfo *)0x0);
        return;
      }
      pAVar17 = (Action_1_MVJoinState_ *)func_?();
      if (pAVar17 != (Action_1_MVJoinState_ *)0x0) {
        MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged(pAVar17,(MethodInfo *)0x0)
        ;
        return;
      }
      goto code_?;
    }
    pMVar19 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMVar16->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar19 = pMVar16;
    }
    if (pMVar19 == (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg = pMVar19;
    pMVar19 = (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0;
    if (pMVar16->klass == TypeInfo__MVGameControllerBase__OnReceivedGameMsgDelegate) {
      pMVar19 = pMVar16;
    }
    if (pMVar19 != (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* LoadingScreenHandler() */

void Assembly-CSharp.dll::LoadingScreenHandler::LoadingScreenHandler__ctor
               (LoadingScreenHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
    Dictionary_2_System_Int32Enum_System_Int32__Add
              ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,1,7,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
    Dictionary_2_System_Int32Enum_System_Int32__Add
              ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,0,0x11,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32]::
    Dictionary_2_System_Int32Enum_System_Int32__Add
              ((Dictionary_2_System_Int32Enum_System_Int32_ *)this_00,2,7,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameMode,_int>__Add_MV__Common__MVGameMode__int_
              );
    (this->fields).eventCountLookup = (Dictionary_2_MV_Common_MVGameMode_System_Int32_ *)this_00;
    func_?(&(this->fields).eventCountLookup,this_00);
    (this->fields).targetFadeInTime = 2.0;
    (this->fields).startCenterScale = 0.3;
    (this->fields).endCenterScale = 0.75;
    (this->fields).startObjectsScale = 0.5;
    (this->fields).endObjectsScale = 1.0;
    (this->fields).targetLoadingBarTime = 2.0;
    (this->fields).eventsCount = 0xf;
    (this->fields).currentEventCount = 1;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

