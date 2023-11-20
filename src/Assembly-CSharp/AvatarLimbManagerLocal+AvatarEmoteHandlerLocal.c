
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
  pAVar3 = pAVar2;
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
code_?:
    func_?();
  }
  else {
    pAVar4 = (lookDirectionHandler->fields).OnLookDirectionYawChange;
    pUVar5 = (UnityAction_1_System_Single_ *)func_?();
    object = (Object *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (pUVar5,(Object *)pAVar3,
               MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__HandleNewAngle_float_,
               (MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
    if (pDVar6 != (Delegate *)0x0) {
      pAVar4 = (Action_1_Single_ *)func_?();
      if (pAVar4 != (Action_1_Single_ *)0x0) {
        (lookDirectionHandler->fields).OnLookDirectionYawChange = pAVar4;
        iVar7 = func_?();
        if (iVar7 != 0) goto code_?;
      }
      goto code_?;
    }
    (lookDirectionHandler->fields).OnLookDirectionYawChange = (Action_1_Single_ *)0x0;
code_?:
    func_?();
    pOVar8 = object[1].klass;
    pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar9,(Object *)pUVar5,
               MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnWaveEmoteStart__,
               (MethodInfo *)0x0);
    pOVar8 = (Object__Class *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pOVar8,(Delegate *)pNVar9,(MethodInfo *)0x0);
    if (pOVar8 == (Object__Class *)0x0) {
      object[1].klass = (Object__Class *)0x0;
code_?:
      func_?();
      pDVar6 = _UNK_?;
      if (((TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal->_1).naturalAligment <=
           *(byte *)(_UNK_? + 0xb8)) &&
         (*(AvatarLimbManagerLocal_AvatarPointingHandlerLocal__Class **)
           (*(int *)(_UNK_? + 100) + -4 +
           (uint)(TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal->_1).naturalAligment
           * 4) == TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal)) {
        this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
        value = (Object *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_01,object,
                   MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__SetIsActive_bool_,
                   (MethodInfo *)0x0);
        pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar6,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pDVar6 == (Delegate *)0x0) {
          _UNK_? = (Delegate *)0x0;
code_?:
          func_?();
          this_00 = (this_01->fields)._._.method_code;
          if (this_00 == (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__Add
                    (this_00,3,value,
                     MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                    );
          pAVar1 = TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser;
          pAVar2 = (AvatarLimbManagerLocal_AvatarEmoteRecogniser *)func_?();
          (pAVar2->fields).angleSensitivity = 15.0;
          (pAVar2->fields).resetInterval = 2.0;
          pAVar3 = pAVar2;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)pAVar2,ExceptionArgument__Enum_obj,(MethodInfo *)pAVar1);
          AvatarLimbManagerLocal+AvatarEmoteRecogniser::
          AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize
                    (pAVar2,(AvatarLimbManager *)0x0,10.0,2.0,4,1,1,(MethodInfo *)0x0);
          pAVar4 = (lookDirectionHandler->fields).OnLookDirectionYawChange;
          pUVar5 = (UnityAction_1_System_Single_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
          UnityAction_1_System_Single___ctor
                    (pUVar5,(Object *)pAVar3,
                     MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__HandleNewAngle_float_
                     ,(MethodInfo *)0x0);
          pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
          if (pDVar6 != (Delegate *)0x0) {
            pAVar4 = (Action_1_Single_ *)func_?();
            if (pAVar4 != (Action_1_Single_ *)0x0) {
              (lookDirectionHandler->fields).OnLookDirectionYawChange = pAVar4;
              iVar7 = func_?();
              if (iVar7 != 0) goto code_?;
            }
            goto code_?;
          }
          (lookDirectionHandler->fields).OnLookDirectionYawChange = (Action_1_Single_ *)0x0;
code_?:
          func_?();
          pAVar10 = (pAVar3->fields).OnStartEvent;
          pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar9,(Object *)&UNK_?,
                     MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnShakeEmoteStart__
                     ,(MethodInfo *)0x0);
          pAVar10 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar10,(Delegate *)pNVar9,(MethodInfo *)0x0);
          if (pAVar10 != (Action *)0x0) {
            pAVar11 = (Action *)0x0;
            if (pAVar10->klass == TypeInfo__System__Action) {
              pAVar11 = pAVar10;
            }
            if (pAVar11 != (Action *)0x0) {
              (pAVar3->fields).OnStartEvent = pAVar11;
              pAVar11 = (Action *)0x0;
              if (pAVar10->klass == TypeInfo__System__Action) {
                pAVar11 = pAVar10;
              }
              if (pAVar11 != (Action *)0x0) goto code_?;
            }
            goto code_?;
          }
          (pAVar3->fields).OnStartEvent = (Action *)0x0;
code_?:
          func_?();
          if (_UNK_? == (Dictionary_2_System_ByteEnum_System_Object_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__Add
                    (_UNK_?,1,(Object *)pAVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                    );
          pAVar1 = TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser;
          pAVar2 = (AvatarLimbManagerLocal_AvatarEmoteRecogniser *)func_?();
          (pAVar2->fields).angleSensitivity = 15.0;
          (pAVar2->fields).resetInterval = 2.0;
          pAVar3 = pAVar2;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)pAVar2,ExceptionArgument__Enum_obj,(MethodInfo *)pAVar1);
          AvatarLimbManagerLocal+AvatarEmoteRecogniser::
          AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize
                    (pAVar2,(AvatarLimbManager *)0x0,10.0,2.0,4,0,1,(MethodInfo *)0x0);
          pAVar4 = (lookDirectionHandler->fields).OnLookDirectionPitchChange;
          pUVar5 = (UnityAction_1_System_Single_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
          UnityAction_1_System_Single___ctor
                    (pUVar5,(Object *)pAVar3,
                     MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__HandleNewAngle_float_
                     ,(MethodInfo *)0x0);
          pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
          if (pDVar6 == (Delegate *)0x0) {
            (lookDirectionHandler->fields).OnLookDirectionPitchChange = (Action_1_Single_ *)0x0;
code_?:
            func_?();
            pAVar10 = (pAVar3->fields).OnStartEvent;
            pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar9,(Object *)&UNK_?,
                       MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnNodEmoteStart__
                       ,(MethodInfo *)0x0);
            pAVar11 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar10,(Delegate *)pNVar9,(MethodInfo *)0x0);
            if (pAVar11 == (Action *)0x0) {
              (pAVar3->fields).OnStartEvent = (Action *)0x0;
code_?:
              func_?();
              if (_UNK_? != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__Add
                          (_UNK_?,2,(Object *)pAVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                          );
                AvatarLimbManager+AvatarEmoteHandler::
                AvatarLimbManager_AvatarEmoteHandler_CreateLimbEvents
                          ((AvatarLimbManager_AvatarEmoteHandler *)&UNK_?,
                           (AvatarLimbManager *)pNVar9,lookDirectionHandler,
                           (AvatarLimbManager_AvatarPointingHandler *)&UNK_?,
                           (AvatarLimbManager_AvatarHeadRotationHandler *)pAVar10,
                           (AvatarLimbManager_LimbRotator *)pNVar9,(MethodInfo *)0x0);
                return;
              }
              goto code_?;
            }
            pAVar12 = (Action *)0x0;
            if (pAVar11->klass == TypeInfo__System__Action) {
              pAVar12 = pAVar11;
            }
            if (pAVar12 != (Action *)0x0) {
              (pAVar3->fields).OnStartEvent = pAVar12;
              pAVar12 = (Action *)0x0;
              if (pAVar11->klass == TypeInfo__System__Action) {
                pAVar12 = pAVar11;
              }
              if (pAVar12 != (Action *)0x0) goto code_?;
            }
            goto code_?;
          }
          pAVar4 = (Action_1_Single_ *)func_?();
          if (pAVar4 != (Action_1_Single_ *)0x0) {
            (lookDirectionHandler->fields).OnLookDirectionPitchChange = pAVar4;
            iVar7 = func_?();
            if (iVar7 != 0) goto code_?;
          }
          goto code_?;
        }
        pDVar6 = (Delegate *)func_?();
        if (pDVar6 != (Delegate *)0x0) {
          _UNK_? = pDVar6;
          iVar7 = func_?();
          if (iVar7 != 0) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    pOVar13 = (Object__Class *)0x0;
    if ((Action__Class *)(pOVar8->_0).image == TypeInfo__System__Action) {
      pOVar13 = pOVar8;
    }
    if (pOVar13 == (Object__Class *)0x0) goto code_?;
    object[1].klass = pOVar13;
    pOVar13 = (Object__Class *)0x0;
    if ((Action__Class *)(pOVar8->_0).image == TypeInfo__System__Action) {
      pOVar13 = pOVar8;
    }
    if (pOVar13 != (Object__Class *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,2,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((this->fields)._.isActive == 0) {
      return;
    }
    if ((this->fields)._.currentRunningEmoteData == (AvatarLimbManager_EmoteData *)0x0) {
code_?:
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Nod,(MethodInfo *)0x0
                );
      pAVar3 = (this->fields)._.limbManager;
      if (pAVar3 != (AvatarLimbManager *)0x0) {
        if (((pAVar3->klass->_1).naturalAligment <
             (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment) ||
           ((pAVar3->klass->_1).typeHierarchy
            [(TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
        pDVar1 = (this->fields)._.emoteDatas;
        pAVar4 = pAVar3[1].fields.emoteHandler;
        if ((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
           (((pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       ByteEnum,System::Object]::
                       Dictionary_2_System_ByteEnum_System_Object__get_Item
                                 ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,2,
                                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                                 ), pOVar2 != (Object *)0x0 &&
             (pOVar5 = pOVar2[1].klass, pOVar5 != (Object__Class *)0x0)) &&
            (pAVar4 != (AvatarLimbManager_AvatarEmoteHandler *)0x0)))) {
          uStack6 = *(undefined4 *)&(pAVar4->fields).isActive;
          uStack7._0_2_ = (pOVar5->_0).this_arg.attrs;
          uStack7._2_1_ = (pOVar5->_0).this_arg.type;
          uStack7._3_1_ = (pOVar5->_0).this_arg.field_0x7;
          (*(code *)(pAVar4->fields).emoteDatas)();
          return;
        }
      }
    }
    else if (pOVar2 != (Object *)0x0) {
      if (*(short *)&pOVar2[1].monitor <=
          (((this->fields)._.currentRunningEmoteData)->fields).priority) {
        return;
      }
      pAVar8 = (((this->fields)._.currentRunningEmoteData)->fields).emote;
      if (pAVar8 != (AvatarLimbManager_AvatarEmote *)0x0) {
        (*(code *)(pAVar8->klass->vtable).StopEmote.method)(pAVar8);
        goto code_?;
      }
    }
  }
  func_?();
  pAVar3 = extraout_EDX;
code_?:
  func_?(pAVar3);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,1,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((this->fields)._.isActive == 0) {
      return;
    }
    if ((this->fields)._.currentRunningEmoteData == (AvatarLimbManager_EmoteData *)0x0) {
code_?:
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Shake,
                 (MethodInfo *)0x0);
      pAVar3 = (this->fields)._.limbManager;
      if (pAVar3 != (AvatarLimbManager *)0x0) {
        if (((pAVar3->klass->_1).naturalAligment <
             (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment) ||
           ((pAVar3->klass->_1).typeHierarchy
            [(TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
        pDVar1 = (this->fields)._.emoteDatas;
        pAVar4 = pAVar3[1].fields.emoteHandler;
        if ((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
           (((pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       ByteEnum,System::Object]::
                       Dictionary_2_System_ByteEnum_System_Object__get_Item
                                 ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,1,
                                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                                 ), pOVar2 != (Object *)0x0 &&
             (pOVar5 = pOVar2[1].klass, pOVar5 != (Object__Class *)0x0)) &&
            (pAVar4 != (AvatarLimbManager_AvatarEmoteHandler *)0x0)))) {
          uStack6 = *(undefined4 *)&(pAVar4->fields).isActive;
          uStack7._0_2_ = (pOVar5->_0).this_arg.attrs;
          uStack7._2_1_ = (pOVar5->_0).this_arg.type;
          uStack7._3_1_ = (pOVar5->_0).this_arg.field_0x7;
          (*(code *)(pAVar4->fields).emoteDatas)();
          return;
        }
      }
    }
    else if (pOVar2 != (Object *)0x0) {
      if (*(short *)&pOVar2[1].monitor <=
          (((this->fields)._.currentRunningEmoteData)->fields).priority) {
        return;
      }
      pAVar8 = (((this->fields)._.currentRunningEmoteData)->fields).emote;
      if (pAVar8 != (AvatarLimbManager_AvatarEmote *)0x0) {
        (*(code *)(pAVar8->klass->vtable).StopEmote.method)(pAVar8);
        goto code_?;
      }
    }
  }
  func_?();
  pAVar3 = extraout_EDX;
code_?:
  func_?(pAVar3);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  if (pDVar1 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,3,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((this->fields)._.isActive == 0) {
      return;
    }
    if ((this->fields)._.currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
      if (pOVar2 != (Object *)0x0) {
        if (*(short *)&pOVar2[1].monitor <=
            (((this->fields)._.currentRunningEmoteData)->fields).priority) {
          return;
        }
        pAVar3 = (((this->fields)._.currentRunningEmoteData)->fields).emote;
        if (pAVar3 != (AvatarLimbManager_AvatarEmote *)0x0) {
          (*(code *)(pAVar3->klass->vtable).StopEmote.method)(pAVar3);
          goto code_?;
        }
      }
      goto code_?;
    }
code_?:
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
              ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Wave,(MethodInfo *)0x0)
    ;
    pAVar4 = (this->fields)._.limbManager;
    unaff_EDI = TypeInfo__AvatarLimbManagerLocal;
    if (pAVar4 == (AvatarLimbManager *)0x0) goto code_?;
    if (((pAVar4->klass->_1).naturalAligment <
         (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment) ||
       ((pAVar4->klass->_1).typeHierarchy
        [(TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
    pDVar1 = (this->fields)._.emoteDatas;
    unaff_EDI = (AvatarLimbManagerLocal__Class *)pAVar4[1].fields.emoteHandler;
    if ((pDVar1 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) ||
       (((pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,3,
                              MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                             ), pOVar2 == (Object *)0x0 || (pOVar2[1].klass == (Object__Class *)0x0)
         ) || (unaff_EDI == (AvatarLimbManagerLocal__Class *)0x0)))) goto code_?;
    (*(code *)(unaff_EDI->_0).namespaze)();
    unaff_EDI = (AvatarLimbManagerLocal__Class *)(this->fields)._.limbManager;
    if (unaff_EDI == (AvatarLimbManagerLocal__Class *)0x0) goto code_?;
    pIVar5 = (unaff_EDI->_0).image;
    if (((TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment <= *(byte *)&pIVar5[4].assembly) &&
       (*(AvatarLimbManagerLocal__Class **)
         ((pIVar5[2].typeCount - 4) +
         (uint)(TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment * 4) ==
        TypeInfo__AvatarLimbManagerLocal)) {
      pDVar1 = (this->fields)._.emoteDatas;
      unaff_EDI = (AvatarLimbManagerLocal__Class *)(unaff_EDI->_0).properties;
      if (((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
          ((pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,3,
                                MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                               ), pOVar2 != (Object *)0x0 &&
           (pOVar6 = pOVar2[1].klass, pOVar6 != (Object__Class *)0x0)))) &&
         (unaff_EDI != (AvatarLimbManagerLocal__Class *)0x0)) {
        uVar7._0_2_ = (pOVar6->_0).this_arg.attrs;
        uVar7._2_1_ = (pOVar6->_0).this_arg.type;
        uVar7._3_1_ = (pOVar6->_0).this_arg.field_0x7;
        (*(code *)(unaff_EDI->_0).namespaze)((unaff_EDI->_0).element_class,uVar7);
        return;
      }
      goto code_?;
    }
  }
  func_?(unaff_EDI);
  pAVar4 = extraout_EDX;
code_?:
  func_?(pAVar4);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,1,
                          MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                         );
      if ((this->fields)._.isActive == 0) {
        return;
      }
      if ((this->fields)._.currentRunningEmoteData == (AvatarLimbManager_EmoteData *)0x0) {
code_?:
        AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                  ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Shake,
                   (MethodInfo *)0x0);
        pAVar4 = (this->fields)._.limbManager;
        unaff_EDI = TypeInfo__AvatarLimbManagerLocal;
        if (pAVar4 != (AvatarLimbManager *)0x0) {
          pAVar5 = TypeInfo__AvatarLimbManagerLocal;
          if (((pAVar4->klass->_1).naturalAligment <
               (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment) ||
             ((pAVar4->klass->_1).typeHierarchy
              [(TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
          pDVar2 = (this->fields)._.emoteDatas;
          unaff_EDI = (AvatarLimbManagerLocal__Class *)pAVar4[1].fields.emoteHandler;
          if (pDVar2 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
          goto code_?;
          key = 1;
code_?:
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,key,
                              MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                             );
          if (((pOVar3 != (Object *)0x0) &&
              (pOVar6 = pOVar3[1].klass, pOVar6 != (Object__Class *)0x0)) &&
             (unaff_EDI != (AvatarLimbManagerLocal__Class *)0x0)) {
            uVar7._0_2_ = (unaff_EDI->_0).byval_arg.attrs;
            uVar7._2_1_ = (unaff_EDI->_0).byval_arg.type;
            uVar7._3_1_ = (unaff_EDI->_0).byval_arg.field_0x7;
            uVar8._0_2_ = (pOVar6->_0).this_arg.attrs;
            uVar8._2_1_ = (pOVar6->_0).this_arg.type;
            uVar8._3_1_ = (pOVar6->_0).this_arg.field_0x7;
            (*(code *)(unaff_EDI->_0).namespaze)((unaff_EDI->_0).element_class,uVar8,uVar7);
            return;
          }
        }
      }
      else if (pOVar3 != (Object *)0x0) {
        if (*(short *)&pOVar3[1].monitor <=
            (((this->fields)._.currentRunningEmoteData)->fields).priority) {
          return;
        }
        pAVar9 = (((this->fields)._.currentRunningEmoteData)->fields).emote;
        if (pAVar9 != (AvatarLimbManager_AvatarEmote *)0x0) {
          (*(code *)(pAVar9->klass->vtable).StopEmote.method)(pAVar9,pAVar9->klass[1]._0.image);
          goto code_?;
        }
      }
    }
  }
  else {
    if (EVar1 != EmoteTypes__Enum_Nod) {
      if (EVar1 == EmoteTypes__Enum_Wave) {
        AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnWaveEmoteStart(this,(MethodInfo *)0x0);
        return;
      }
      pEStack_10 = TypeInfo__EmoteTypes;
      pSVar11 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pEStack_10,(MethodInfo *)0x0);
      pSVar11 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Could_not_start_and_network_,pSVar11,
                          StringLiteral___Please_add_it_to_the_StartEmot,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar11,(MethodInfo *)0x0);
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
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,2,
                          MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                         );
      if ((this->fields)._.isActive == 0) {
        return;
      }
      if ((this->fields)._.currentRunningEmoteData == (AvatarLimbManager_EmoteData *)0x0) {
code_?:
        AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                  ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Nod,
                   (MethodInfo *)0x0);
        pAVar4 = (this->fields)._.limbManager;
        unaff_EDI = TypeInfo__AvatarLimbManagerLocal;
        if (pAVar4 != (AvatarLimbManager *)0x0) {
          pAVar5 = TypeInfo__AvatarLimbManagerLocal;
          if (((pAVar4->klass->_1).naturalAligment <
               (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment) ||
             ((pAVar4->klass->_1).typeHierarchy
              [(TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
          pDVar2 = (this->fields)._.emoteDatas;
          unaff_EDI = (AvatarLimbManagerLocal__Class *)pAVar4[1].fields.emoteHandler;
          if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
            key = 2;
            goto code_?;
          }
        }
      }
      else if (pOVar3 != (Object *)0x0) {
        if (*(short *)&pOVar3[1].monitor <=
            (((this->fields)._.currentRunningEmoteData)->fields).priority) {
          return;
        }
        pAVar9 = (((this->fields)._.currentRunningEmoteData)->fields).emote;
        if (pAVar9 != (AvatarLimbManager_AvatarEmote *)0x0) {
          (*(code *)(pAVar9->klass->vtable).StopEmote.method)(pAVar9,pAVar9->klass[1]._0.image);
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  pAVar4 = extraout_EDX;
  pAVar5 = unaff_EDI;
code_?:
  func_?(pAVar4,pAVar5);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  DStack_6._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current._0_4_ = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).emoteRecognisers;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current._0_4_ = (pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dispose__
                   ,unaff_EDI);
        uStack_1 = 0xffffffff;
        AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_UpdateEmotes
                  ((AvatarLimbManager_AvatarEmoteHandler *)this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar12 = DStack_6._current.value;
      if (DStack_6._current.value == (Object *)0x0) break;
      if (*(short *)&DStack_6._current.value[3].klass == 0) {
        *(undefined2 *)&DStack_6._current.value[3].klass = 0;
        DStack_6._current.value[4].klass = (Object__Class *)DStack_6._current.value[3].monitor;
      }
      pOStack_13 = DStack_6._current.value[4].klass;
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
  (this->fields).emoteRecognisers =
       (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)this_00;
  func_?(&(this->fields).emoteRecognisers,this_00);
  AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler__ctor
            ((AvatarLimbManager_AvatarEmoteHandler *)this,(MethodInfo *)0x0);
  return;
}

