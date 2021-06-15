
/* Void CaptureScreenshotForBody(Int32, Action`2[Int32,UnityEngine.Texture2D]) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_CaptureScreenshotForBody
               (AvatarEditModeBodyController *this,int32_t index,
               Action_2_Int32_UnityEngine_Texture2D_ *OnPictureTaken,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).pictureTaker;
  this_01 = (this->fields).bodies;
  if (this_01 != (List_1_MVBody_ *)0x0) {
    avatar = (MVWorldObjectClient *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,index,
                        MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (this_00 != (AvatarPictureTakerUGUI *)0x0) {
      AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_TakePicture
                (this_00,avatar,index,OnPictureTaken,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CaptureScreenshotsForAllAvatars(Action`2[Int32,UnityEngine.Texture2D]) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_CaptureScreenshotsForAllAvatars
               (AvatarEditModeBodyController *this,
               Action_2_Int32_UnityEngine_Texture2D_ *OnPictureTaken,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  (this->fields).Picture2DTakenCallback = OnPictureTaken;
  pLVar1 = (this->fields).bodies;
  if (pLVar1 != (List_1_MVBody_ *)0x0) {
    while( true ) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
      if ((int)pOVar2 <= index) {
        return;
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pLVar1 = (this->fields).bodies;
      this_00 = (this->fields).pictureTaker;
      if (pLVar1 == (List_1_MVBody_ *)0x0) break;
      avatar = (MVWorldObjectClient *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      pLVar1 = (this->fields).bodies;
      OnPictureTaken_00 = (this->fields).Picture2DTakenCallback;
      if (pLVar1 == (List_1_MVBody_ *)0x0) break;
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLVar1 = (this->fields).bodies;
      if ((pLVar1 == (List_1_MVBody_ *)0x0) ||
         (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (this->fields).currentBodyIndex,
                              MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_)
         , this_00 == (AvatarPictureTakerUGUI *)0x0)) break;
      AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_TakePicture
                (this_00,avatar,index,OnPictureTaken_00,pIVar3 == pIVar4,(MethodInfo *)0x0);
      pLVar1 = (this->fields).bodies;
      index = index + 1;
      if (pLVar1 == (List_1_MVBody_ *)0x0) break;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ExecuteReset() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_ExecuteReset
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pSVar1 = CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)this_01,(MethodInfo *)0x0);
    if (pSVar1 != (String *)0x0) {
      pDVar2 = (Delegate *)pSVar1[1].monitor;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,
                 MethodInfo__AvatarEditModeBodyController__ResetCallback_System__Object__InitializedGameQueryDataEventArgs_
                 ,
                 MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
                );
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar2,(Delegate *)this_02,(MethodInfo *)0x0);
      pDVar2 = (Delegate *)0x0;
      if (pDVar3 != (Delegate *)0x0) {
        if ((EventHandler_1_InitializedGameQueryDataEventArgs___Class *)pDVar3->klass ==
            TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
          pDVar2 = pDVar3;
        }
        pEVar4 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
        if (pDVar2 == (Delegate *)0x0) goto code_?;
      }
      pSVar1[1].monitor = (MonitorData *)pDVar2;
      this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = (this->fields).bodies;
      if (this_00 != (List_1_MVBody_ *)0x0) {
        this_04 = (Collection_1_VoxelHit_ *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                             (this->fields).currentBodyIndex,
                             MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        if (this_04 != (Collection_1_VoxelHit_ *)0x0) {
          AvatarID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items(this_04,(MethodInfo *)0x0);
          if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ResetAvatar
                      (this_03,(int32_t)AvatarID,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pDVar3 = extraout_ECX;
  pEVar4 = extraout_EDX;
code_?:
  func_?(pDVar3,pEVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void GenerateIconForBody(Int32) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_GenerateIconForBody
               (AvatarEditModeBodyController *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).bodies;
  this_00 = (this->fields).pictureTaker;
  if (pLVar1 != (List_1_MVBody_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
    IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
               MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    pLVar1 = (this->fields).bodies;
    avatar = (MVWorldObjectClient *)(this->fields).Picture2DTakenCallback;
    if (pLVar1 != (List_1_MVBody_ *)0x0) {
      pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLVar1 = (this->fields).bodies;
      if (pLVar1 != (List_1_MVBody_ *)0x0) {
        pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                            (this->fields).currentBodyIndex,
                            MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        if (this_00 != (AvatarPictureTakerUGUI *)0x0) {
          AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_TakePicture
                    (this_00,avatar,index,(Action_2_Int32_UnityEngine_Texture2D_ *)avatar,
                     pIVar2 == pIVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_Initialize
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  func_?();
  pXVar5 = (XpBoostParticlePreviewer *)(this->fields).pictureTaker;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pXVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      (pXVar5,
                       AvatarPictureTakerUGUI_MethodInfo__UnityEngine__Object__Instantiate<AvatarPictureTakerUGUI>_AvatarPictureTakerUGUI_
                      );
  (this->fields).pictureTaker = (AvatarPictureTakerUGUI *)pXVar5;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache0 ==
      (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
    pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar7,(Object *)0x0,
               MethodInfo__AvatarEditModeBodyController___Initialize_m__0_MVWorldObjectClient_,
               MethodInfo__System__Func<MVWorldObjectClient,_bool>__Func_System__Object__void__);
    if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache0 =
         (Func_2_MVWorldObjectClient_Boolean_ *)pUVar7;
  }
  if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
    func_?();
  }
  predicate = TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache0;
  if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
    pMVar8 = (MethodInfo *)&UNK_?;
    pMVar9 = (MVSpawnPointRed *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                        (pMVar6,predicate,(MethodInfo *)0x0);
    if (pMVar9 == (MVSpawnPointRed *)0x0) {
      pMVar10 = (MVSpawnPointRed *)0x0;
    }
    else {
      bVar11 = (TypeInfo__MVSpawnPointRed->_1).naturalAligment;
      if (((pMVar9->klass->_1).naturalAligment < bVar11) ||
         ((MVSpawnPointRed__Class *)(pMVar9->klass->_1).typeHierarchy[bVar11 - 1] !=
          TypeInfo__MVSpawnPointRed)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      pMVar10 = (MVSpawnPointRed *)0x0;
      if (bVar12) {
        pMVar10 = pMVar9;
      }
      if (pMVar10 == (MVSpawnPointRed *)0x0) {
        func_?();
        goto code_?;
      }
    }
    (this->fields).bodySpawnPoint = pMVar10;
    if (pMVar10 != (MVSpawnPointRed *)0x0) {
      pVVar13 = (Vector3 *)(*(code *)(pMVar10->klass->vtable).get_WorldPosition_1.method)();
      VVar14 = *pVVar13;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                          ((Vector3 *)&stack0xffffffb0,(MethodInfo *)0x0);
      pMVar15 = (MethodInfo *)pVVar13->z;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                          ((Vector3 *)&stack0xffffffb0,VVar14,*pVVar13,(MethodInfo *)0x0);
      pMVar9 = (this->fields).bodySpawnPoint;
      fVar16 = pVVar13->y;
      fVar17 = pVVar13->z;
      (this->fields).displayPos.x = pVVar13->x;
      (this->fields).displayPos.y = fVar16;
      (this->fields).displayPos.z = fVar17;
      if (pMVar9 != (MVSpawnPointRed *)0x0) {
        pVVar13 = (Vector3 *)(*(code *)(pMVar9->klass->vtable).get_WorldPosition_1.method)();
        VVar14 = *pVVar13;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                            ((Vector3 *)&stack0xffffffb0,(MethodInfo *)0x0);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                            ((Vector3 *)&stack0xffffffb0,51.0,*pVVar13,(MethodInfo *)0x0);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            ((Vector3 *)&stack0xffffffb0,VVar14,*pVVar13,(MethodInfo *)0x0);
        fVar16 = pVVar13->y;
        fVar17 = pVVar13->z;
        (this->fields).hidePos.x = pVVar13->x;
        (this->fields).hidePos.y = fVar16;
        (this->fields).hidePos.z = fVar17;
        pMVar9 = (this->fields).bodySpawnPoint;
        if (pMVar9 != (MVSpawnPointRed *)0x0) {
          pQVar18 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                              ((Quaternion *)&stack0xffffffac,(MVWorldObjectClient *)pMVar9,pMVar15
                              );
          fVar17 = pQVar18->y;
          fVar16 = pQVar18->z;
          fVar19 = pQVar18->w;
          pMVar9 = (this->fields).bodySpawnPoint;
          (this->fields).displayRotation.x = pQVar18->x;
          (this->fields).displayRotation.y = fVar17;
          (this->fields).displayRotation.z = fVar16;
          (this->fields).displayRotation.w = fVar19;
          if (pMVar9 != (MVSpawnPointRed *)0x0) {
            pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)&UNK_?;
            this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                ((DayNightCycle *)pMVar9,pMVar8);
            if (this_01 != (CelestialParam *)0x0) {
              pMVar8 = (MethodInfo *)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        ((GameObject *)this_01,0,(MethodInfo *)predicate);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache1 ==
                  (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
                pUVar20 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                pMVar8 = (MethodInfo *)0x0;
                pUVar7 = pUVar20;
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar20,(Object *)0x0,
                           MethodInfo__AvatarEditModeBodyController___Initialize_m__1_MVWorldObjectClient_
                           ,
                           MethodInfo__System__Func<MVWorldObjectClient,_bool>__Func_System__Object__void__
                          );
                if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                     0x2000000) != 0) &&
                   ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
                  func_?();
                }
                TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache1 =
                     (Func_2_MVWorldObjectClient_Boolean_ *)pUVar20;
              }
              if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
                func_?();
              }
              if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
                pIVar21 = (IOrderedEnumerable_1_System_Object_ *)
                          MVWorldObjectClientManager::
                          MVWorldObjectClientManager_GetWorldObjectClientsWhere
                                    (pMVar6,TypeInfo__AvatarEditModeBodyController->static_fields->
                                             __f__am_cache1,(MethodInfo *)0x0);
                if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache2 ==
                    (Func_2_MVWorldObjectClient_Int32_ *)0x0) {
                  pUVar20 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar20,(Object *)0x0,
                             MethodInfo__AvatarEditModeBodyController___Initialize_m__2_MVWorldObjectClient_
                             ,
                             MethodInfo__System__Func<MVWorldObjectClient,_int>__Func_System__Object__void__
                            );
                  if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
                    func_?();
                  }
                  TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache2 =
                       (Func_2_MVWorldObjectClient_Int32_ *)pUVar20;
                }
                if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                     0x2000000) != 0) &&
                   ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
                  func_?();
                }
                pIVar21 = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                                    (pIVar21,(Func_2_Object_Int64_ *)
                                             TypeInfo__AvatarEditModeBodyController->static_fields->
                                             __f__am_cache2,
                                     System__Linq__IOrderedEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__OrderBy<MVWorldObjectClient,_int>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_int>_
                                    );
                if (pIVar21 != (IOrderedEnumerable_1_System_Object_ *)0x0) {
                  piVar22 = (int *)func_?();
                  uStack_1 = 0;
                  uStack_2 = 0;
                  iVar23 = -1;
                  while (piVar22 != (int *)0x0) {
                    cVar24 = func_?();
                    if (cVar24 == '\0') {
                      iVar25 = iVar23 + 1;
                      *(undefined4 *)(&stack0xffffffa0 + iVar25 * 4) = 0x199;
                      uStack_1 = 0xff;
                      uStack_2 = 0xffffff;
                      if (piVar22 != (int *)0x0) {
                        func_?();
                      }
                      if (((iVar25 != -1) && (*(int *)(&stack0xffffffa0 + iVar25 * 4) == 0x199)) &&
                         (-1 < iVar25)) {
                        iVar25 = iVar23;
                      }
                      pMVar26 = AvatarEditModeBodyController_get_CurrentBody(this,(MethodInfo *)0x0)
                      ;
                      if (pMVar26 != (MVBody *)0x0) {
                        pMVar15 = (MethodInfo *)&UNK_?;
                        (*(code *)(pMVar26->klass->vtable).set_WorldPosition.method)();
                        method_01 = (AvatarEditModeBodyController__Class *)0x0;
                        pMVar26 = AvatarEditModeBodyController_get_CurrentBody
                                            (this,(MethodInfo *)0x0);
                        if (pMVar26 != (MVBody *)0x0) {
                          method_02 = (MethodInfo *)(this->fields).displayRotation.y;
                          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                                    ((MVWorldObjectClient *)pMVar26,(this->fields).displayRotation,
                                     (MethodInfo *)pUVar7);
                          method_03 = this;
                          pMVar27 = AvatarEditModeBodyController_get_CurrentBody
                                              (this,(MethodInfo *)0x0);
                          if (pMVar27 != (MVBody *)0x0) {
                            MVBody::MVBody_set_Visible(pMVar27,1,(MethodInfo *)0x0);
                            pIVar28 = System.Core.dll::System::Linq::Enumerable::Enumerable_Skip_1
                                                ((IEnumerable_1_MVBody_ *)(this->fields).bodies,1,
                                                 System__Collections__Generic__IEnumerable<MVBody>_MethodInfo__System__Linq__Enumerable__Skip<MVBody>_System__Collections__Generic__IEnumerable<MVBody>__int_
                                                );
                            if (pIVar28 != (IEnumerable_1_MVBody_ *)0x0) {
                              piVar22 = (int *)func_?();
                              uStack_1 = 4;
                              uStack_2 = 0;
                              goto code_?;
                            }
                          }
                        }
                      }
                      break;
                    }
                    iVar25 = *piVar22;
                    uVar29 = 0;
                    if (*(ushort *)(iVar25 + 0xb6) != 0) {
                      do {
                        if (*(IEnumerator_1_MVWorldObjectClient___Class **)
                             (*(int *)(iVar25 + 0x58) + (uint)uVar29 * 8) ==
                            TypeInfo__System__Collections__Generic__IEnumerator<MVWorldObjectClient>
                           ) {
                          puVar30 = (undefined4 *)
                                    (iVar25 + (*(int *)(*(int *)(iVar25 + 0x58) + 4 +
                                                       (uint)uVar29 * 8) + 0x18) * 8);
                          goto code_?;
                        }
                        uVar29 = uVar29 + 1;
                      } while (uVar29 < *(ushort *)(iVar25 + 0xb6));
                    }
                    puVar30 = (undefined4 *)func_?();
code_?:
                    pMVar26 = (MVBody *)(*(code *)*puVar30)();
                    if (pMVar26 == (MVBody *)0x0) break;
                    bVar11 = (TypeInfo__MVBody->_1).naturalAligment;
                    if (((pMVar26->klass->_1).naturalAligment < bVar11) ||
                       ((MVBody__Class *)(pMVar26->klass->_1).typeHierarchy[bVar11 - 1] !=
                        TypeInfo__MVBody)) {
                      bVar12 = false;
                    }
                    else {
                      bVar12 = true;
                    }
                    pMVar27 = (MVBody *)0x0;
                    if (bVar12) {
                      pMVar27 = pMVar26;
                    }
                    if (pMVar27 == (MVBody *)0x0) break;
                    MVBody::MVBody_set_ShadowVisible(pMVar27,0,(MethodInfo *)0x0);
                    pMVar8 = (MethodInfo *)0x0;
                    pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)0x0;
                    MVBody::MVBody_set_Visible(pMVar27,0,(MethodInfo *)0x0);
                    this_02 = MVBody::MVBody_get_Animation(pMVar27,(MethodInfo *)0x0);
                    if ((this_02 == (BoneAnimation *)0x0) ||
                       (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_1_GetComponent_58
                                            ((Component_1 *)this_02,
                                             UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                                            ), this_03 == (MVInteractableBase *)0x0)) break;
                    pIVar31 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                              Animation_GetEnumerator((Animation *)this_03,(MethodInfo *)0x0);
                    uStack_1 = 1;
                    while( true ) {
                      if (pIVar31 == (IEnumerator *)0x0) goto code_?;
                      cVar24 = func_?();
                      if (cVar24 == '\0') break;
                      func_?();
                      this_04 = (AnimationState *)func_?();
                      if (this_04 == (AnimationState *)0x0) goto code_?;
                      UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                      AnimationState_set_wrapMode(this_04,WrapMode__Enum_Loop,(MethodInfo *)0x0);
                    }
                    iVar25 = iVar23 + 1;
                    uStack_1 = 0;
                    *(undefined4 *)(&stack0xffffffa0 + iVar25 * 4) = 0x170;
                    iVar32 = func_?();
                    if (iVar32 != 0) {
                      func_?();
                    }
                    if (((iVar25 != -1) && (*(int *)(&stack0xffffffa0 + iVar25 * 4) == 0x170)) &&
                       (-1 < iVar25)) {
                      iVar25 = iVar23;
                    }
                    this_00 = (this->fields).bodies;
                    if (this_00 == (List_1_MVBody_ *)0x0) break;
                    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                    List_1_UIPushOption__Add
                              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pMVar27,
                               MethodInfo__System__Collections__Generic__List<MVBody>__Add_MVBody_);
                    iVar23 = iVar25;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  func_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
code_?:
  if (piVar22 == (int *)0x0) goto code_?;
  cVar24 = func_?();
  if (cVar24 == '\0') {
    *(undefined4 *)(&stack0xffffffa4 + iVar25 * 4) = 0x227;
    uStack_1 = 0xff;
    uStack_2 = 0xffffff;
    if (piVar22 != (int *)0x0) {
      func_?();
    }
    method_00 = (MethodInfo *)ThemeRepository::ThemeRepository_get_Instance((MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      pXVar5 = (XpBoostParticlePreviewer *)
                ThemeRepository::ThemeRepository_GetThemePrefab
                          ((ThemeRepository *)method_00,StringLiteral_Normal,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar34 = (CloudyThemeBase *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          (pXVar5,Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_)
      ;
      if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
        method_01 = TypeInfo__AvatarEditModeBodyController;
        func_?();
      }
      if (pCVar34 == (CloudyThemeBase *)0x0) {
        pCVar35 = (CloudyThemeBase *)0x0;
      }
      else {
        bVar11 = (TypeInfo__CloudyThemeBase->_1).naturalAligment;
        if (((pCVar34->klass->_1).naturalAligment < bVar11) ||
           ((pCVar34->klass->_1).typeHierarchy[bVar11 - 1] !=
            (Il2CppClass *)TypeInfo__CloudyThemeBase)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        pCVar35 = (CloudyThemeBase *)0x0;
        if (bVar12) {
          pCVar35 = pCVar34;
        }
      }
      TypeInfo__AvatarEditModeBodyController->static_fields->Theme = pCVar35;
      pCVar34 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
      if (pCVar34 != (CloudyThemeBase *)0x0) {
        Theme::Theme_InitializeForPreview((Theme *)pCVar34,(MethodInfo *)method_01);
        pCVar34 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
        if ((pCVar34 != (CloudyThemeBase *)0x0) &&
           (this_06 = (SettingsWrapper *)
                      System.Core.dll::System::Linq::
                      Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                      Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                                 pCVar34,(MethodInfo *)pMVar26), this_06 != (SettingsWrapper *)0x0))
        {
          ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize(this_06,method_02);
          pCVar34 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
          if (pCVar34 != (CloudyThemeBase *)0x0) {
            Theme::Theme_Activate((Theme *)pCVar34,(MethodInfo *)method_03);
            pCVar34 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
            if ((pCVar34 != (CloudyThemeBase *)0x0) &&
               (pTVar36 = CloudyThemeBase::CloudyThemeBase_get_Skybox(pCVar34,pMVar8),
               pTVar36 != (ThemeSkybox *)0x0)) {
              ThemeSkybox::ThemeSkybox_set_SunLightIntensity(pTVar36,0.3,pMVar15);
              pCVar34 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
              if ((pCVar34 != (CloudyThemeBase *)0x0) &&
                 (pTVar36 = CloudyThemeBase::CloudyThemeBase_get_Skybox(pCVar34,method_00),
                 pTVar36 != (ThemeSkybox *)0x0)) {
                ThemeSkybox::ThemeSkybox_RecalculateSunLight(pTVar36,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_4;
                return;
              }
            }
          }
        }
      }
    }
    goto code_?;
  }
  uVar37 = 0;
  uVar29 = *(ushort *)(*piVar22 + 0xb6);
  if (uVar29 != 0) {
    do {
      if (*(IEnumerator_1_MVBody___Class **)(*(int *)(*piVar22 + 0x58) + (uint)uVar37 * 8) ==
          TypeInfo__System__Collections__Generic__IEnumerator<MVBody>) {
        puVar30 = (undefined4 *)
                  (*piVar22 +
                  (*(int *)(*(int *)(*piVar22 + 0x58) + 4 + (uint)uVar37 * 8) + 0x18) * 8);
        goto code_?;
      }
      uVar37 = uVar37 + 1;
    } while (uVar37 < uVar29);
  }
  puVar30 = (undefined4 *)func_?();
code_?:
  this_05 = (MVWorldObjectClient *)(*(code *)*puVar30)();
  if (this_05 == (MVWorldObjectClient *)0x0) goto code_?;
  pMVar15 = (MethodInfo *)&UNK_?;
  (*(code *)(this_05->klass->vtable).set_WorldPosition.method)();
  pMVar9 = (this->fields).bodySpawnPoint;
  if (pMVar9 == (MVSpawnPointRed *)0x0) goto code_?;
  pQVar18 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                      ((Quaternion *)&stack0xffffffac,(MVWorldObjectClient *)pMVar9,
                       (MethodInfo *)0x0);
  MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(this_05,*pQVar18,(MethodInfo *)0x0);
  goto code_?;
}


/* Void InitializedPurchasedAvatar(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_InitializedPurchasedAvatar
               (AvatarEditModeBodyController *this,Object *sender,
               InitializedGameQueryDataEventArgs *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 != (MVNetworkGame *)0x0) &&
     (pSVar5 = CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)pMVar4,(MethodInfo *)0x0),
     pSVar5 != (String *)0x0)) {
    unaff_EDI = (IEnumerator__Class *)pSVar5[1].monitor;
    pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar6,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
               ,
               MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
              );
    pAVar7 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)unaff_EDI,(Delegate *)pUVar6,(MethodInfo *)0x0);
    pAVar8 = (Action *)0x0;
    if (pAVar7 != (Action *)0x0) {
      if ((EventHandler_1_InitializedGameQueryDataEventArgs___Class *)pAVar7->klass ==
          TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
        pAVar8 = pAVar7;
      }
      if (pAVar8 == (Action *)0x0) {
code_?:
        pAVar9 = (AnimationState *)func_?(pAVar7);
code_?:
        func_?(pAVar9);
        goto code_?;
      }
    }
    pSVar5[1].monitor = (MonitorData *)pAVar8;
    if (e != (InitializedGameQueryDataEventArgs *)0x0) {
      pMVar10 = (e->fields).RootWO;
      if (pMVar10 == (MVWorldObjectClient *)0x0) {
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      method_00 = (MethodInfo *)
                  mscorlib.dll::System::String::String_Concat
                            ((Object *)StringLiteral_Purchased_avatar_has_been_added_,
                             (Object *)pMVar10,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)method_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pMVar10 = (e->fields).RootWO;
      if (((pMVar10 != (MVWorldObjectClient *)0x0) &&
          (pIVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)pMVar10,(MethodInfo *)0x0),
          this_00 != (MVWorldObjectClientManager *)0x0)) &&
         (pMVar12 = (MVBody *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_00,(int32_t)pIVar11,method_00), pMVar12 != (MVBody *)0x0)) {
        bVar13 = (TypeInfo__MVBody->_1).naturalAligment;
        if (((pMVar12->klass->_1).naturalAligment < bVar13) ||
           ((MVBody__Class *)(pMVar12->klass->_1).typeHierarchy[bVar13 - 1] != TypeInfo__MVBody)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        this_05 = (MVBody *)0x0;
        if (bVar14) {
          this_05 = pMVar12;
        }
        if (this_05 != (MVBody *)0x0) {
          MVBody::MVBody_set_ShadowVisible(this_05,0,(MethodInfo *)0x0);
          MVBody::MVBody_set_Visible(this_05,0,(MethodInfo *)0x0);
          puVar15 = (undefined4 *)0x0;
          this_01 = MVBody::MVBody_get_Animation(this_05,(MethodInfo *)0x0);
          if ((this_01 != (BoneAnimation *)0x0) &&
             (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_GetComponent_58
                                  ((Component_1 *)this_01,
                                   UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                                  ), this_02 != (MVInteractableBase *)0x0)) {
            this = (AvatarEditModeBodyController *)&UNK_?;
            pIVar16 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                      Animation_GetEnumerator((Animation *)this_02,(MethodInfo *)e);
            uStack_1 = 0;
            while (pIVar16 != (IEnumerator *)0x0) {
              cVar17 = func_?(1,TypeInfo__System__Collections__IEnumerator);
              unaff_EDI = TypeInfo__System__Collections__IEnumerator;
              if (cVar17 == '\0') {
                *puVar15 = 0xcc;
                uStack_1 = 0xffffffff;
                iVar18 = func_?(pIVar16);
                if (iVar18 != 0) {
                  func_?(0,TypeInfo__System__IDisposable);
                }
                unaff_EDI = (IEnumerator__Class *)&UNK_?;
                if ((_UNK_? != (List_1_UIPushOption_ *)0x0) &&
                   (mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                    List_1_UIPushOption__Add
                              (_UNK_?,(UIPushOption__Enum)this_05,
                               MethodInfo__System__Collections__Generic__List<MVBody>__Add_MVBody_),
                   _UNK_? != (List_1_UIPushOption_ *)0x0)) {
                  pOVar19 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                            ::Json::Serialization::JsonProperty]::
                            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                       _UNK_?,
                                       MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__
                                      );
                  index = (undefined1 *)((int)&pOVar19[-1].monitor + 3);
                  AvatarEditModeBodyController_GenerateIconForBody
                            ((AvatarEditModeBodyController *)&UNK_?,(int32_t)index,
                             (MethodInfo *)0x0);
                  AvatarEditModeBodyController_SetCurrentBody
                            ((AvatarEditModeBodyController *)&UNK_?,(int32_t)index,
                             (MethodInfo *)0x0);
                  AvatarSelectionController::
                  AvatarSelectionController_set_CurrentlySelectedSlotIndex
                            ((int32_t)index,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    this = (AvatarEditModeBodyController *)TypeInfo__MVGameControllerBase;
                    func_?();
                  }
                  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pMVar4 != (MVNetworkGame *)0x0) {
                    unaff_EDI = (IEnumerator__Class *)(pMVar4->fields).OnActiveAvatarSet;
                    pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar6,(Object *)this,
                               MethodInfo__AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase__
                               ,(MethodInfo *)0x0);
                    pAVar7 = (Action *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)unaff_EDI,(Delegate *)pUVar6,(MethodInfo *)0x0
                                        );
                    pAVar8 = (Action *)0x0;
                    if (pAVar7 != (Action *)0x0) {
                      if (pAVar7->klass == TypeInfo__System__Action) {
                        pAVar8 = pAVar7;
                      }
                      if (pAVar8 == (Action *)0x0) goto code_?;
                    }
                    (pMVar4->fields).OnActiveAvatarSet = pAVar8;
                    root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
                      func_?();
                    }
                    if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache9 ==
                        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
                      pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                 *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                      SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                (pUVar6,(Object *)0x0,
                                 MethodInfo__AvatarEditModeBodyController___InitializedPurchasedAvatar_m__B_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                                 ,
                                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                                );
                      if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr
                           & 0x2000000) != 0) &&
                         ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
                        func_?();
                      }
                      TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache9 =
                           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar6;
                    }
                    if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
                      func_?();
                    }
                    callbackFunction =
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                         TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache9;
                    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                                methodPtr & 0x2000000) != 0) &&
                       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)
                       ) {
                      func_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy_63
                              (root,(BaseEventData *)0x0,callbackFunction,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                              );
                    unaff_EDI = (IEnumerator__Class *)
                                UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                    method_01 = 
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                    ;
                    pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar6,(Object *)this,
                               MethodInfo__AvatarEditModeBodyController___InitializedPurchasedAvatar_m__C_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                               ,
                               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>__EventFunction_System__Object__void__
                              );
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy_63
                              ((GameObject *)unaff_EDI,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar6,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                              );
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?(TypeInfo__MVGameControllerBase);
                    }
                    this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                        ((MethodInfo *)0x0);
                    if (((e != (InitializedGameQueryDataEventArgs *)0x0) &&
                        (pMVar10 = (e->fields).RootWO, pMVar10 != (MVWorldObjectClient *)0x0)) &&
                       (pIVar11 = mscorlib.dll::System::Collections::ObjectModel::
                                  Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                            ((Collection_1_VoxelHit_ *)pMVar10,(MethodInfo *)0x0),
                       this_03 != (MVNetworkGame_OperationRequests *)0x0)) {
                      MVNetworkGame+OperationRequests::
                      MVNetworkGame_OperationRequests_SetActiveAvatar
                                (this_03,(int32_t)pIVar11,(MethodInfo *)method_01);
                      goto code_?;
                    }
                  }
                }
                break;
              }
              pIVar20 = pIVar16->klass;
              uVar21 = 0;
              uVar22._0_1_ = (pIVar20->_1).rank;
              uVar22._1_1_ = (pIVar20->_1).minimumAlignment;
              if (uVar22 != 0) {
                do {
                  if (pIVar20->interfaceOffsets[uVar21].interfaceType ==
                      (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                    ppMVar23 = &(&(pIVar16->klass->vtable).get_Current)
                                [pIVar20->interfaceOffsets[uVar21].offset].method;
                    goto code_?;
                  }
                  uVar21 = uVar21 + 1;
                } while (uVar21 < uVar22);
              }
              ppMVar23 = (MethodInfo **)
                         func_?(pIVar16,TypeInfo__System__Collections__IEnumerator);
code_?:
              pAVar9 = (AnimationState *)(*(code *)*ppMVar23)(pIVar16);
              if (pAVar9 == (AnimationState *)0x0) break;
              this_04 = (AnimationState *)0x0;
              if (pAVar9->klass == TypeInfo__UnityEngine__AnimationState) {
                this_04 = pAVar9;
              }
              if (this_04 == (AnimationState *)0x0) goto code_?;
              UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
              AnimationState_set_wrapMode(this_04,WrapMode__Enum_Loop,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?(unaff_EDI,0);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void MVNetworGame_ScreenshotUploadedHandler(Object, ScreenshotUploadedEventArgs) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_MVNetworGame_ScreenshotUploadedHandler
               (AvatarEditModeBodyController *this,Object *sender,ScreenshotUploadedEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__AvatarEditModeBodyController___MVNetworGame_ScreenshotUploadedHandler_c__AnonStorey3;
  this_00 = (ScaleAnimationBase *)func_?();
  pSVar1 = this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase,pSVar1);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_System__Object__ScreenshotUploadedEventArgs_
             ,
             MethodInfo__System__EventHandler<ScreenshotUploadedEventArgs>__EventHandler_System__Object__void__
            );
  if (this_01 != (MVNetworkGame *)0x0) {
    object = (Object *)&UNK_?;
    MVNetworkGame::MVNetworkGame_remove_ScreenshotUploaded
              (this_01,(EventHandler_1_ScreenshotUploadedEventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pXVar3 = (XpBoostParticlePreviewer *)(this->fields).notificationPopup;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar4 = 
    NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
    ;
    pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar3,
                        NotificationPopup_MethodInfo__UnityEngine__Object__Instantiate<NotificationPopup>_NotificationPopup_
                       );
    if ((this_00 != (ScaleAnimationBase *)0x0) &&
       ((this_00->fields)._._._._.m_CachedPtr = pXVar3, pMVar4 != (MethodInfo *)0x0)) {
      if (*(char *)&pMVar4->invoker_method == '\0') {
        if (pXVar3 != (XpBoostParticlePreviewer *)0x0) {
code_?:
          NotificationPopup::NotificationPopup_Initialize
                    ((NotificationPopup *)pXVar3,in_stack_5,in_stack_6,
                     in_stack_7);
          pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000)
               != 0) && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
            func_?();
          }
          if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheD ==
              (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)0x0,
                       MethodInfo__AvatarEditModeBodyController___MVNetworGame_ScreenshotUploadedHandler_m__10_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
              func_?();
            }
            TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheD =
                 (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
          }
          if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000)
               != 0) && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
            func_?();
          }
          pEVar9 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                   TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheD;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar8,(BaseEventData *)0x0,pEVar9,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,object,
                     MethodInfo__AvatarEditModeBodyController___MVNetworGame_ScreenshotUploadedHandler_c__AnonStorey3____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar8,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheE ==
              (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)0x0,
                       MethodInfo__AvatarEditModeBodyController___MVNetworGame_ScreenshotUploadedHandler_m__11_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
              func_?();
            }
            TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheE =
                 (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)pUVar2;
          }
          if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000)
               != 0) && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
            func_?();
          }
          pEVar9 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                   TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheE;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar8,(BaseEventData *)0x0,pEVar9,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                    );
          return;
        }
      }
      else {
        if ((this->fields).playingPurchaseSoundAfterScreenshot != 0) {
          (this->fields).playingPurchaseSoundAfterScreenshot = 0;
          pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000)
               != 0) && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
            func_?();
          }
          if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheC ==
              (ExecuteEvents_EventFunction_1_IPurchaseSoundManager_ *)0x0) {
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            pGVar8 = (GameObject *)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)0x0,
                       MethodInfo__AvatarEditModeBodyController___MVNetworGame_ScreenshotUploadedHandler_m__F_UnityEngine__EventSystems__IPurchaseSoundManager__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseSoundManager>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
              func_?();
            }
            TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheC =
                 (ExecuteEvents_EventFunction_1_IPurchaseSoundManager_ *)pUVar2;
          }
          if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000)
               != 0) && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
            func_?();
          }
          pEVar9 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                   TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheC;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar8,(BaseEventData *)0x0,pEVar9,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPurchaseSoundManager>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPurchaseSoundManager>_
                    );
          pXVar3 = (this_00->fields)._._._._.m_CachedPtr;
        }
        if (pXVar3 != (XpBoostParticlePreviewer *)0x0) {
          in_stack_7 = (MethodInfo *)0x0;
          in_stack_6 = StringLiteral_Success_;
          in_stack_5 = (this->fields).currentActionSuccessMessage;
          goto code_?;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnActiveAvatarSetAfterPurchase() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_OnActiveAvatarSetAfterPurchase
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnActiveAvatarSet;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAVar4 != (Action *)0x0) {
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar2 = pAVar4;
      }
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pMVar1->fields).OnActiveAvatarSet = pAVar2;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheA ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)0x0,
                 MethodInfo__AvatarEditModeBodyController___OnActiveAvatarSetAfterPurchase_m__D_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheA =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
    }
    if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
      func_?();
    }
    pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheA;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar5,(BaseEventData *)0x0,pEVar6,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheB ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)0x0,
                 MethodInfo__AvatarEditModeBodyController___OnActiveAvatarSetAfterPurchase_m__E_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheB =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
    }
    if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
      func_?();
    }
    pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cacheB;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar5,(BaseEventData *)0x0,pEVar6,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnProductPurchaseAvatarResponse(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_OnProductPurchaseAvatarResponse
               (AvatarEditModeBodyController *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__AvatarEditModeBodyController___OnProductPurchaseAvatarResponse_c__AnonStorey2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)returnCode;
    (this_00->fields).state = (int32_t)this;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__AvatarEditModeBodyController__OnProductPurchaseAvatarResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,
                 MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
                );
      pAVar4 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar2 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)0x0;
      if (pAVar4 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) {
        if (pAVar4->klass ==
            TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
           ) {
          pAVar2 = pAVar4;
        }
        if (pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0) goto code_?;
      }
      (pMVar1->fields).PurchaseProductResponseHandler = pAVar2;
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
        func_?();
      }
      if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache8 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        this = (AvatarEditModeBodyController *)
               MethodInfo__AvatarEditModeBodyController___OnProductPurchaseAvatarResponse_m__A_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__AvatarEditModeBodyController___OnProductPurchaseAvatarResponse_m__A_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
          func_?();
        }
        TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache8 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
      }
      if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
        func_?();
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache8;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar5,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      arg1 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Avatar_purchase_response__,arg1,(MethodInfo *)0x0)
      ;
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar6,(MethodInfo *)0x0);
      if ((this_00->fields)._._._._.m_CachedPtr == (void *)0x0) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pSVar6 = CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)pMVar1,(MethodInfo *)0x0),
         pSVar6 != (String *)0x0)) {
        pDVar7 = (Delegate *)pSVar6[1].monitor;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
                   ,
                   MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
                  );
        pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                           (pDVar7,(Delegate *)pUVar3,(MethodInfo *)0x0);
        pDVar7 = (Delegate *)0x0;
        if (pDVar8 == (Delegate *)0x0) {
code_?:
          pSVar6[1].monitor = (MonitorData *)pDVar7;
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this_00,
                     MethodInfo__AvatarEditModeBodyController___OnProductPurchaseAvatarResponse_c__AnonStorey2____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar5,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          return;
        }
        if ((EventHandler_1_InitializedGameQueryDataEventArgs___Class *)pDVar8->klass ==
            TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
          pDVar7 = pDVar8;
        }
        if (pDVar7 != (Delegate *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPurchaseAvatarConfirmation(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_OnPurchaseAvatarConfirmation
               (AvatarEditModeBodyController *this,bool confirmed,
               ConfirmationPopup *confirmationPopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
    func_?(TypeInfo__AvatarEditModeBodyController);
  }
  if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache7 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__AvatarEditModeBodyController___OnPurchaseAvatarConfirmation_m__9_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
      func_?(TypeInfo__AvatarEditModeBodyController);
    }
    TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache7 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
    func_?(TypeInfo__AvatarEditModeBodyController);
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache7;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  method_00 = TypeInfo__AvatarEditModeBodyController___OnPurchaseAvatarConfirmation_c__AnonStorey1;
  if (confirmed == 0) {
    return;
  }
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  original = (this->fields).pleaseWaitPopupPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar3;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this_00,
               MethodInfo__AvatarEditModeBodyController___OnPurchaseAvatarConfirmation_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pAVar5 = (pMVar4->fields).PurchaseProductResponseHandler;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__AvatarEditModeBodyController__OnProductPurchaseAvatarResponse_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,
                 MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
                );
      pAVar6 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar5,(Delegate *)pUVar2,(MethodInfo *)0x0);
      pAVar5 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)0x0;
      if (pAVar6 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) {
        if (pAVar6->klass ==
            TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
           ) {
          pAVar5 = pAVar6;
        }
        if (pAVar5 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0) goto code_?;
      }
      (pMVar4->fields).PurchaseProductResponseHandler = pAVar5;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (pSVar7 = CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)pMVar4,(MethodInfo *)0x0),
         pSVar7 != (String *)0x0)) {
        pDVar8 = (Delegate *)pSVar7[1].monitor;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__AvatarEditModeBodyController__InitializedPurchasedAvatar_System__Object__InitializedGameQueryDataEventArgs_
                   ,
                   MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
                  );
        pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar8,(Delegate *)pUVar2,(MethodInfo *)0x0);
        pDVar8 = (Delegate *)0x0;
        if (pDVar9 != (Delegate *)0x0) {
          if ((EventHandler_1_InitializedGameQueryDataEventArgs___Class *)pDVar9->klass ==
              TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
            pDVar8 = pDVar9;
          }
          if (pDVar8 == (Delegate *)0x0) goto code_?;
        }
        pSVar7[1].monitor = (MonitorData *)pDVar8;
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        pAVar10 = (this->fields).purchasingItem;
        if ((pAVar10 != (AvatarRepositoryItem *)0x0) &&
           (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseAvatar
                    (this_01,(pAVar10->fields).itemID,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void PurchaseAvatar(AvatarRepositoryItem) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_PurchaseAvatar
               (AvatarEditModeBodyController *this,AvatarRepositoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).purchasingItem = item;
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarEditModeBodyController___PurchaseAvatar_m__8_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void ResetCallback(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_ResetCallback
               (AvatarEditModeBodyController *this,Object *sender,
               InitializedGameQueryDataEventArgs *e,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
    func_?(unaff_EBX,0);
    pMVar1 = extraout_EDX;
  }
  else {
    pMVar2 = (MethodInfo *)&UNK_?;
    pSVar3 = CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)this_01,(MethodInfo *)0x0);
    if (pSVar3 == (String *)0x0) goto code_?;
    unaff_EDI = (MVBody__Class *)pSVar3[1].monitor;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,
               MethodInfo__AvatarEditModeBodyController__ResetCallback_System__Object__InitializedGameQueryDataEventArgs_
               ,
               MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
              );
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)unaff_EDI,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pDVar6 = (Delegate *)0x0;
    if (pDVar5 != (Delegate *)0x0) {
      if ((EventHandler_1_InitializedGameQueryDataEventArgs___Class *)pDVar5->klass ==
          TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
        pDVar6 = pDVar5;
      }
      pEVar7 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
      if (pDVar6 == (Delegate *)0x0) goto code_?;
    }
    pSVar3[1].monitor = (MonitorData *)pDVar6;
    unaff_EBX = this;
    if ((e == (InitializedGameQueryDataEventArgs *)0x0) ||
       (this_00 = (e->fields).RootWO, this_00 == (MVWorldObjectClient *)0x0)) goto code_?;
    pIVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,in_stack_9);
    newAvatarWoID = pIVar8;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar1 = (MVBody *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_02,(int32_t)pIVar8,in_stack_10);
    unaff_EDI = TypeInfo__MVBody;
    if (pMVar1 == (MVBody *)0x0) {
      this_09 = (MVBody *)0x0;
code_?:
      this_03 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
      ;
      if (this_03 != (PrefabPool *)0x0) {
        unaff_EDI = (MVBody__Class *)PrefabPool::PrefabPool_get_MVRandomBoxPrefab(this_03,pMVar2);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pLVar11 = (this->fields).bodies;
        if (((pLVar11 != (List_1_MVBody_ *)0x0) &&
            (this_04 = (Collection_1_VoxelHit_ *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar11,
                                  (this->fields).currentBodyIndex,
                                  MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                 ), this_04 != (Collection_1_VoxelHit_ *)0x0)) &&
           (pIVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                      Collection_1_VoxelHit__get_Items(this_04,in_stack_12),
           unaff_EDI != (MVBody__Class *)0x0)) {
          MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::
          MvAvatarMetaDataWoMap_ResetAvatar
                    ((MvAvatarMetaDataWoMap *)unaff_EDI,(int32_t)pIVar8,(int32_t)newAvatarWoID,
                     in_stack_13);
          pLVar11 = (this->fields).bodies;
          if (pLVar11 != (List_1_MVBody_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::
            List`1[WinningConditionBriefingLayoutFitter+LayoutGroupAspectFitterDef]::
            List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef__set_Item
                      ((List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)
                       pLVar11,(this->fields).currentBodyIndex,
                       (WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *)this_09,
                       MethodInfo__System__Collections__Generic__List<MVBody>__set_Item_int__MVBody_
                      );
            AvatarID = &UNK_?;
            AvatarEditModeBodyController_SetCurrentBody
                      (this,(this->fields).currentBodyIndex,(MethodInfo *)0x0);
            pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            puVar15 = &UNK_?;
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar4,(Object *)this,
                       MethodInfo__AvatarEditModeBodyController___ResetCallback_m__3_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar14,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar4,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                      );
            pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
              func_?(TypeInfo__AvatarEditModeBodyController);
            }
            if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache3 ==
                (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(
                                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                                          );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar4,(Object *)0x0,
                         MethodInfo__AvatarEditModeBodyController___ResetCallback_m__4_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>__EventFunction_System__Object__void__
                        );
              if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
                func_?(TypeInfo__AvatarEditModeBodyController);
              }
              TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache3 =
                   (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)pUVar4;
            }
            if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
              func_?(TypeInfo__AvatarEditModeBodyController);
            }
            unaff_EDI = (MVBody__Class *)
                        TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache3;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            pMVar2 = (MethodInfo *)&UNK_?;
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar14,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)unaff_EDI,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                      );
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_05 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetActiveAvatar
                        (this_05,(int32_t)AvatarID,(MethodInfo *)0x0);
              method_00 = (MethodInfo *)&UNK_?;
              root = (ExecuteEvents_EventFunction_1_IUIStack___Class *)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)this,(MethodInfo *)0x0);
              if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache4 ==
                  (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                newAvatarWoID = (IList_1_VoxelHit_ *)&UNK_?;
                root = 
                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                ;
                pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar4,(Object *)0x0,
                           MethodInfo__AvatarEditModeBodyController___ResetCallback_m__5_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                          );
                if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                     0x2000000) != 0) &&
                   ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
                  func_?(TypeInfo__AvatarEditModeBodyController);
                }
                TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache4 =
                     (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar4;
              }
              if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
                func_?(TypeInfo__AvatarEditModeBodyController);
              }
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                   TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache4;
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        ((GameObject *)root,(BaseEventData *)0x0,callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              unaff_EBX = (AvatarEditModeBodyController *)
                          UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
              if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache5 ==
                  (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?(
                                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                            );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar4,(Object *)0x0,
                           MethodInfo__AvatarEditModeBodyController___ResetCallback_m__6_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,
                           MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                          );
                if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                     0x2000000) != 0) &&
                   ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
                  func_?(TypeInfo__AvatarEditModeBodyController);
                }
                TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache5 =
                     (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar4;
              }
              if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
                func_?(TypeInfo__AvatarEditModeBodyController);
              }
              unaff_EDI = (MVBody__Class *)
                          TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache5;
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        ((GameObject *)unaff_EBX,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)unaff_EDI,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              if (this_09 != (MVBody *)0x0) {
                MVBody::MVBody_set_ShadowVisible(this_09,0,pMVar2);
                this_06 = MVBody::MVBody_get_Animation(this_09,(MethodInfo *)0x0);
                if ((this_06 != (BoneAnimation *)0x0) &&
                   (this_07 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_GetComponent_58
                                        ((Component_1 *)this_06,
                                         UnityEngine__Animation_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Animation>__
                                        ), this_07 != (MVInteractableBase *)0x0)) {
                  pIVar16 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                            Animation_GetEnumerator((Animation *)this_07,method_00);
                  while (pIVar16 != (IEnumerator *)0x0) {
                    cVar17 = func_?(1,TypeInfo__System__Collections__IEnumerator);
                    unaff_EDI = (MVBody__Class *)TypeInfo__System__Collections__IEnumerator;
                    unaff_EBX = (AvatarEditModeBodyController *)0x0;
                    if (cVar17 == '\0') {
                      newAvatarWoID->klass = (IList_1_VoxelHit___Class *)0x17f;
                      iVar18 = func_?(pIVar16);
                      if (iVar18 != 0) {
                        func_?(0,TypeInfo__System__IDisposable);
                      }
                      *unaff_FS_OFFSET = puVar15;
                      return;
                    }
                    pIVar19 = pIVar16->klass;
                    uVar20 = 0;
                    uVar21._0_1_ = (pIVar19->_1).rank;
                    uVar21._1_1_ = (pIVar19->_1).minimumAlignment;
                    if (uVar21 != 0) {
                      unaff_EBX = (AvatarEditModeBodyController *)pIVar19->interfaceOffsets;
                      do {
                        if ((&unaff_EBX->klass)[(uint)uVar20 * 2] ==
                            (AvatarEditModeBodyController__Class *)
                            TypeInfo__System__Collections__IEnumerator) {
                          ppMVar22 = &(&(pIVar16->klass->vtable).get_Current)
                                      [(int)(&unaff_EBX->monitor)[(uint)uVar20 * 2]].method;
                          goto code_?;
                        }
                        uVar20 = uVar20 + 1;
                      } while (uVar20 < uVar21);
                    }
                    ppMVar22 = (MethodInfo **)
                               func_?(pIVar16,TypeInfo__System__Collections__IEnumerator);
code_?:
                    pAVar23 = (AnimationState *)(*(code *)*ppMVar22)(pIVar16);
                    if (pAVar23 == (AnimationState *)0x0) break;
                    this_08 = (AnimationState *)0x0;
                    if (pAVar23->klass == TypeInfo__UnityEngine__AnimationState) {
                      this_08 = pAVar23;
                    }
                    if (this_08 == (AnimationState *)0x0) {
                      func_?(pAVar23);
                      break;
                    }
                    UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_set_wrapMode(this_08,WrapMode__Enum_Loop,(MethodInfo *)0x0);
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    bVar24 = (TypeInfo__MVBody->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar24) ||
       ((MVBody__Class *)(pMVar1->klass->_1).typeHierarchy[bVar24 - 1] != TypeInfo__MVBody)) {
      bVar25 = false;
    }
    else {
      bVar25 = true;
    }
    this_09 = (MVBody *)0x0;
    if (bVar25) {
      this_09 = pMVar1;
    }
    if (this_09 != (MVBody *)0x0) goto code_?;
  }
  func_?(pMVar1,unaff_EDI);
  pDVar5 = extraout_ECX;
  pEVar7 = extraout_EDX_00;
code_?:
  func_?(pDVar5,pEVar7);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void ResetCurrentBody() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_ResetCurrentBody
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarEditModeBodyController___ResetCurrentBody_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pRVar1 = (this->fields).resetAvatarHandler;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pRVar1,
                      ResetAvatarHandler_MethodInfo__UnityEngine__Object__Instantiate<ResetAvatarHandler>_ResetAvatarHandler_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pXVar2;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this_01,
               MethodInfo__AvatarEditModeBodyController___ResetCurrentBody_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pRVar1 = (this_01->fields)._._._._.m_CachedPtr;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (this->fields).bodies;
    if (this_00 != (List_1_MVBody_ *)0x0) {
      currentBody = (MVBody *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                               (this->fields).currentBodyIndex,
                               MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                              );
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__AvatarEditModeBodyController__ExecuteReset__,
                 (MethodInfo *)0x0);
      if (pRVar1 != (ResetAvatarHandler *)0x0) {
        ResetAvatarHandler::ResetAvatarHandler_ResetAvatar
                  (pRVar1,currentBody,(Action *)pUVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ScreenShotCallback(Texture2D, String) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_ScreenShotCallback
               (AvatarEditModeBodyController *this,Texture2D *screenshotTex,String *successMessage,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).currentActionSuccessMessage = successMessage;
  data = UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
         ImageConversion_EncodeToPNG(screenshotTex,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__AvatarEditModeBodyController__UploadedImageData__,
             (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
    func_?();
  }
  DataUploadManager::DataUploadManager_UploadData(data,(UnityAction *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void SellCurrentAvatar(SellAvatarController) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SellCurrentAvatar
               (AvatarEditModeBodyController *this,SellAvatarController *avatarSeller,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).bodies;
  if (pLVar1 != (List_1_MVBody_ *)0x0) {
    this_00 = (Collection_1_VoxelHit_ *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                         (this->fields).currentBodyIndex,
                         MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
      woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLVar1 = (this->fields).bodies;
      if (pLVar1 != (List_1_MVBody_ *)0x0) {
        currentBody = (MVBody *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                 (this->fields).currentBodyIndex,
                                 MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                );
        if (avatarSeller != (SellAvatarController *)0x0) {
          SellAvatarController::SellAvatarController_Initialize
                    (avatarSeller,(int32_t)woID,currentBody,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Set(String) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_Set
               (AvatarEditModeBodyController *this,String *animation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).bodies;
  if (pLVar1 != (List_1_MVBody_ *)0x0) {
    this_00 = (MVBody *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                         (this->fields).currentBodyIndex,
                         MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (this_00 != (MVBody *)0x0) {
      this_01 = MVBody::MVBody_get_Animation(this_00,(MethodInfo *)0x0);
      if (this_01 != (BoneAnimation *)0x0) {
        BoneAnimation::BoneAnimation_Play(this_01,animation,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pLVar1 = (this->fields).bodies;
        if (pLVar1 != (List_1_MVBody_ *)0x0) {
          this_02 = (DayNightCycle *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                               (this->fields).currentBodyIndex,
                               MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                              );
          if (this_02 != (DayNightCycle *)0x0) {
            this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_02,(MethodInfo *)0x0);
            if (this_03 != (CelestialParam *)0x0) {
              pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponentsInChildren_29
                                 ((GameObject *)this_03,
                                  ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
                                 );
              uVar3 = 0;
              if (pUVar2 != (UseInteratorVisualization__Array *)0x0) {
                ppUVar4 = pUVar2->vector;
                while( true ) {
                  if ((int)pUVar2->max_length <= (int)uVar3) {
                    return;
                  }
                  if (pUVar2->max_length <= uVar3) break;
                  pUVar5 = *ppUVar4;
                  if (pUVar5 != (UseInteratorVisualization *)0x0) {
                    bVar6 = (TypeInfo__AccessoryAnimationHandler->_1).naturalAligment;
                    if (((pUVar5->klass->_1).naturalAligment < bVar6) ||
                       ((pUVar5->klass->_1).typeHierarchy[bVar6 - 1] !=
                        (Il2CppClass *)TypeInfo__AccessoryAnimationHandler)) {
                      bVar7 = false;
                    }
                    else {
                      bVar7 = true;
                    }
                    pUVar8 = (UseInteratorVisualization *)0x0;
                    if (bVar7) {
                      pUVar8 = pUVar5;
                    }
                    if (pUVar8 != (UseInteratorVisualization *)0x0) {
                      method_00 = (MethodInfo *)func_?(uVar3);
                      iVar9 = func_?(method_00,TypeInfo__AccessoryAnimationHandler);
                      if (iVar9 == 0) goto code_?;
                      this_04 = (AccessoryAnimationHandler *)
                                func_?(method_00,TypeInfo__AccessoryAnimationHandler,0);
                      AccessoryAnimationHandler::AccessoryAnimationHandler_SetAllAnimationToLooping
                                (this_04,method_00);
                    }
                  }
                  iVar9 = func_?(uVar3);
                  if (iVar9 == 0) goto code_?;
                  func_?(5,iVar9,this_03);
                  uVar3 = uVar3 + 1;
                  ppUVar4 = ppUVar4 + 1;
                }
                uVar10 = func_?(0,0);
                func_?(uVar10);
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetCurrentBody(Int32) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_SetCurrentBody
               (AvatarEditModeBodyController *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).bodies;
  if (pLVar1 != (List_1_MVBody_ *)0x0) {
    pMVar2 = (MVBody *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                        (this->fields).currentBodyIndex,
                        MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (pMVar2 != (MVBody *)0x0) {
      MVBody::MVBody_set_ShadowVisible(pMVar2,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLVar1 = (this->fields).bodies;
      if (pLVar1 != (List_1_MVBody_ *)0x0) {
        pMVar2 = (MVBody *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                            (this->fields).currentBodyIndex,
                            MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
        if (pMVar2 != (MVBody *)0x0) {
          MVBody::MVBody_set_Visible(pMVar2,0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pLVar1 = (this->fields).bodies;
          if (pLVar1 != (List_1_MVBody_ *)0x0) {
            pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                (this->fields).currentBodyIndex,
                                MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                               );
            if (pIVar3 != (IEventSystemHandler *)0x0) {
              uVar4 = (this->fields).hidePos.x;
              uVar5 = (this->fields).hidePos.y;
              (*(code *)pIVar3->klass[2]._0.this_arg.data)
                        (pIVar3,uVar4,uVar5,(this->fields).hidePos.z);
              if (cRam_? == '\0') {
                func_?(_UNK_?);
                cRam_? = '\x01';
              }
              pLVar1 = (this->fields).bodies;
              if (pLVar1 != (List_1_MVBody_ *)0x0) {
                pMVar6 = (MVWorldObjectClient *)
                         mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                         EventSystems::IEventSystemHandler]::
                         List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                   ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                    (this->fields).currentBodyIndex,
                                    MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                   );
                this_00 = (this->fields).bodySpawnPoint;
                if (this_00 != (MVSpawnPointRed *)0x0) {
                  pQVar7 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                                      ((Quaternion *)&stack0xffffffec,(MVWorldObjectClient *)this_00
                                       ,(MethodInfo *)0x0);
                  if (pMVar6 != (MVWorldObjectClient *)0x0) {
                    MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                              (pMVar6,*pQVar7,(MethodInfo *)0x0);
                    bVar8 = cRam_? == '\0';
                    (this->fields).currentBodyIndex = index;
                    if (bVar8) {
                      func_?();
                      index = (this->fields).currentBodyIndex;
                      cRam_? = '\x01';
                    }
                    pLVar1 = (this->fields).bodies;
                    if (pLVar1 != (List_1_MVBody_ *)0x0) {
                      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                               EventSystems::IEventSystemHandler]::
                               List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                          pLVar1,index,
                                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                         );
                      if (pIVar3 != (IEventSystemHandler *)0x0) {
                        uVar9 = (this->fields).displayPos.x;
                        uVar10 = (this->fields).displayPos.y;
                        (*(code *)pIVar3->klass[2]._0.this_arg.data)
                                  (pIVar3,uVar9,uVar10,(this->fields).displayPos.z);
                        if (cRam_? == '\0') {
                          func_?(_UNK_?);
                          cRam_? = '\x01';
                        }
                        pLVar1 = (this->fields).bodies;
                        if (pLVar1 != (List_1_MVBody_ *)0x0) {
                          pMVar6 = (MVWorldObjectClient *)
                                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                   EventSystems::IEventSystemHandler]::
                                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_
                                               *)pLVar1,(this->fields).currentBodyIndex,
                                              MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                             );
                          if (pMVar6 != (MVWorldObjectClient *)0x0) {
                            MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                                      (pMVar6,(this->fields).displayRotation,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            pLVar1 = (this->fields).bodies;
                            if (pLVar1 != (List_1_MVBody_ *)0x0) {
                              pMVar2 = (MVBody *)
                                       mscorlib.dll::System::Collections::Generic::
                                       List`1[UnityEngine::EventSystems::IEventSystemHandler]::
                                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                                 ((
                                                  List_1_UnityEngine_EventSystems_IEventSystemHandler_
                                                  *)pLVar1,(this->fields).currentBodyIndex,
                                                  MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                                 );
                              if (pMVar2 != (MVBody *)0x0) {
                                MVBody::MVBody_set_Visible(pMVar2,1,(MethodInfo *)0x0);
                                if (cRam_? == '\0') {
                                  func_?();
                                  cRam_? = '\x01';
                                }
                                pLVar1 = (this->fields).bodies;
                                if (pLVar1 != (List_1_MVBody_ *)0x0) {
                                  this_01 = (PrefabPool *)
                                            mscorlib.dll::System::Collections::Generic::
                                            List`1[UnityEngine::EventSystems::IEventSystemHandler]::
                                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                                      ((
                                                  List_1_UnityEngine_EventSystems_IEventSystemHandler_
                                                  *)pLVar1,(this->fields).currentBodyIndex,
                                                  MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                                  );
                                  if (this_01 != (PrefabPool *)0x0) {
                                    t = PrefabPool::PrefabPool_get_MVPointLightPrefab
                                                  (this_01,(MethodInfo *)0x0);
                                    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.
                                                methodPtr & 0x2000000) != 0) &&
                                       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                                      func_?();
                                    }
                                    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                                              ((Transform *)t,1,(MethodInfo *)0x0);
                                    AvatarEditModeBodyController_SetPublishAvatarButtonActive
                                              (this,(MethodInfo *)0x0);
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
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetCurrentBodyByWoId(Int32) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SetCurrentBodyByWoId
               (AvatarEditModeBodyController *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).bodies;
  while (pLVar1 != (List_1_MVBody_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).bodies;
    if ((pLVar1 == (List_1_MVBody_ *)0x0) ||
       (this_00 = (Collection_1_VoxelHit_ *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_),
       this_00 == (Collection_1_VoxelHit_ *)0x0)) break;
    pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
    if (pIVar3 == (IList_1_VoxelHit_ *)woId) {
      AvatarEditModeBodyController_SetCurrentBody(this,index,(MethodInfo *)0x0);
      AvatarSelectionController::AvatarSelectionController_set_CurrentlySelectedSlotIndex
                (index,(MethodInfo *)0x0);
      return;
    }
    index = index + 1;
    pLVar1 = (this->fields).bodies;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetPublishAvatarButtonActive() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SetPublishAvatarButtonActive
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).publishAvatarBtn;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (PrefabPool *)0x0) {
    this_02 = PrefabPool::PrefabPool_get_MVRandomBoxPrefab(this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (this->fields).bodies;
    if (this_00 != (List_1_MVBody_ *)0x0) {
      pMVar3 = (MvAvatarMetaData *)&UNK_?;
      this_03 = (Collection_1_VoxelHit_ *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                           (this->fields).currentBodyIndex,
                           MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
      if ((this_03 != (Collection_1_VoxelHit_ *)0x0) &&
         (woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_03,(MethodInfo *)0x0),
         this_02 != (ObjectPrefab *)0x0)) {
        MVWorldObject.dll::MV::WorldObject::MvAvatarMetaDataWoMap::MvAvatarMetaDataWoMap_TryGetValue
                  ((MvAvatarMetaDataWoMap *)this_02,(int32_t)woID,
                   (MvAvatarMetaData **)&stack0xfffffff8,(MethodInfo *)0x0);
        if (pMVar3 != (MvAvatarMetaData *)0x0) {
          pGVar1 = (this->fields).publishAvatarBtn;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,(pMVar3->fields).canBeSoldOnMarketPlace,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetPublishAvatarGO(GameObject) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SetPublishAvatarGO
               (AvatarEditModeBodyController *this,GameObject *publishAvatarGO,MethodInfo *method)

{
  (this->fields).publishAvatarBtn = publishAvatarGO;
  AvatarEditModeBodyController_SetPublishAvatarButtonActive(this,(MethodInfo *)0x0);
  return;
}


/* Void SetToNextAnimation() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_SetToNextAnimation
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).animations;
  iVar2 = (this->fields).currentAnimationIndex;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<System::String>__get_Count__)
    ;
    if (iVar2 < (int)((int)&pOVar3[-1].monitor + 3)) {
      index = (this->fields).currentAnimationIndex + 1;
    }
    else {
      index = 0;
    }
    (this->fields).currentAnimationIndex = index;
    pLVar1 = (this->fields).animations;
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      animation = (String *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                            );
      AvatarEditModeBodyController_Set(this,animation,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TakeScreenshot() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController_TakeScreenshot
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
    func_?(TypeInfo__AvatarEditModeBodyController);
  }
  if (TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache6 ==
      (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AvatarEditModeBodyController___TakeScreenshot_m__7_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
      func_?(TypeInfo__AvatarEditModeBodyController);
    }
    TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache6 =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)this_00;
  }
  if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
    func_?(TypeInfo__AvatarEditModeBodyController);
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AvatarEditModeBodyController->static_fields->__f__am_cache6;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Void UploadedImageData() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController_UploadedImageData
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_System__Object__ScreenshotUploadedEventArgs_
             ,
             MethodInfo__System__EventHandler<ScreenshotUploadedEventArgs>__EventHandler_System__Object__void__
            );
  if (this_00 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_add_ScreenshotUploaded
              (this_00,(EventHandler_1_ScreenshotUploadedEventArgs_ *)this_01,(MethodInfo *)0x0);
    this_02 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
    ;
    if (this_02 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      uStack1 = 0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                (this_02,(MethodInfo *)0x1);
      return;
    }
  }
  uStack1 = 0;
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean <Initialize>m__0(MVWorldObjectClient) */

