
/* Void CreateLimbEvents(AvatarLimbManager, AvatarLimbManager+AvatarLookDirectionHandler,
   AvatarLimbManager+AvatarPointingHandler, AvatarLimbManager+AvatarHeadRotationHandler,
   AvatarLimbManager+LimbRotator) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_CreateLimbEvents
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,AvatarLimbManager *limbManager,
               AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,
               AvatarLimbManager_AvatarPointingHandler *pointingHandler,
               AvatarLimbManager_AvatarHeadRotationHandler *headRotationHandler,
               AvatarLimbManager_LimbRotator *limbRotator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action<float>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnNodEmoteStart__)
    ;
    func_?(&
                    MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnShakeEmoteStart__
                   );
    func_?(&MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnWaveEmoteStart__
                   );
    func_?(&
                    MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__HandleNewAngle_float_
                   );
    func_?(&MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__SetIsActive_bool_);
    func_?(&TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser);
    func_?(&TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                   );
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser;
  pAVar2 = (AvatarLimbManagerLocal_AvatarEmoteRecogniser *)func_?();
  (pAVar2->fields).angleSensitivity = 15.0;
  (pAVar2->fields).resetInterval = 2.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pAVar2,ExceptionArgument__Enum_obj,(MethodInfo *)pAVar1);
  AvatarLimbManagerLocal+AvatarEmoteRecogniser::
  AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize
            (pAVar2,limbManager,10.0,2.0,4,1,0,(MethodInfo *)0x0);
  if (lookDirectionHandler == (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    a = (lookDirectionHandler->fields).OnLookDirectionYawChange;
    pUVar3 = (UnityAction_1_System_Single_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (pUVar3,(Object *)pAVar2,
               MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__HandleNewAngle_float_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)pUVar3,(MethodInfo *)0x0);
    if (pDVar4 != (Delegate *)0x0) {
      iVar5 = func_?();
      if (iVar5 != 0) {
        iRam_? = iVar5;
        iVar5 = func_?();
        if (iVar5 == 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    iRam_? = 0;
code_?:
    func_?();
    pAVar6 = (pAVar2->fields).OnStartEvent;
    pNVar7 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar7,(Object *)a,
               MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnWaveEmoteStart__,
               (MethodInfo *)0x0);
    pAVar6 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)pNVar7,(MethodInfo *)0x0);
    if (pAVar6 == (Action *)0x0) {
      (pAVar2->fields).OnStartEvent = (Action *)0x0;
code_?:
      func_?();
      pDVar4 = _UNK_?;
      bVar8 = (TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal->_1).naturalAligment;
      if ((bVar8 <= *(byte *)(_UNK_? + 0xb8)) &&
         (*(AvatarLimbManagerLocal_AvatarPointingHandlerLocal__Class **)
           (*(int *)(_UNK_? + 100) + -4 + (uint)bVar8 * 4) ==
          TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal)) {
        this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)pAVar2,
                   MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__SetIsActive_bool_,
                   (MethodInfo *)0x0);
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar4,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pDVar4 == (Delegate *)0x0) {
          this_00[1].fields._._.delegate_trampoline = (void *)0x0;
code_?:
          func_?();
          if (_UNK_? == (Dictionary_2_System_ByteEnum_System_Object_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__Add
                    (_UNK_?,3,(Object *)pAVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                    );
          pAVar1 = TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser;
          pAVar9 = (AvatarLimbManagerLocal_AvatarEmoteRecogniser *)func_?();
          (pAVar9->fields).angleSensitivity = 15.0;
          (pAVar9->fields).resetInterval = 2.0;
          pAVar2 = pAVar9;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)pAVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pAVar1);
          AvatarLimbManagerLocal+AvatarEmoteRecogniser::
          AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize
                    (pAVar9,(AvatarLimbManager *)&UNK_?,10.0,2.0,4,1,1,(MethodInfo *)0x0);
          pDVar4 = _UNK_?;
          pUVar3 = (UnityAction_1_System_Single_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
          UnityAction_1_System_Single___ctor
                    (pUVar3,(Object *)pAVar2,
                     MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__HandleNewAngle_float_
                     ,(MethodInfo *)0x0);
          pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                             (pDVar4,(Delegate *)pUVar3,(MethodInfo *)0x0);
          if (pDVar4 == (Delegate *)0x0) {
            _UNK_? = (Delegate *)0x0;
          }
          else {
            pDVar4 = (Delegate *)func_?();
            if ((pDVar4 == (Delegate *)0x0) ||
               (_UNK_? = pDVar4, iVar5 = func_?(), iVar5 == 0))
            goto code_?;
          }
          func_?();
          pAVar10 = &pAVar2->fields;
          pAVar6 = pAVar10->OnStartEvent;
          pNVar7 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar7,(Object *)&UNK_?,
                     MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnShakeEmoteStart__
                     ,(MethodInfo *)0x0);
          pAVar6 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar6,(Delegate *)pNVar7,(MethodInfo *)0x0);
          if (pAVar6 != (Action *)0x0) {
            pAVar11 = (Action *)0x0;
            if (pAVar6->klass == TypeInfo__System__Action) {
              pAVar11 = pAVar6;
            }
            if (pAVar11 != (Action *)0x0) {
              pAVar10->OnStartEvent = pAVar11;
              pAVar11 = (Action *)0x0;
              if (pAVar6->klass == TypeInfo__System__Action) {
                pAVar11 = pAVar6;
              }
              if (pAVar11 != (Action *)0x0) goto code_?;
            }
            goto code_?;
          }
          pAVar10->OnStartEvent = (Action *)0x0;
code_?:
          func_?();
          if (_UNK_? == (Dictionary_2_System_ByteEnum_System_Object_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__Add
                    (_UNK_?,1,(Object *)pAVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                    );
          pAVar1 = TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser;
          pAVar9 = (AvatarLimbManagerLocal_AvatarEmoteRecogniser *)func_?();
          (pAVar9->fields).angleSensitivity = 15.0;
          (pAVar9->fields).resetInterval = 2.0;
          pAVar2 = pAVar9;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)pAVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pAVar1);
          AvatarLimbManagerLocal+AvatarEmoteRecogniser::
          AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize
                    (pAVar9,(AvatarLimbManager *)&UNK_?,10.0,2.0,4,0,1,(MethodInfo *)0x0);
          pDVar4 = _UNK_?;
          pUVar3 = (UnityAction_1_System_Single_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
          UnityAction_1_System_Single___ctor
                    (pUVar3,(Object *)pAVar2,
                     MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__HandleNewAngle_float_
                     ,(MethodInfo *)0x0);
          pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                             (pDVar4,(Delegate *)pUVar3,(MethodInfo *)0x0);
          if (pDVar4 == (Delegate *)0x0) {
            _UNK_? = (Delegate *)0x0;
          }
          else {
            pDVar4 = (Delegate *)func_?();
            if ((pDVar4 == (Delegate *)0x0) ||
               (_UNK_? = pDVar4, iVar5 = func_?(), iVar5 == 0))
            goto code_?;
          }
          func_?();
          pAVar10 = &pAVar2->fields;
          pAVar6 = pAVar10->OnStartEvent;
          pNVar7 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar7,(Object *)&UNK_?,
                     MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnNodEmoteStart__,
                     (MethodInfo *)0x0);
          pAVar6 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar6,(Delegate *)pNVar7,(MethodInfo *)0x0);
          if (pAVar6 == (Action *)0x0) {
            pAVar10->OnStartEvent = (Action *)0x0;
code_?:
            func_?();
            if (_UNK_? != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__Add
                        (_UNK_?,2,(Object *)pAVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                        );
              AvatarLimbManager+AvatarEmoteHandler::
              AvatarLimbManager_AvatarEmoteHandler_CreateLimbEvents
                        ((AvatarLimbManager_AvatarEmoteHandler *)&UNK_?,
                         (AvatarLimbManager *)0x0,
                         (AvatarLimbManager_AvatarLookDirectionHandler *)0x0,
                         (AvatarLimbManager_AvatarPointingHandler *)0x0,
                         (AvatarLimbManager_AvatarHeadRotationHandler *)0x0,
                         (AvatarLimbManager_LimbRotator *)0x0,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
          pAVar11 = (Action *)0x0;
          if (pAVar6->klass == TypeInfo__System__Action) {
            pAVar11 = pAVar6;
          }
          if (pAVar11 != (Action *)0x0) {
            pAVar10->OnStartEvent = pAVar11;
            pAVar11 = (Action *)0x0;
            if (pAVar6->klass == TypeInfo__System__Action) {
              pAVar11 = pAVar6;
            }
            if (pAVar11 != (Action *)0x0) goto code_?;
          }
          goto code_?;
        }
        pvVar12 = (void *)func_?();
        if (pvVar12 == (void *)0x0) goto code_?;
        this_00[1].fields._._.delegate_trampoline = pvVar12;
        iVar5 = func_?();
        if (iVar5 != 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pAVar11 = (Action *)0x0;
    if (pAVar6->klass == TypeInfo__System__Action) {
      pAVar11 = pAVar6;
    }
    if (pAVar11 == (Action *)0x0) goto code_?;
    (pAVar2->fields).OnStartEvent = pAVar11;
    pAVar11 = (Action *)0x0;
    if (pAVar6->klass == TypeInfo__System__Action) {
      pAVar11 = pAVar6;
    }
    if (pAVar11 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnNodEmoteStart() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnNodEmoteStart
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLimbManagerLocal);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.emoteDatas;
  if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    emoteData = (AvatarLimbManager_EmoteData *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,2,
                           MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                          );
    bVar2 = AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                      ((AvatarLimbManager_AvatarEmoteHandler *)this,emoteData,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
              ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Nod,(MethodInfo *)0x0);
    pAVar3 = (this->fields)._.limbManager;
    if (pAVar3 != (AvatarLimbManager *)0x0) {
      bVar4 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
      if (((pAVar3->klass->_1).naturalAligment < bVar4) ||
         ((pAVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
      pDVar1 = (this->fields)._.emoteDatas;
      pAVar5 = pAVar3[1].fields.emoteHandler;
      if ((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
         (((pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,2,
                                MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                               ), pOVar6 != (Object *)0x0 &&
           (pOVar7 = pOVar6[1].klass, pOVar7 != (Object__Class *)0x0)) &&
          (pAVar5 != (AvatarLimbManager_AvatarEmoteHandler *)0x0)))) {
        uStack8._0_2_ = (pOVar7->_0).this_arg.attrs;
        uStack8._2_1_ = (pOVar7->_0).this_arg.type;
        uStack8._3_1_ = (pOVar7->_0).this_arg.field_0x7;
        pAStack9 = pAVar5[1].klass;
        (*(code *)(pAVar5->fields).emoteDatas)();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnShakeEmoteStart() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnShakeEmoteStart
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLimbManagerLocal);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.emoteDatas;
  if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    emoteData = (AvatarLimbManager_EmoteData *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,1,
                           MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                          );
    bVar2 = AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                      ((AvatarLimbManager_AvatarEmoteHandler *)this,emoteData,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
              ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Shake,(MethodInfo *)0x0
              );
    pAVar3 = (this->fields)._.limbManager;
    if (pAVar3 != (AvatarLimbManager *)0x0) {
      bVar4 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
      if (((pAVar3->klass->_1).naturalAligment < bVar4) ||
         ((pAVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
      pDVar1 = (this->fields)._.emoteDatas;
      pAVar5 = pAVar3[1].fields.emoteHandler;
      if ((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
         (((pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,1,
                                MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                               ), pOVar6 != (Object *)0x0 &&
           (pOVar7 = pOVar6[1].klass, pOVar7 != (Object__Class *)0x0)) &&
          (pAVar5 != (AvatarLimbManager_AvatarEmoteHandler *)0x0)))) {
        uStack8._0_2_ = (pOVar7->_0).this_arg.attrs;
        uStack8._2_1_ = (pOVar7->_0).this_arg.type;
        uStack8._3_1_ = (pOVar7->_0).this_arg.field_0x7;
        pAStack9 = pAVar5[1].klass;
        (*(code *)(pAVar5->fields).emoteDatas)();
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnWaveEmoteStart() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnWaveEmoteStart
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLimbManagerLocal);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.emoteDatas;
  if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    emoteData = (AvatarLimbManager_EmoteData *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,3,
                           MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                          );
    bVar2 = AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                      ((AvatarLimbManager_AvatarEmoteHandler *)this,emoteData,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
              ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Wave,(MethodInfo *)0x0)
    ;
    pAVar3 = (this->fields)._.limbManager;
    unaff_EDI = TypeInfo__AvatarLimbManagerLocal;
    if (pAVar3 != (AvatarLimbManager *)0x0) {
      bVar4 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
      if (((pAVar3->klass->_1).naturalAligment < bVar4) ||
         ((pAVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
      pDVar1 = (this->fields)._.emoteDatas;
      unaff_EDI = (AvatarLimbManagerLocal__Class *)pAVar3[1].fields.emoteHandler;
      if ((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
         (((pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,3,
                                MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                               ), pOVar5 != (Object *)0x0 &&
           (pOVar5[1].klass != (Object__Class *)0x0)) &&
          (unaff_EDI != (AvatarLimbManagerLocal__Class *)0x0)))) {
        pAStack6._0_2_ = (unaff_EDI->_0).byval_arg.attrs;
        pAStack6._2_1_ = (unaff_EDI->_0).byval_arg.type;
        pAStack6._3_1_ = (unaff_EDI->_0).byval_arg.field_0x7;
        (*(code *)(unaff_EDI->_0).namespaze)();
        pAVar3 = (this->fields)._.limbManager;
        unaff_EDI = TypeInfo__AvatarLimbManagerLocal;
        if (pAVar3 != (AvatarLimbManager *)0x0) {
          bVar4 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
          if (((pAVar3->klass->_1).naturalAligment < bVar4) ||
             ((pAVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
              (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
          pDVar1 = (this->fields)._.emoteDatas;
          unaff_EDI = (AvatarLimbManagerLocal__Class *)pAVar3[1].fields.limbRotator;
          if (((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
              ((pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,3,
                                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                                   ), pOVar5 != (Object *)0x0 &&
               (pOVar5[1].klass != (Object__Class *)0x0)))) &&
             (unaff_EDI != (AvatarLimbManagerLocal__Class *)0x0)) {
            pAStack6._0_2_ = (unaff_EDI->_0).byval_arg.attrs;
            pAStack6._2_1_ = (unaff_EDI->_0).byval_arg.type;
            pAStack6._3_1_ = (unaff_EDI->_0).byval_arg.field_0x7;
            (*(code *)(unaff_EDI->_0).namespaze)();
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  pAStack6 = unaff_EDI;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StartEmoteAndNetworkIt(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_StartEmoteAndNetworkIt
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EmoteTypes);
    func_?(&StringLiteral_Could_not_start_and_network_);
    func_?(&StringLiteral___Please_add_it_to_the_StartEmot);
    cRam_? = '\x01';
  }
  EVar1 = emoteType & 0xff;
  if (EVar1 == EmoteTypes__Enum_Shake) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AvatarLimbManagerLocal);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (this->fields)._.emoteDatas;
    if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
      pAVar3 = (AvatarLimbManager_EmoteData *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,1,
                          MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                         );
      method_00 = (MethodInfo *)&UNK_?;
      bVar4 = AvatarLimbManager+AvatarEmoteHandler::
              AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                        ((AvatarLimbManager_AvatarEmoteHandler *)this,pAVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Shake,
                 (MethodInfo *)0x0);
      pAVar5 = (this->fields)._.limbManager;
      unaff_EDI = TypeInfo__AvatarLimbManagerLocal;
      if (pAVar5 != (AvatarLimbManager *)0x0) {
        bVar6 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
        pAVar7 = TypeInfo__AvatarLimbManagerLocal;
        if (((pAVar5->klass->_1).naturalAligment < bVar6) ||
           ((pAVar5->klass->_1).typeHierarchy[bVar6 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
        pDVar2 = (this->fields)._.emoteDatas;
        unaff_EDI = (AvatarLimbManagerLocal__Class *)pAVar5[1].fields.emoteHandler;
        if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
        goto code_?;
      }
    }
  }
  else {
    if (EVar1 != EmoteTypes__Enum_Nod) {
      if (EVar1 != EmoteTypes__Enum_Wave) {
        pEStack_8 = TypeInfo__EmoteTypes;
        pSVar9 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pEStack_8,(MethodInfo *)0x0);
        pSVar9 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_Could_not_start_and_network_,pSVar9,
                            StringLiteral___Please_add_it_to_the_StartEmot,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar9,(MethodInfo *)0x0);
        return;
      }
      AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnWaveEmoteStart(this,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AvatarLimbManagerLocal);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (this->fields)._.emoteDatas;
    if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
      pAVar3 = (AvatarLimbManager_EmoteData *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,2,
                          MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                         );
      method_00 = (MethodInfo *)&UNK_?;
      bVar4 = AvatarLimbManager+AvatarEmoteHandler::
              AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                        ((AvatarLimbManager_AvatarEmoteHandler *)this,pAVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Nod,(MethodInfo *)0x0
                );
      pAVar5 = (this->fields)._.limbManager;
      unaff_EDI = TypeInfo__AvatarLimbManagerLocal;
      if (pAVar5 != (AvatarLimbManager *)0x0) {
        bVar6 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
        pAVar7 = TypeInfo__AvatarLimbManagerLocal;
        if (((pAVar5->klass->_1).naturalAligment < bVar6) ||
           ((pAVar5->klass->_1).typeHierarchy[bVar6 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
        pDVar2 = (this->fields)._.emoteDatas;
        unaff_EDI = (AvatarLimbManagerLocal__Class *)pAVar5[1].fields.emoteHandler;
        if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
          in_stack_10 = 2;
code_?:
          pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,
                               in_stack_10,method_00);
          if (((pOVar11 != (Object *)0x0) &&
              (pOVar12 = pOVar11[1].klass, pOVar12 != (Object__Class *)0x0)) &&
             (unaff_EDI != (AvatarLimbManagerLocal__Class *)0x0)) {
            uVar13._0_2_ = (unaff_EDI->_0).byval_arg.attrs;
            uVar13._2_1_ = (unaff_EDI->_0).byval_arg.type;
            uVar13._3_1_ = (unaff_EDI->_0).byval_arg.field_0x7;
            uVar14._0_2_ = (pOVar12->_0).this_arg.attrs;
            uVar14._2_1_ = (pOVar12->_0).this_arg.type;
            uVar14._3_1_ = (pOVar12->_0).this_arg.field_0x7;
            (*(code *)(unaff_EDI->_0).namespaze)((unaff_EDI->_0).element_class,uVar14,uVar13);
            return;
          }
        }
      }
    }
  }
  func_?();
  pAVar5 = extraout_EDX;
  pAVar7 = unaff_EDI;
code_?:
  func_?(pAVar5,pAVar7);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateEmotes() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_UpdateEmotes
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).emoteRecognisers;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_7,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6->_dictionary;
    DStack_9._version = pDVar6->_version;
    DStack_9._index = pDVar6->_index;
    DStack_9._current._0_4_ = (pDVar6->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        (&DStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dispose__
                   ,unaff_EDI);
        uStack_1 = 0xffffffff;
        AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_UpdateEmotes
                  ((AvatarLimbManager_AvatarEmoteHandler *)this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar12 = DStack_9._current.value;
      if (DStack_9._current.value == (Object *)0x0) break;
      if (*(short *)&DStack_9._current.value[3].klass == 0) {
        *(undefined2 *)&DStack_9._current.value[3].klass = 0;
        DStack_9._current.value[4].klass = (Object__Class *)DStack_9._current.value[3].monitor;
      }
      pOStack_13 = DStack_9._current.value[4].klass;
      fStack_14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
      pOVar12[4].klass = (Object__Class *)((float)pOStack_13 - fStack_14);
      if ((float)pOStack_13 - fStack_14 <= 0.0) {
        *(undefined2 *)&pOVar12[3].klass = 0;
        pOVar12[4].klass = (Object__Class *)pOVar12[3].monitor;
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* AvatarLimbManagerLocal+AvatarEmoteHandlerLocal() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal__ctor
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
            );
  ppDVar1 = &(this->fields).emoteRecognisers;
  *ppDVar1 = (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)this_00;
  func_?(ppDVar1,this_00);
  AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler__ctor
            ((AvatarLimbManager_AvatarEmoteHandler *)this,(MethodInfo *)0x0);
  return;
}

