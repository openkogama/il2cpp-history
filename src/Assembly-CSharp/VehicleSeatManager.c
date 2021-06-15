
/* Void AttachWorldObjectToSeat(Int32, Boolean, MVAvatar, Int32) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_AttachWorldObjectToSeat
               (VehicleSeatManager *this,int32_t instigatorActorNr,bool instigatorIsLocal,
               MVAvatar *vehicleUser,int32_t vehicleSeatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).seats;
  if (this_00 != (List_1_VehicleSeatBase_ *)0x0) {
    this_02 = (VehicleSeatBase *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                         vehicleSeatID,
                         MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                        );
    pMVar1 = (this->fields).woOwner;
    if (pMVar1 != (MVVehicleBase *)0x0) {
      pOVar2 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar1,(MethodInfo *)0x0)
      ;
      pMVar1 = (this->fields).woOwner;
      if (pMVar1 != (MVVehicleBase *)0x0) {
        pSVar3 = (String *)
                 UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                 TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                 TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                           ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar1,
                            (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
           this_03 != (MVLocalPlayer *)0x0)) {
          pSVar5 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_03,(MethodInfo *)0x0)
          ;
          if (((Object *)instigatorActorNr != pOVar2) && (pSVar3 == pSVar5)) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
            pTVar6 = (TransformNetworkManager *)
                     UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                     TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                     TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                               ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                                (MethodInfo *)0x0);
            pMVar1 = (this->fields).woOwner;
            if ((pMVar1 == (MVVehicleBase *)0x0) ||
               (pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0),
               pTVar6 == (TransformNetworkManager *)0x0)) goto code_?;
            pMVar8 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                               (pTVar6,(int32_t)pIVar7,(MethodInfo *)0x0);
            if ((pMVar8 == (MVNetworkObject *)0x0) ||
               (iVar9 = func_?(pMVar8,TypeInfo__MVNetworkReporter), iVar9 == 0)) {
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_Expected_reporter_when_vehicle_i,(MethodInfo *)0x0)
              ;
              return;
            }
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_Getting_rid_of_reporter_as_vehic,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
            in_stack_10 =
                 (MethodInfo *)
                 UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                 TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                 TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                           ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                            (MethodInfo *)0x0);
            pMVar1 = (this->fields).woOwner;
            if ((pMVar1 == (MVVehicleBase *)0x0) ||
               (pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0),
               in_stack_10 == (MethodInfo *)0x0)) goto code_?;
            TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                      ((TransformNetworkManager *)in_stack_10,(int32_t)pIVar7,
                       (MethodInfo *)0x0);
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
            pRVar11 = (RuntimeVariableNetworkManager *)
                      ShootableButton::ShootableButton_get_InputSignalReceiver
                                ((ShootableButton *)pMVar4,(MethodInfo *)0x0);
            pMVar1 = (this->fields).woOwner;
            if ((pMVar1 == (MVVehicleBase *)0x0) ||
               (pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0),
               pRVar11 == (RuntimeVariableNetworkManager *)0x0)) goto code_?;
            RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                      (pRVar11,(int32_t)pIVar7,(MethodInfo *)0x0);
          }
          if (this_02 != (VehicleSeatBase *)0x0) {
            if ((this_02->fields).SeatType == 0) {
              if ((instigatorIsLocal != 0) && ((Object *)instigatorActorNr != pOVar2)) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
                pTVar6 = (TransformNetworkManager *)
                         UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                         TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                         TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                   ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                                    (MethodInfo *)0x0);
                pMVar1 = (this->fields).woOwner;
                if ((pMVar1 == (MVVehicleBase *)0x0) ||
                   (pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                             ::Collection_1_VoxelHit__get_Items
                                       ((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0),
                   pTVar6 == (TransformNetworkManager *)0x0)) goto code_?;
                pMVar8 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                                   (pTVar6,(int32_t)pIVar7,(MethodInfo *)0x0);
                if (pMVar8 != (MVNetworkObject *)0x0) {
                  iVar9 = func_?(pMVar8,TypeInfo__MVNetworkReporter);
                  if (iVar9 != 0) {
                    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                      func_?(TypeInfo__UnityEngine__Debug);
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                              ((Object *)StringLiteral_Network_reporter_already_set,
                               (MethodInfo *)0x0);
                    return;
                  }
                  iVar9 = func_?(pMVar8,TypeInfo__MVNetworkListener);
                  if (iVar9 == 0) goto code_?;
                  this_04 = (MVNetworkListener *)
                            func_?(pMVar8,TypeInfo__MVNetworkListener,0);
                  MVNetworkListener::MVNetworkListener_SetOwnerTransformToMostResentPackage
                            (this_04,in_stack_10);
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVGameControllerBase);
                  }
                  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
                  pTVar6 = (TransformNetworkManager *)
                           UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                           TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                           TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                     ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                                      (MethodInfo *)0x0);
                  pMVar1 = (this->fields).woOwner;
                  if ((pMVar1 == (MVVehicleBase *)0x0) ||
                     (pIVar7 = mscorlib.dll::System::Collections::ObjectModel::
                               Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                         ((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0),
                     pTVar6 == (TransformNetworkManager *)0x0)) goto code_?;
                  TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                            (pTVar6,(int32_t)pIVar7,(MethodInfo *)0x0);
                }
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
                pTVar6 = (TransformNetworkManager *)
                         UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                         TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                         TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                   ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                                    (MethodInfo *)0x0);
                pMVar1 = (this->fields).woOwner;
                if (pMVar1 == (MVVehicleBase *)0x0) goto code_?;
                pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0);
                pMVar1 = (this->fields).woOwner;
                this_05 = (MVNetworkReporter *)func_?(TypeInfo__MVNetworkReporter);
                MVNetworkReporter::MVNetworkReporter__ctor
                          (this_05,(MVWorldObjectClient *)pMVar1,(MethodInfo *)0x0);
                if (pTVar6 == (TransformNetworkManager *)0x0) goto code_?;
                TransformNetworkManager::TransformNetworkManager_AddReporter
                          (pTVar6,(int32_t)pIVar7,this_05,(MethodInfo *)0x0);
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
                pRVar11 = (RuntimeVariableNetworkManager *)
                          ShootableButton::ShootableButton_get_InputSignalReceiver
                                    ((ShootableButton *)pMVar4,(MethodInfo *)0x0);
                pMVar1 = (this->fields).woOwner;
                if ((pMVar1 == (MVVehicleBase *)0x0) ||
                   (pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                             ::Collection_1_VoxelHit__get_Items
                                       ((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0),
                   pRVar11 == (RuntimeVariableNetworkManager *)0x0)) goto code_?;
                RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_AddRuntimeDataVariables
                          (pRVar11,(int32_t)pIVar7,(MethodInfo *)0x0);
              }
              pMVar1 = (this->fields).woOwner;
              if (pMVar1 == (MVVehicleBase *)0x0) goto code_?;
              DesktopEditModeController::DesktopEditModeController_set_EditModeStateMachine
                        ((DesktopEditModeController *)pMVar1,(EditorStateMachine *)instigatorActorNr
                         ,(MethodInfo *)0x0);
            }
            pMVar1 = (this->fields).woOwner;
            if ((vehicleUser != (MVAvatar *)0x0) &&
               (pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)vehicleUser,(MethodInfo *)0x0),
               pMVar1 != (MVVehicleBase *)0x0)) {
              (*(code *)(pMVar1->klass->vtable).TransferChild.method)
                        (pMVar1,pIVar7,(pMVar1->klass->vtable).AddChild.methodPtr);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar4 != (MVNetworkGame *)0x0) {
                pTVar6 = (TransformNetworkManager *)
                         UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                         TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                         TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                   ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                                    (MethodInfo *)0x0);
                pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)vehicleUser,(MethodInfo *)0x0);
                if (pTVar6 != (TransformNetworkManager *)0x0) {
                  TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                            (pTVar6,(int32_t)pIVar7,(MethodInfo *)0x0);
                  MVAvatar::MVAvatar_set_SeatID(vehicleUser,vehicleSeatID,(MethodInfo *)0x0);
                  VehicleSeatManager_SetToSeatTransform
                            (this,vehicleUser,vehicleSeatID,(MethodInfo *)0x0);
                  if (instigatorIsLocal != 0) {
                    VehicleSeatBase::VehicleSeatBase_SetCamera(this_02,(MethodInfo *)0x0);
                  }
                  this_01 = (SoundLoader_UpdateSoundCallback *)(this->fields).OnSeatOccupiedChange;
                  if (this_01 == (SoundLoader_UpdateSoundCallback *)0x0) {
                    return;
                  }
                  SoundLoader+UpdateSoundCallback::SoundLoader_UpdateSoundCallback_Invoke
                            (this_01,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_CheckCanUse
               (VehicleSeatManager *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  bStack_6 = 0;
  uStack_7 = 0;
  iStack_8 = 0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_10 = 0xffffffff;
  puStack_11 = &stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if (avatarInteractable != (MVInteractableBase *)0x0) {
    puStack_11 = &stack0xffffffac;
    puStack_4 = &stack0xffffffac;
    cVar12 = (*(code *)(avatarInteractable->klass->vtable).__unknown_4.method)
                      (avatarInteractable,9,
                       (avatarInteractable->klass->vtable).__unknown_5.methodPtr);
    if (cVar12 != '\0') {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).seats;
    if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_14,this_00,
                          MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__
                         );
      CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar13->l
      ;
      CStack_9.monitor = (MonitorData *)pLVar13->next;
      CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar13->ver;
      CStack_9.fields.syncRoot = (Object *)(pLVar13->current).rgba;
      uStack_1 = 0;
      do {
        cVar12 = func_?(&CStack_9,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                               );
        if (cVar12 == '\0') {
          iVar15 = 0x59;
          goto code_?;
        }
        pOVar16 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (&CStack_9,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__get_Current__
                           );
        if (pOVar16 == (Object *)0x0) goto code_?;
      } while (*(char *)&pOVar16[4].monitor != '\0');
      bStack_6 = 1;
      iVar15 = 0x5b;
code_?:
      uStack_1 = 0xffffffff;
      func_?(&CStack_9,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                     );
      iVar17 = iStack_8;
      if (iStack_8 == 0) {
        if (iVar15 == 0x5b) {
          *unaff_FS_OFFSET = uStack_3;
          return bStack_6;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  iVar17 = func_?(0);
code_?:
  func_?(iVar17,0,0);
  pcVar18 = (code *)swi(3);
  bVar19 = (*pcVar18)();
  return bVar19;
}


/* Void DetachFromSeat(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_DetachFromSeat
               (VehicleSeatManager *this,MVAvatar *vehicleUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (vehicleUser != (MVAvatar *)0x0) {
    index = MVAvatar::MVAvatar_get_SeatID(vehicleUser,(MethodInfo *)0x0);
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)vehicleUser,(MethodInfo *)0x0);
    if (pCVar1 != (CelestialParam *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)pCVar1,(MethodInfo *)0x0);
      this_00 = (this->fields).woOwner;
      if (this_00 != (MVVehicleBase *)0x0) {
        pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)this_00,(MethodInfo *)0x0);
        if (pCVar1 != (CelestialParam *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             ((GameObject *)pCVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar2,pTVar3,(MethodInfo *)0x0);
            this_01 = (this->fields).seats;
            if (this_01 != (List_1_VehicleSeatBase_ *)0x0) {
              this_02 = (Component_1 *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                                   index,
                                   MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                                  );
              pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                 ((DayNightCycle *)vehicleUser,(MethodInfo *)0x0);
              if (pCVar1 != (CelestialParam *)0x0) {
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform((GameObject *)pCVar1,(MethodInfo *)0x0);
                if (this_02 != (Component_1 *)0x0) {
                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_transform(this_02,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_localPosition
                                       ((Vector3 *)&stack0xffffffec,pTVar3,(MethodInfo *)0x0);
                    uVar5._0_4_ = pVVar4->x;
                    uVar5._4_4_ = pVVar4->y;
                    fVar6 = pVVar4->z;
                    pVVar4 = MVAvatar::MVAvatar_get_CharacterControllerCenterOffset
                                       ((Vector3 *)&stack0xffffffd8,vehicleUser,(MethodInfo *)0x0);
                    uVar7._0_4_ = pVVar4->x;
                    uVar7._4_4_ = pVVar4->y;
                    fVar8 = pVVar4->z;
                    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                      func_?();
                    }
                    a.z = fVar6;
                    a.x = (float)(int)uVar5;
                    a.y = (float)(int)((ulonglong)uVar5 >> 0x20);
                    b.z = fVar8;
                    b.x = (float)uVar7;
                    b.y = SUB84(uVar7,4);
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                             Vector3_op_Subtraction
                                       ((Vector3 *)&stack0xffffffd8,a,b,(MethodInfo *)0x0);
                    if (pTVar2 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localPosition(pTVar2,*pVVar4,(MethodInfo *)0x0);
                      pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                         ((DayNightCycle *)vehicleUser,(MethodInfo *)0x0);
                      if (pCVar1 != (CelestialParam *)0x0) {
                        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_get_transform((GameObject *)pCVar1,(MethodInfo *)0x0);
                        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_1_get_transform(this_02,(MethodInfo *)0x0);
                        if (pTVar3 != (Transform *)0x0) {
                          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                   Transform_get_localRotation
                                             ((Quaternion *)&stack0xffffffd4,pTVar3,
                                              (MethodInfo *)0x0);
                          if (pTVar2 != (Transform *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_localRotation(pTVar2,*pQVar9,(MethodInfo *)0x0);
                            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                              func_?(TypeInfo__MVGameControllerBase);
                            }
                            this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                ((MethodInfo *)0x0);
                            if (this_03 != (MVWorldObjectClientManager *)0x0) {
                              pMVar10 = MVWorldObjectClientManager::
                                       MVWorldObjectClientManager_get_RootGroup
                                                 (this_03,(MethodInfo *)0x0);
                              pIVar11 = mscorlib.dll::System::Collections::ObjectModel::
                                       Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                                 ((Collection_1_VoxelHit_ *)vehicleUser,
                                                  (MethodInfo *)0x0);
                              if (pMVar10 != (MVGroup *)0x0) {
                                (*(code *)(pMVar10->klass->vtable).TransferChild.method)
                                          (pMVar10,pIVar11,(pMVar10->klass->vtable).AddChild.methodPtr)
                                ;
                                MVAvatar::MVAvatar_set_SeatID(vehicleUser,-1,(MethodInfo *)0x0);
                                pTVar12 = mscorlib.dll::System::Object::Object_GetType
                                                    ((Object *)vehicleUser,(MethodInfo *)0x0);
                                handle = TypeRef__MVAvatarLocal;
                                if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr &
                                     0x2000000) != 0) &&
                                   ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                                  func_?();
                                }
                                pTVar13 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                                    ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
                                if (pTVar12 == pTVar13) {
                                  (*this_02->klass[1]._0.gc_desc)();
                                }
                                (**(code **)&this_02->klass[1]._0.byval_arg.attrs)();
                                _UNK_? = _UNK_? + -1;
                                if (_UNK_? < 0) {
                                  arg1 = (Object *)func_?();
                                  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr &
                                       0x2000000) != 0) &&
                                     ((TypeInfo__System__String->_1).cctor_started == 0)) {
                                    func_?(TypeInfo__System__String);
                                  }
                                  message = mscorlib.dll::System::String::String_Concat
                                                      ((Object *)
                                                       StringLiteral_occupiedSeatCount_less_than_0_,
                                                       arg1,(MethodInfo *)0x0);
                                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.
                                              methodPtr & 0x2000000) != 0) &&
                                     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                                    func_?();
                                  }
                                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                                            ((Object *)message,(MethodInfo *)0x0);
                                }
                                VehicleSeatManager_UpdateTriggerBoxEventsCollider
                                          ((VehicleSeatManager *)&UNK_?,(MethodInfo *)0x0);
                                if (_UNK_? != (SoundLoader_UpdateSoundCallback *)0x0) {
                                  SoundLoader+UpdateSoundCallback::
                                  SoundLoader_UpdateSoundCallback_Invoke
                                            (_UNK_?,(MethodInfo *)0x0);
                                }
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Init(MVVehicleBase, MVRuntimeDataVariable) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_Init
               (VehicleSeatManager *this,MVVehicleBase *wo,
               MVRuntimeDataVariable *isDeadRuntimeVariable,MethodInfo *method)

{
  pMVar1 = isDeadRuntimeVariable;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((isDeadRuntimeVariable == (MVRuntimeDataVariable *)0x0) ||
     (pOVar5 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                         (isDeadRuntimeVariable,(MethodInfo *)0x0), pOVar5 == (Object *)0x0)) {
code_?:
    func_?();
    func_?();
  }
  else {
    if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pbVar6 = (bool *)func_?();
    (this->fields).isDead = *pbVar6;
    pMVar7 = (isDeadRuntimeVariable->fields).OnChange;
    pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar8,(Object *)this,MethodInfo__VehicleSeatManager__OnIsDeadChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
    pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
code_?:
      isDeadRuntimeVariable = (MVRuntimeDataVariable *)0x0;
      (pMVar1->fields).OnChange = pMVar7;
      pLVar10 = (this->fields).seats;
      if (pLVar10 != (List_1_VehicleSeatBase_ *)0x0) {
        while (pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   pLVar10,
                                   MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Count__
                                  ), (int)isDeadRuntimeVariable < (int)pOVar5) {
          pLVar10 = (this->fields).seats;
          if ((pLVar10 == (List_1_VehicleSeatBase_ *)0x0) ||
             (pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar10,
                                   (int32_t)isDeadRuntimeVariable,
                                   MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                                  ), pIVar11 == (IEventSystemHandler *)0x0)) goto code_?;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pIVar11[1].monitor == (MonitorData *)0xffffffff) {
            pIVar11[1].monitor = (MonitorData *)isDeadRuntimeVariable;
          }
          else {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Trying_to_re_set_seatID,(MethodInfo *)0x0);
          }
          isDeadRuntimeVariable = (MVRuntimeDataVariable *)((int)&isDeadRuntimeVariable->klass + 1);
          pLVar10 = (this->fields).seats;
          if (pLVar10 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
        }
        (this->fields).woOwner = wo;
        owner = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
        pTVar12 = (this->fields).triggerBoxEvents;
        if (pTVar12 != (TriggerBoxEvents *)0x0) {
          triggerCollider =
               TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar12,(MethodInfo *)0x0);
          pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar8,(Object *)this,MethodInfo__VehicleSeatManager__Use_int_,
                     MethodInfo__System__Func<int,_bool>__Func_System__Object__void__);
          this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_00,(Object *)this,
                     MethodInfo__VehicleSeatManager__CheckCanUse_int__MVInteractableBase_,
                     MethodInfo__System__Func<int,_MVInteractableBase,_bool>__Func_System__Object__void__
                    );
          pUVar13 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
          UseInteractor::UseInteractor__ctor
                    (pUVar13,(MVWorldObjectClient *)wo,owner,1,triggerCollider,
                     (Func_2_Int32_Boolean_ *)pUVar8,
                     (Func_3_Int32_MVInteractableBase_Boolean_ *)this_00,2.5,(MethodInfo *)0x0);
          pTVar12 = (this->fields).triggerBoxEvents;
          (this->fields).useInteractor = pUVar13;
          pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar8,(Object *)pUVar13,
                     MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,
                     MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                    );
          if (pTVar12 != (TriggerBoxEvents *)0x0) {
            method_00 = (MethodInfo *)&UNK_?;
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar12,(EventHandler_1_TriggerEventArgs_ *)pUVar8,(MethodInfo *)0x0);
            pTVar12 = (this->fields).triggerBoxEvents;
            pUVar13 = (this->fields).useInteractor;
            pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar8,(Object *)pUVar13,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,
                       MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                      );
            if (((pTVar12 != (TriggerBoxEvents *)0x0) &&
                (TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                           (pTVar12,(EventHandler_1_TriggerEventArgs_ *)pUVar8,method_00),
                wo != (MVVehicleBase *)0x0)) &&
               (this_01 = (List_1_UnityEngine_Color32_ *)
                          MVGroup::MVGroup_get_Children((MVGroup *)wo,(MethodInfo *)0x0),
               this_01 != (List_1_UnityEngine_Color32_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__GetEnumerator
                        ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffbc,this_01,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                        );
              uStack_2 = 0;
              while( true ) {
                do {
                  do {
                    cVar14 = func_?();
                    if (cVar14 == '\0') {
                      uStack_2 = 0xffffffff;
                      func_?();
                      *unaff_FS_OFFSET = uStack_4;
                      return;
                    }
                    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                             ::Json::Serialization::JsonProperty]::
                             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                        &stack0xffffffcc,
                                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                                       );
                  } while (pOVar5 == (Object *)0x0);
                  bVar15 = (TypeInfo__MVAvatar->_1).naturalAligment;
                  if (((pOVar5->klass->_1).naturalAligment < bVar15) ||
                     ((MVAvatar__Class *)(pOVar5->klass->_1).typeHierarchy[bVar15 - 1] !=
                      TypeInfo__MVAvatar)) {
                    bVar16 = false;
                  }
                  else {
                    bVar16 = true;
                  }
                  pOVar17 = (Object *)0x0;
                  if (bVar16) {
                    pOVar17 = pOVar5;
                  }
                } while (pOVar17 == (Object *)0x0);
                iVar18 = func_?();
                if (iVar18 == 0) break;
                pMVar19 = (MVAvatar *)func_?();
                seatID = MVAvatar::MVAvatar_get_SeatID(pMVar19,(MethodInfo *)0x0);
                if (seatID == -1) {
                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                            ((Object *)StringLiteral_Found_avatar_child_with_seatID__,
                             (MethodInfo *)0x0);
                }
                else {
                  pOVar5 = (Object *)func_?();
                  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                    func_?();
                  }
                  message = mscorlib.dll::System::String::String_Concat
                                      ((Object *)StringLiteral_Found_avatar_child_with_seat_ID_,
                                       pOVar5,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                            ((Object *)message,(MethodInfo *)0x0);
                  pMVar19 = (MVAvatar *)func_?();
                  VehicleSeatManager_SetToSeatTransform(this,pMVar19,seatID,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar7 = pMVar9;
    }
    if (pMVar7 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnIsDeadChange(Object) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_OnIsDeadChange
               (VehicleSeatManager *this,Object *isDeadRuntime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (isDeadRuntime == (Object *)0x0) {
    func_?(0);
    isDeadRuntime = extraout_ECX;
    pBVar1 = extraout_EDX;
  }
  else {
    pBVar1 = TypeInfo__System__Boolean;
    if ((isDeadRuntime->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
      pbVar2 = (bool *)func_?(isDeadRuntime);
      (this->fields).isDead = *pbVar2;
      VehicleSeatManager_UpdateTriggerBoxEventsCollider(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(isDeadRuntime,pBVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetToSeatTransform(MVAvatar, Int32) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_SetToSeatTransform
               (VehicleSeatManager *this,MVAvatar *vehicleUser,int32_t seatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  pLVar1 = (this->fields).seats;
  if (pLVar1 != (List_1_VehicleSeatBase_ *)0x0) {
    pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,seatID,
                        MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                       );
    this_01 = vehicleUser;
    if (vehicleUser != (MVAvatar *)0x0) {
      this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)vehicleUser,(MethodInfo *)0x0);
      if (this_02 != (CelestialParam *)0x0) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)this_02,(MethodInfo *)0x0);
        if ((pIVar2 != (IEventSystemHandler *)0x0) && (this_03 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (this_03,(Transform *)pIVar2[4].klass,(MethodInfo *)0x0);
          pVVar3 = MVAvatar::MVAvatar_get_CharacterControllerCenterOffset
                             ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
          uVar4 = pVVar3->x;
          uVar5 = pVVar3->y;
          this = (VehicleSeatManager *)pVVar3->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            vehicleUser = (MVAvatar *)TypeInfo__UnityEngine__Vector3;
            this = (VehicleSeatManager *)&UNK_?;
            func_?();
          }
          vehicleUser = (MVAvatar *)0x0;
          fVar6 = (float)uVar5;
          a.x = (float)uVar4;
          a = (Vector3)CONCAT84(uVar7,a.x);
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                             ((Vector3 *)&stack0xffffffe8,a,(MethodInfo *)0x0);
          method = (MethodInfo *)pVVar3->x;
          in_stack_8 = pVVar3->y;
          seatID = (int32_t)this_01;
          vehicleUser = (MVAvatar *)&UNK_?;
          (*(code *)(this_01->klass->vtable).set_Position.method)();
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?();
          }
          _method = CONCAT44(&UNK_?,method);
          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                             ((Quaternion *)&stack0xffffffe4,(MethodInfo *)0x0);
          _method = CONCAT44(pQVar9->x,this_01);
          seatID = (int32_t)&UNK_?;
          (*(code *)(this_01->klass->vtable).set_Rotation.method)();
          seatID = (int32_t)pIVar2->klass[1]._0.generic_class;
          vehicleUser = this_01;
          (*(code *)pIVar2->klass[1]._0.parent)();
          pLVar1 = (this_00->fields).seats;
          iVar10 = (this_00->fields).occupiedSeatCount + 1;
          (this_00->fields).occupiedSeatCount = iVar10;
          if (pLVar1 != (List_1_VehicleSeatBase_ *)0x0) {
            pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                                MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Count__
                               );
            if ((int)pOVar11 < iVar10) {
              pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&this);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              message = mscorlib.dll::System::String::String_Concat
                                  ((Object *)StringLiteral_occupiedSeatCount_more_than_numb,pOVar11,
                                   (MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)message,(MethodInfo *)0x0);
            }
            VehicleSeatManager_UpdateTriggerBoxEventsCollider(this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateTriggerBoxEventsCollider() */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_UpdateTriggerBoxEventsCollider
               (VehicleSeatManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).isDead == 0) && ((this->fields).enterVehicleDisabled == 0)) {
    this_00 = (this->fields).seats;
    pOVar1 = (Object *)(this->fields).occupiedSeatCount;
    if (this_00 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
    this_02 = MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Count__;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Count__
                       );
    this_01 = (this->fields).triggerBoxEvents;
    if (pOVar1 != pOVar2) {
      if ((this_01 != (TriggerBoxEvents *)0x0) &&
         (pCVar3 = TriggerBoxEvents::TriggerBoxEvents_get_Collider(this_01,(MethodInfo *)0x0),
         pCVar3 != (Collider *)0x0)) {
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                  (pCVar3,1,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (this_01 == (TriggerBoxEvents *)0x0) goto code_?;
  }
  else {
    this_02 = (MethodInfo *)(this->fields).triggerBoxEvents;
    if (this_02 == (MethodInfo *)0x0) goto code_?;
    unaff_EDI = (MethodInfo *)0x0;
  }
  pCVar3 = TriggerBoxEvents::TriggerBoxEvents_get_Collider((TriggerBoxEvents *)this_02,unaff_EDI);
  if (pCVar3 != (Collider *)0x0) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (pCVar3,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_Use
               (VehicleSeatManager *this,int32_t userWoId,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_4 = 0;
  func_?();
  pMVar5 = (this->fields).woOwner;
  if (pMVar5 != (MVVehicleBase *)0x0) {
    cVar6 = (*(code *)(pMVar5->klass->vtable).get_IsDead.method)
                      (pMVar5,(pMVar5->klass->vtable).get_IsInSpawner.methodPtr);
    if (cVar6 == '\0') {
      this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).seats;
      if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
      method_00 = (MethodInfo *)&stack0xffffffb8;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__GetEnumerator
                ((List_1_T_Enumerator_UnityEngine_Color32_ *)method_00,this_00,
                 MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__);
      uStack_1 = 0;
      do {
        do {
          cVar6 = func_?();
          if (cVar6 == '\0') {
            iVar7 = 0xa7;
            goto code_?;
          }
          seatBase = (VehicleSeatBase *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                &stack0xffffffc8,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__get_Current__
                               );
          if (seatBase == (VehicleSeatBase *)0x0) goto code_?;
        } while (((seatBase->fields)._IsOccupied_k__BackingField != 0) ||
                ((seatBase->fields).SeatType != 0));
        pMVar5 = (this->fields).woOwner;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        message = mscorlib.dll::System::String::String_Concat
                            ((Object *)StringLiteral_Trying_to_do_seat_operation_,(Object *)pMVar5,
                             (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)message,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_01 = (PrefabPool *)
                  MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_01 == (PrefabPool *)0x0) goto code_?;
        this_02 = (MVLocalObjectController *)
                  PrefabPool::PrefabPool_get_MVSmokePrefab(this_01,(MethodInfo *)0x0);
        pMVar5 = (this->fields).woOwner;
        if ((pMVar5 == (MVVehicleBase *)0x0) ||
           (seatOwnerWoID =
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar5,unaff_ESI),
           this_02 == (MVLocalObjectController *)0x0)) goto code_?;
        unaff_ESI = (MethodInfo *)userWoId;
        bVar8 = MVLocalObjectController::MVLocalObjectController_AttachWorldObjectToSeat
                          (this_02,(int32_t)seatOwnerWoID,userWoId,seatBase,method_00);
      } while (bVar8 == 0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Succesfully_send_AttachWorldObje,(MethodInfo *)0x0);
      bStack_4 = 1;
      iVar7 = 0xa9;
code_?:
      uStack_1 = 0xffffffff;
      func_?();
      if (iVar7 == 0xa9) {
        *unaff_FS_OFFSET = uStack_3;
        return bStack_4;
      }
    }
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
code_?:
  func_?(0);
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* VehicleSeatManager() */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager__ctor
               (VehicleSeatManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<VehicleSeatBase>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__List__);
  (this->fields).seats = (List_1_VehicleSeatBase_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}


/* VehicleSeatBase get_DriverSeat() */

VehicleSeatBase *
Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_get_DriverSeat
          (VehicleSeatManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  pVStack_7 = (VehicleSeatBase *)0x0;
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).seats;
  puStack_8 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffffb4;
    puStack_4 = &stack0xffffffb4;
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_10,this_00,
                        MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar9->l;
    CStack_6.monitor = (MonitorData *)pLVar9->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar9->current).rgba;
    uStack_1 = 0;
    pVVar11 = (VehicleSeatBase *)0x0;
    pVVar12 = pVStack_7;
    while( true ) {
      pVStack_7 = pVVar12;
      cVar13 = func_?(&CStack_6,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__MoveNext__
                             );
      if (cVar13 == '\0') {
        *puStack_8 = 0x5d;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__Dispose__
                       );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pVVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar14 != 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_No_driver_seat,(MethodInfo *)0x0);
        }
        *unaff_FS_OFFSET = uStack_3;
        return pVVar11;
      }
      pVVar15 = (VehicleSeatBase *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VehicleSeatBase>__get_Current__
                         );
      unaff_EDI = 0;
      if (pVVar15 == (VehicleSeatBase *)0x0) break;
      pVVar12 = pVStack_7;
      if ((pVVar15->fields).SeatType == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pVVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
        pVVar11 = pVVar15;
        pVVar12 = pVVar15;
        if (bVar14 != 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Multiple_driver_seats,(MethodInfo *)0x0);
        }
      }
    }
  }
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar16 = (code *)swi(3);
  pVVar11 = (VehicleSeatBase *)(*pcVar16)();
  return pVVar11;
}


/* Boolean get_EnterVehicleDisabled() */

bool Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_get_EnterVehicleDisabled
               (VehicleSeatManager *this,MethodInfo *method)

{
  return (this->fields).enterVehicleDisabled;
}


/* Void set_EnterVehicleDisabled(Boolean) */

void Assembly-CSharp.dll::VehicleSeatManager::VehicleSeatManager_set_EnterVehicleDisabled
               (VehicleSeatManager *this,bool value,MethodInfo *method)

{
  (this->fields).enterVehicleDisabled = value;
  VehicleSeatManager_UpdateTriggerBoxEventsCollider(this,(MethodInfo *)0x0);
  return;
}