bool Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__Initialize_m__0(MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVSpawnPointRed->_1).naturalAligment;
    if ((bVar1 <= (wo->klass->_1).naturalAligment) &&
       ((MVSpawnPointRed__Class *)(wo->klass->_1).typeHierarchy[bVar1 - 1] ==
        TypeInfo__MVSpawnPointRed)) {
      return wo != (MVWorldObjectClient *)0x0;
    }
    return 0;
  }
  return 0;
}


/* Boolean <Initialize>m__1(MVWorldObjectClient) */

bool Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__Initialize_m__1(MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVBody->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar1) ||
       ((MVBody__Class *)(wo->klass->_1).typeHierarchy[bVar1 - 1] != TypeInfo__MVBody)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    this = (MVBody *)0x0;
    if (bVar2) {
      this = (MVBody *)wo;
    }
    if (this != (MVBody *)0x0) {
      bVar3 = MVBody::MVBody_get_IsPlayerBody(this,(MethodInfo *)0x0);
      return bVar3 == 0;
    }
  }
  return 0;
}


/* Int32 <Initialize>m__2(MVWorldObjectClient) */

int32_t Assembly-CSharp.dll::AvatarEditModeBodyController::
        AvatarEditModeBodyController__Initialize_m__2(MVWorldObjectClient *s,MethodInfo *method)

