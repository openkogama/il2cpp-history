
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser;
  pSVar2 = (ScaleAnimationBase *)func_?();
  (pSVar2->fields).originalScale.x = 15.0;
  (pSVar2->fields).target = (Transform *)0x40000000;
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)pAVar1);
  AvatarLimbManagerLocal+AvatarEmoteRecogniser::
  AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize
            ((AvatarLimbManagerLocal_AvatarEmoteRecogniser *)pSVar2,limbManager,10.0,2.0,4,1,0,
             (MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<float>;
  if (lookDirectionHandler == (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
code_?:
    func_?();
  }
  else {
    a = (lookDirectionHandler->fields).OnLookDirectionYawChange;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)pSVar2,
               MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__HandleNewAngle_float_,
               MethodInfo__System__Action<float>__Action_System__Object__void__);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pDVar6 = (Delegate *)0x0;
    if (pDVar5 == (Delegate *)0x0) {
code_?:
      pDVar5 = (pSVar2->fields)._._._._.m_CachedPtr;
      _UNK_? = pDVar6;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnWaveEmoteStart__,
                 (MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar5,(Delegate *)pUVar4,(MethodInfo *)0x0);
      pDVar6 = (Delegate *)0x0;
      if (pDVar5 != (Delegate *)0x0) {
        if ((Action__Class *)pDVar5->klass == TypeInfo__System__Action) {
          pDVar6 = pDVar5;
        }
        if (pDVar6 == (Delegate *)0x0) goto code_?;
      }
      (pSVar2->fields)._._._._.m_CachedPtr = pDVar6;
      if (pAVar3 != (Action_1_Single___Class *)0x0) {
        pIVar7 = (pAVar3->_0).image;
        bVar8 = (TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal->_1).naturalAligment;
        if ((*(byte *)&pIVar7[4].assembly < bVar8) ||
           (*(AvatarLimbManagerLocal_AvatarPointingHandlerLocal__Class **)
             ((pIVar7[2].typeCount - 4) + (uint)bVar8 * 4) !=
            TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        pAVar10 = (Action_1_Single___Class *)0x0;
        if (bVar9) {
          pAVar10 = pAVar3;
        }
        if (pAVar10 == (Action_1_Single___Class *)0x0) goto code_?;
        pDVar6 = (Delegate *)pAVar10->interfaceOffsets;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)pSVar2,
                   MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__SetIsActive_bool_,
                   MethodInfo__System__Action<bool>__Action_System__Object__void__);
        iVar11 = 0;
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pDVar6 = (Delegate *)0x0;
        if (pDVar5 != (Delegate *)0x0) {
          if ((Action_1_Boolean___Class *)pDVar5->klass == TypeInfo__System__Action<bool>) {
            pDVar6 = pDVar5;
          }
          if (pDVar6 == (Delegate *)0x0) goto code_?;
        }
        *(Delegate **)(iVar11 + 0x58) = pDVar6;
        pDVar12 = (this->fields).emoteRecognisers;
        if (pDVar12 != (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)0x0)
        {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]::
          Dictionary_2_EmoteTypes_System_Object__Add
                    ((Dictionary_2_EmoteTypes_System_Object_ *)pDVar12,EmoteTypes__Enum_Wave,
                     (Object *)pSVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                    );
          pAVar1 = TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser;
          pSVar13 = (ScaleAnimationBase *)func_?();
          (pSVar13->fields).originalScale.x = 15.0;
          (pSVar13->fields).target = (Transform *)0x40000000;
          pSVar2 = pSVar13;
          ScaleAnimationBase::ScaleAnimationBase_Play(pSVar13,0.0,(MethodInfo *)pAVar1);
          AvatarLimbManagerLocal+AvatarEmoteRecogniser::
          AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize
                    ((AvatarLimbManagerLocal_AvatarEmoteRecogniser *)pSVar13,
                     (AvatarLimbManager *)&UNK_?,10.0,2.0,4,1,1,(MethodInfo *)0x0);
          pDVar6 = _UNK_?;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)pSVar2,
                     MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__HandleNewAngle_float_
                     ,MethodInfo__System__Action<float>__Action_System__Object__void__);
          pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                             (pDVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pDVar6 = (Delegate *)0x0;
          if (pDVar5 != (Delegate *)0x0) {
            if ((Action_1_Single___Class *)pDVar5->klass == TypeInfo__System__Action<float>) {
              pDVar6 = pDVar5;
            }
            if (pDVar6 == (Delegate *)0x0) goto code_?;
          }
          pDVar5 = (pSVar2->fields)._._._._.m_CachedPtr;
          _UNK_? = pDVar6;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,
                     MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnShakeEmoteStart__
                     ,(MethodInfo *)0x0);
          value = (Object *)0x0;
          pOVar14 = (Object__Class *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar5,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pOVar15 = (Object__Class *)0x0;
          if (pOVar14 != (Object__Class *)0x0) {
            if ((Action__Class *)(pOVar14->_0).image == TypeInfo__System__Action) {
              pOVar15 = pOVar14;
            }
            if (pOVar15 == (Object__Class *)0x0) goto code_?;
          }
          value[1].klass = pOVar15;
          pDVar12 = (this->fields).emoteRecognisers;
          if (pDVar12 != (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)0x0
             ) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]::
            Dictionary_2_EmoteTypes_System_Object__Add
                      ((Dictionary_2_EmoteTypes_System_Object_ *)pDVar12,EmoteTypes__Enum_Shake,value
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                      );
            pAVar1 = TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser;
            pSVar13 = (ScaleAnimationBase *)func_?();
            (pSVar13->fields).originalScale.x = 15.0;
            (pSVar13->fields).target = (Transform *)0x40000000;
            pSVar2 = pSVar13;
            ScaleAnimationBase::ScaleAnimationBase_Play(pSVar13,0.0,(MethodInfo *)pAVar1);
            AvatarLimbManagerLocal+AvatarEmoteRecogniser::
            AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize
                      ((AvatarLimbManagerLocal_AvatarEmoteRecogniser *)pSVar13,
                       (AvatarLimbManager *)&UNK_?,10.0,2.0,4,0,1,(MethodInfo *)0x0);
            pDVar6 = _UNK_?;
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar4,(Object *)pSVar2,
                       MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__HandleNewAngle_float_
                       ,MethodInfo__System__Action<float>__Action_System__Object__void__);
            pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                               (pDVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
            pDVar6 = (Delegate *)0x0;
            if (pDVar5 != (Delegate *)0x0) {
              if ((Action_1_Single___Class *)pDVar5->klass == TypeInfo__System__Action<float>) {
                pDVar6 = pDVar5;
              }
              if (pDVar6 == (Delegate *)0x0) goto code_?;
            }
            pDVar5 = (pSVar2->fields)._._._._.m_CachedPtr;
            _UNK_? = pDVar6;
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar4,(Object *)this,
                       MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnNodEmoteStart__
                       ,(MethodInfo *)0x0);
            pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                               (pDVar5,(Delegate *)pUVar4,(MethodInfo *)0x0);
            pDVar6 = (Delegate *)0x0;
            if (pDVar5 != (Delegate *)0x0) {
              if ((Action__Class *)pDVar5->klass == TypeInfo__System__Action) {
                pDVar6 = pDVar5;
              }
              if (pDVar6 == (Delegate *)0x0) goto code_?;
            }
            (pSVar2->fields)._._._._.m_CachedPtr = pDVar6;
            pDVar12 = (this->fields).emoteRecognisers;
            if (pDVar12 != (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)
                          0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]::
              Dictionary_2_EmoteTypes_System_Object__Add
                        ((Dictionary_2_EmoteTypes_System_Object_ *)pDVar12,EmoteTypes__Enum_Nod,
                         (Object *)pSVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                        );
              AvatarLimbManager+AvatarEmoteHandler::
              AvatarLimbManager_AvatarEmoteHandler_CreateLimbEvents
                        ((AvatarLimbManager_AvatarEmoteHandler *)this,(AvatarLimbManager *)0x0,
                         (AvatarLimbManager_AvatarLookDirectionHandler *)0x0,
                         (AvatarLimbManager_AvatarPointingHandler *)0x0,
                         (AvatarLimbManager_AvatarHeadRotationHandler *)0x0,
                         (AvatarLimbManager_LimbRotator *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if ((Action_1_Single___Class *)pDVar5->klass == TypeInfo__System__Action<float>) {
      pDVar6 = pDVar5;
    }
    if (pDVar6 != (Delegate *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnNodEmoteStart() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnNodEmoteStart
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.emoteDatas;
  if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]::
             Dictionary_2_EmoteTypes_System_Object__get_Item
                       ((Dictionary_2_EmoteTypes_System_Object_ *)pDVar1,EmoteTypes__Enum_Nod,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((this->fields)._.isActive == 0) {
      return;
    }
    pAVar3 = (this->fields)._.currentRunningEmoteData;
    if (pAVar3 == (AvatarLimbManager_EmoteData *)0x0) {
code_?:
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Nod,(MethodInfo *)0x0
                );
      pAVar4 = (this->fields)._.limbManager;
      if (pAVar4 != (AvatarLimbManager *)0x0) {
        bVar5 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
        pAVar6 = pAVar4->klass;
        if (((pAVar6->_1).naturalAligment < bVar5) ||
           (bVar7 = true,
           (pAVar6->_1).typeHierarchy[bVar5 - 1] != (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)
           ) {
          bVar7 = false;
        }
        pAVar8 = (AvatarLimbManager *)0x0;
        if (bVar7) {
          pAVar8 = pAVar4;
        }
        pAVar9 = TypeInfo__AvatarLimbManagerLocal;
        if (pAVar8 == (AvatarLimbManager *)0x0) goto code_?;
        if (((pAVar6->_1).naturalAligment < bVar5) ||
           ((pAVar6->_1).typeHierarchy[bVar5 - 1] != (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal
           )) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pAVar8 = (AvatarLimbManager *)0x0;
        if (bVar7) {
          pAVar8 = pAVar4;
        }
        if (pAVar8 == (AvatarLimbManager *)0x0) goto code_?;
        this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)pAVar8[1].fields.emoteHandler;
        pDVar1 = (this->fields)._.emoteDatas;
        if ((((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
             (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::
                       Object]::Dictionary_2_EmoteTypes_System_Object__get_Item
                                 ((Dictionary_2_EmoteTypes_System_Object_ *)pDVar1,
                                  EmoteTypes__Enum_Nod,
                                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                                 ), pOVar2 != (Object *)0x0)) &&
            (pOVar2[1].klass != (Object__Class *)0x0)) &&
           (this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0)) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
          SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
                    (this_00,*(float *)&((pOVar2[1].klass)->_0).this_arg.attrs,
                     MethodInfo__System__Action<float>__Invoke_float_);
          return;
        }
      }
    }
    else if (pOVar2 != (Object *)0x0) {
      if (*(short *)&pOVar2[1].monitor <= (pAVar3->fields).priority) {
        return;
      }
      pAVar10 = (pAVar3->fields).emote;
      if (pAVar10 != (AvatarLimbManager_AvatarEmote *)0x0) {
        (*(code *)(pAVar10->klass->vtable).StopEmote.method)(pAVar10,pAVar10->klass[1]._0.image);
        goto code_?;
      }
    }
  }
  func_?(0);
  pAVar4 = extraout_ECX;
  pAVar9 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar9);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnShakeEmoteStart() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnShakeEmoteStart
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.emoteDatas;
  if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]::
             Dictionary_2_EmoteTypes_System_Object__get_Item
                       ((Dictionary_2_EmoteTypes_System_Object_ *)pDVar1,EmoteTypes__Enum_Shake,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((this->fields)._.isActive == 0) {
      return;
    }
    pAVar3 = (this->fields)._.currentRunningEmoteData;
    if (pAVar3 == (AvatarLimbManager_EmoteData *)0x0) {
code_?:
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Shake,
                 (MethodInfo *)0x0);
      pAVar4 = (this->fields)._.limbManager;
      if (pAVar4 != (AvatarLimbManager *)0x0) {
        bVar5 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
        pAVar6 = pAVar4->klass;
        if (((pAVar6->_1).naturalAligment < bVar5) ||
           (bVar7 = true,
           (pAVar6->_1).typeHierarchy[bVar5 - 1] != (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)
           ) {
          bVar7 = false;
        }
        pAVar8 = (AvatarLimbManager *)0x0;
        if (bVar7) {
          pAVar8 = pAVar4;
        }
        pAVar9 = TypeInfo__AvatarLimbManagerLocal;
        if (pAVar8 == (AvatarLimbManager *)0x0) goto code_?;
        if (((pAVar6->_1).naturalAligment < bVar5) ||
           ((pAVar6->_1).typeHierarchy[bVar5 - 1] != (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal
           )) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pAVar8 = (AvatarLimbManager *)0x0;
        if (bVar7) {
          pAVar8 = pAVar4;
        }
        if (pAVar8 == (AvatarLimbManager *)0x0) goto code_?;
        this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)pAVar8[1].fields.emoteHandler;
        pDVar1 = (this->fields)._.emoteDatas;
        if ((((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
             (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::
                       Object]::Dictionary_2_EmoteTypes_System_Object__get_Item
                                 ((Dictionary_2_EmoteTypes_System_Object_ *)pDVar1,
                                  EmoteTypes__Enum_Shake,
                                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                                 ), pOVar2 != (Object *)0x0)) &&
            (pOVar2[1].klass != (Object__Class *)0x0)) &&
           (this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0)) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
          SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
                    (this_00,*(float *)&((pOVar2[1].klass)->_0).this_arg.attrs,
                     MethodInfo__System__Action<float>__Invoke_float_);
          return;
        }
      }
    }
    else if (pOVar2 != (Object *)0x0) {
      if (*(short *)&pOVar2[1].monitor <= (pAVar3->fields).priority) {
        return;
      }
      pAVar10 = (pAVar3->fields).emote;
      if (pAVar10 != (AvatarLimbManager_AvatarEmote *)0x0) {
        (*(code *)(pAVar10->klass->vtable).StopEmote.method)(pAVar10,pAVar10->klass[1]._0.image);
        goto code_?;
      }
    }
  }
  func_?(0);
  pAVar4 = extraout_ECX;
  pAVar9 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar9);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnWaveEmoteStart() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnWaveEmoteStart
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.emoteDatas;
  if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::Object]::
             Dictionary_2_EmoteTypes_System_Object__get_Item
                       ((Dictionary_2_EmoteTypes_System_Object_ *)pDVar1,EmoteTypes__Enum_Wave,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((this->fields)._.isActive == 0) {
      return;
    }
    pAVar3 = (this->fields)._.currentRunningEmoteData;
    if (pAVar3 == (AvatarLimbManager_EmoteData *)0x0) {
code_?:
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this,EmoteTypes__Enum_Wave,
                 (MethodInfo *)0x0);
      pAVar4 = (this->fields)._.limbManager;
      if (pAVar4 != (AvatarLimbManager *)0x0) {
        bVar5 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
        pAVar6 = pAVar4->klass;
        if (((pAVar6->_1).naturalAligment < bVar5) ||
           (bVar7 = true,
           (pAVar6->_1).typeHierarchy[bVar5 - 1] != (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)
           ) {
          bVar7 = false;
        }
        pAVar8 = (AvatarLimbManager *)0x0;
        if (bVar7) {
          pAVar8 = pAVar4;
        }
        pAVar9 = TypeInfo__AvatarLimbManagerLocal;
        if (pAVar8 == (AvatarLimbManager *)0x0) goto code_?;
        if (((pAVar6->_1).naturalAligment < bVar5) ||
           ((pAVar6->_1).typeHierarchy[bVar5 - 1] != (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal
           )) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pAVar8 = (AvatarLimbManager *)0x0;
        if (bVar7) {
          pAVar8 = pAVar4;
        }
        if (pAVar8 == (AvatarLimbManager *)0x0) goto code_?;
        pSVar10 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)pAVar8[1].fields.emoteHandler;
        pDVar1 = (this->fields)._.emoteDatas;
        if ((((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
             (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[EmoteTypes,System::
                       Object]::Dictionary_2_EmoteTypes_System_Object__get_Item
                                 ((Dictionary_2_EmoteTypes_System_Object_ *)pDVar1,
                                  EmoteTypes__Enum_Wave,
                                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                                 ), pOVar2 != (Object *)0x0)) &&
            (pOVar2[1].klass != (Object__Class *)0x0)) &&
           (pSVar10 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0)) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
          SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
                    (pSVar10,*(float *)&((pOVar2[1].klass)->_0).this_arg.attrs,
                     MethodInfo__System__Action<float>__Invoke_float_);
          pAVar4 = (this->fields)._.limbManager;
          if (pAVar4 != (AvatarLimbManager *)0x0) {
            pAVar6 = pAVar4->klass;
            bVar5 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
            if (((pAVar6->_1).naturalAligment < bVar5) ||
               (bVar7 = true,
               (pAVar6->_1).typeHierarchy[bVar5 - 1] !=
               (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
              bVar7 = false;
            }
            pAVar8 = (AvatarLimbManager *)0x0;
            if (bVar7) {
              pAVar8 = pAVar4;
            }
            pAVar9 = TypeInfo__AvatarLimbManagerLocal;
            if (pAVar8 == (AvatarLimbManager *)0x0) goto code_?;
            if (((pAVar6->_1).naturalAligment < bVar5) ||
               ((pAVar6->_1).typeHierarchy[bVar5 - 1] !=
                (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            pAVar8 = (AvatarLimbManager *)0x0;
            if (bVar7) {
              pAVar8 = pAVar4;
            }
            if (pAVar8 == (AvatarLimbManager *)0x0) goto code_?;
            pSVar10 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)
                     pAVar8[1].fields.limbRotator;
            pDVar1 = (this->fields)._.emoteDatas;
            if ((((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
                 (pOVar2 = mscorlib.dll::System::Collections::Generic::
                           Dictionary`2[EmoteTypes,System::Object]::
                           Dictionary_2_EmoteTypes_System_Object__get_Item
                                     ((Dictionary_2_EmoteTypes_System_Object_ *)pDVar1,
                                      EmoteTypes__Enum_Wave,
                                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                                     ), pOVar2 != (Object *)0x0)) &&
                (pOVar2[1].klass != (Object__Class *)0x0)) &&
               (pSVar10 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0)) {
              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
              SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
                        (pSVar10,*(float *)&((pOVar2[1].klass)->_0).this_arg.attrs,
                         MethodInfo__System__Action<float>__Invoke_float_);
              return;
            }
          }
        }
      }
    }
    else if (pOVar2 != (Object *)0x0) {
      if (*(short *)&pOVar2[1].monitor <= (pAVar3->fields).priority) {
        return;
      }
      pAVar11 = (pAVar3->fields).emote;
      if (pAVar11 != (AvatarLimbManager_AvatarEmote *)0x0) {
        (*(code *)(pAVar11->klass->vtable).StopEmote.method)(pAVar11,pAVar11->klass[1]._0.image);
        goto code_?;
      }
    }
  }
  func_?(0);
  pAVar4 = extraout_ECX;
  pAVar9 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar9);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void StartEmoteAndNetworkIt(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_StartEmoteAndNetworkIt
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (undefined1)emoteType;
  EVar2 = emoteType & 0xff;
  if (EVar2 == EmoteTypes__Enum_Shake) {
    AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnShakeEmoteStart(this,(MethodInfo *)0x0);
    return;
  }
  if (EVar2 == EmoteTypes__Enum_Nod) {
    AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnNodEmoteStart(this,(MethodInfo *)0x0);
    return;
  }
  if (EVar2 != EmoteTypes__Enum_Wave) {
    emoteType = CONCAT13(uVar1,(undefined3)emoteType);
    arg1 = (Object *)func_?(TypeInfo__EmoteTypes,(byte *)((int)&emoteType + 3));
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat_1
                        ((Object *)StringLiteral_Could_not_start_and_network_,arg1,
                         (Object *)StringLiteral___Please_add_it_to_the_StartEmot,(MethodInfo *)0x0)
    ;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)message,(MethodInfo *)0x0);
    return;
  }
  AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnWaveEmoteStart(this,(MethodInfo *)0x0);
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
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).emoteRecognisers;
  puStack_8 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if (this_00 != (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_10,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar11 = func_?(auStack_6);
      if (cVar11 == '\0') {
        *puStack_8 = 0x44;
        uStack_1 = 0xffffffff;
        func_?(auStack_6);
        AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_UpdateEmotes
                  ((AvatarLimbManager_AvatarEmoteHandler *)this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__get_Current__
                            );
      iVar12 = func_?();
      if (iVar12 == 0) break;
      if (*(short *)(iVar12 + 0x18) == 0) {
        *(undefined2 *)(iVar12 + 0x18) = 0;
        *(undefined4 *)(iVar12 + 0x20) = *(undefined4 *)(iVar12 + 0x1c);
      }
      fStack_13 = *(float *)(iVar12 + 0x20);
      fStack_14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
      *(float *)(iVar12 + 0x20) = fStack_13 - fStack_14;
      if (fStack_13 - fStack_14 <= 0.0) {
        *(undefined2 *)(iVar12 + 0x18) = 0;
        *(undefined4 *)(iVar12 + 0x20) = *(undefined4 *)(iVar12 + 0x1c);
      }
    }
  }
  func_?(0);
  func_?(0,0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
            );
  (this->fields).emoteRecognisers = this_00;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Dictionary__
            );
  *(HashSet_1_AvatarModifierPackage_AvatarModifier_ **)(in_stack_1 + 0xc) = this_01;
  *(undefined1 *)(in_stack_1 + 0x14) = 1;
  return;
}