{
  if (s != (MVWorldObjectClient *)0x0) {
    return (s->fields)._.id;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* Void <InitializedPurchasedAvatar>m__B(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__InitializedPurchasedAvatar_m__B
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializedPurchasedAvatar>m__C(IAvatarSetBodyGroup, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__InitializedPurchasedAvatar_m__C
               (AvatarEditModeBodyController *this,IAvatarSetBodyGroup *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bodies;
  if (this_00 != (List_1_MVBody_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
    IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
               (this->fields).currentBodyIndex,
               MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (x != (IAvatarSetBodyGroup *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <MVNetworGame_ScreenshotUploadedHandler>m__10(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_m__10
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x80);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <MVNetworGame_ScreenshotUploadedHandler>m__11(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_m__11
               (IEditStateCommands *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IEditStateCommands *)0x0) {
    func_?(0,TypeInfo__IEditStateCommands,x,0x34);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <MVNetworGame_ScreenshotUploadedHandler>m__F(IPurchaseSoundManager, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__MVNetworGame_ScreenshotUploadedHandler_m__F
               (IPurchaseSoundManager *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IPurchaseSoundManager *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IPurchaseSoundManager,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnActiveAvatarSetAfterPurchase>m__D(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase_m__D
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x80);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnActiveAvatarSetAfterPurchase>m__E(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__OnActiveAvatarSetAfterPurchase_m__E
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_You_have_a_new_active_avatar_set,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Warning,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnProductPurchaseAvatarResponse>m__A(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__OnProductPurchaseAvatarResponse_m__A
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x80);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPurchaseAvatarConfirmation>m__9(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__OnPurchaseAvatarConfirmation_m__9
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <PurchaseAvatar>m__8(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__PurchaseAvatar_m__8
               (AvatarEditModeBodyController *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Purchase_Avatar_,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarEditModeBodyController__OnPurchaseAvatarConfirmation_bool__ConfirmationPopup_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>__UnityAction_System__Object__void__
            );
  pSVar2 = TM::TM__(StringLiteral_Confirm,(MethodInfo *)0x0);
  if (x == (IModalPopupCreator *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = x->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar7 = &(&(x->klass->vtable).Create_2)[pIVar4->interfaceOffsets[uVar5].offset].method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            &UNK_?;
  pSVar2 = (String *)x;
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
code_?:
  (*(code *)*ppMVar7)(x,pSVar1,this_00,pSVar2);
  return;
}


/* Void <ResetCallback>m__3(IAvatarSetBodyGroup, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__ResetCallback_m__3
               (AvatarEditModeBodyController *this,IAvatarSetBodyGroup *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bodies;
  if (this_00 != (List_1_MVBody_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
    IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
               (this->fields).currentBodyIndex,
               MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    if (x != (IAvatarSetBodyGroup *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ResetCallback>m__4(IEditStateCommands, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__ResetCallback_m__4
               (IEditStateCommands *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IEditStateCommands *)0x0) {
    func_?(0,TypeInfo__IEditStateCommands,x,0x34);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ResetCallback>m__5(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__ResetCallback_m__5
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ResetCallback>m__6(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__ResetCallback_m__6
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <TakeScreenshot>m__7(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::AvatarEditModeBodyController::
     AvatarEditModeBodyController__TakeScreenshot_m__7
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Image_upload_is_disabled_in_stan,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,pSVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AvatarEditModeBodyController() */

void Assembly-CSharp.dll::AvatarEditModeBodyController::AvatarEditModeBodyController__ctor
               (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MVBody>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<MVBody>__List__);
  (this->fields).bodies = (List_1_MVBody_ *)pLVar1;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  if (pLVar1 != (List_1_UnityEngine_Vector4_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)StringLiteral_Idle,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)StringLiteral_Jump,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)StringLiteral_Dead,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)StringLiteral_Swim,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)StringLiteral_Walk,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    (this->fields).animations = (List_1_System_String_ *)pLVar1;
    UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVBody get_CurrentBody() */

MVBody * Assembly-CSharp.dll::AvatarEditModeBodyController::
         AvatarEditModeBodyController_get_CurrentBody
                   (AvatarEditModeBodyController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bodies;
  if (this_00 != (List_1_MVBody_ *)0x0) {
    pMVar1 = (MVBody *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                        (this->fields).currentBodyIndex,
                        MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_);
    return pMVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVBody *)(*pcVar2)();
  return pMVar1;
}

