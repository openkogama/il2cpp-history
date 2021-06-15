
/* Vector3 CalculateTieOffset(Int32, Int32) */

Vector3 * Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CalculateTieOffset
                    (Vector3 *__return_storage_ptr__,AvatarCapture *this,int32_t currentWinner,
                    int32_t amountOfWinners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
  uVar2._0_4_ = pVVar1->x;
  uStack_3 = pVVar1->y;
  fVar4 = (float)amountOfWinners * _UNK_?;
  if (((amountOfWinners & 1U) == 0) || (currentWinner != 1)) {
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                      ((float)(amountOfWinners + 2) * _UNK_?,(MethodInfo *)0x0);
    fVar6 = ((float)currentWinner - _UNK_?) * _UNK_?;
    iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                      (fVar6,(MethodInfo *)0x0);
    fVar8 = (float)iVar7 + _UNK_?;
    fVar9 = (_UNK_? / (float)iVar5) * _UNK_?;
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                      (fVar6,(MethodInfo *)0x0);
    fVar6 = (float)iVar5 + _UNK_? + fVar8 * fVar9;
    uVar2 = CONCAT44(uStack_3,fVar6);
    if ((currentWinner & 1U) == 0) {
      uVar2 = CONCAT44(uStack_3,fVar6 * _UNK_?);
    }
  }
  uStack_3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->x = (float)(undefined4)uVar2;
  __return_storage_ptr__->y = (float)uStack_3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Void CaptureAllPlayersInGame() */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CaptureAllPlayersInGame
               (AvatarCapture *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  AvatarCapture_InitializeCamera(this,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVAvatar *)0x0) {
    this_02 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      source = MVPlayerContainer::MVPlayerContainer_get_Values
                         ((MVPlayerContainer *)this_02,(MethodInfo *)0x0);
      item = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                       ((IEnumerable_1_UseInteractor_ *)source,
                        System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                       );
      if (this_00 != (List_1_UnityEngine_Vector4_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)item,
                   MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__Add_System__Collections__Generic__List<MVPlayer>_
                  );
        AvatarCapture_CapturePlayerGroup
                  ((AvatarCapture *)this_01,(List_1_List_1_MVPlayer_ *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CapturePlayer(List`1[MVPlayer]) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CapturePlayer
               (AvatarCapture *this,List_1_MVPlayer_ *players,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLStack_1 = (List_1_VoxelHit_ *)0x0;
  AvatarCapture_InitializeCamera(this,(MethodInfo *)0x0);
  if (players != (List_1_MVPlayer_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)players,
                        MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    this_00 = (List_1_VoxelHit_ *)
              func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    pLStack_1 = this_00;
    AvatarCapture_CreateTriangleFormation
              (this,(List_1_UnityEngine_Vector3_ **)&pLStack_1,(this->fields).formationSpacing,
               (int32_t)pOVar2,(MethodInfo *)0x0);
    if (pLStack_1 != (List_1_VoxelHit_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Reverse
                (pLStack_1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__);
      fVar3 = 0.0;
      while( true ) {
        fStack_4 = fVar3;
        pMStack_5 = (MVWorldObjectClientManager *)fVar3;
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)players,
                            MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
        if ((int)pOVar2 <= (int)fVar3) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMStack_5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        this_01 = (MVPlayer *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)players,
                             (int32_t)fVar3,
                             MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_
                            );
        if (this_01 == (MVPlayer *)0x0) break;
        id = MVPlayer::MVPlayer_get_WoId(this_01,(MethodInfo *)0x0);
        if (pMStack_5 == (MVWorldObjectClientManager *)0x0) break;
        this_02 = (PrefabPool *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMStack_5,id,(MethodInfo *)0x0);
        if (this_02 == (PrefabPool *)0x0) break;
        pMVar6 = (MVWorldObjectClientManager *)
                 PrefabPool::PrefabPool_get_MVPointLightPrefab(this_02,(MethodInfo *)0x0);
        pCVar7 = (this->fields).renderCam;
        pMStack_5 = pMVar6;
        if (pCVar7 == (Camera *)0x0) break;
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pCVar7,(MethodInfo *)0x0);
        if (pMVar6 == (MVWorldObjectClientManager *)0x0) break;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_9,(Transform *)pMVar6,(MethodInfo *)0x0);
        if (this_03 == (Transform *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_03,*pVVar8,(MethodInfo *)0x0);
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_10,this_03,(MethodInfo *)0x0);
        uStack_11._0_4_ = pVVar8->x;
        uStack_11._4_4_ = pVVar8->y;
        fStack_12 = pVVar8->z;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                           (&VStack_13,(Transform *)pMVar6,(MethodInfo *)0x0);
        uStack_14._0_4_ = pVVar8->x;
        uStack_14._4_4_ = pVVar8->y;
        fStack_15 = pVVar8->z;
        fStack_16 = (this->fields).cameraOffset.x;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_07.z = fStack_15;
        a_07.x = (float)(undefined4)uStack_14;
        a_07.y = (float)uStack_14._4_4_;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           (&VStack_17,a_07,fStack_16,(MethodInfo *)0x0);
        a_08.z = fStack_12;
        a_08.x = (float)(undefined4)uStack_11;
        a_08.y = (float)uStack_11._4_4_;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           (&VStack_18,a_08,*pVVar8,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_03,*pVVar8,(MethodInfo *)0x0);
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_19,this_03,(MethodInfo *)0x0);
        uStack_14._0_4_ = pVVar8->x;
        uStack_14._4_4_ = pVVar8->y;
        fStack_12 = pVVar8->z;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                           (&VStack_20,(Transform *)pMVar6,(MethodInfo *)0x0);
        uStack_11._0_4_ = pVVar8->x;
        uStack_11._4_4_ = pVVar8->y;
        fVar3 = pVVar8->z;
        if (pLStack_1 == (List_1_VoxelHit_ *)0x0) break;
        VStack_21.y = (float)
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
        ;
        VStack_21.x = fStack_4;
        VStack_22.z = (float)pLStack_1;
        VStack_22.y = (float)auStack_23;
        VStack_22.x = (float)&UNK_?;
        puVar24 = (undefined8 *)func_?();
        uStack_25 = *puVar24;
        a.z = fVar3;
        a.x = (float)(undefined4)uStack_11;
        a.y = (float)uStack_11._4_4_;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           (&VStack_26,a,(float)((uint)uStack_25 ^ _UNK_?),(MethodInfo *)0x0)
        ;
        a_01.z = fStack_12;
        a_01.x = (float)(undefined4)uStack_14;
        a_01.y = (float)uStack_14._4_4_;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           (&VStack_21,a_01,*pVVar8,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_03,*pVVar8,(MethodInfo *)0x0);
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_22,this_03,(MethodInfo *)0x0);
        uStack_11._0_4_ = pVVar8->x;
        uStack_11._4_4_ = pVVar8->y;
        fVar3 = pVVar8->z;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           (&VStack_27,(Transform *)pMStack_5,(MethodInfo *)0x0);
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           (&VStack_28,*pVVar8,
                            (float)((uint)(this->fields).cameraOffset.z ^ _UNK_?),
                            (MethodInfo *)0x0);
        a_04.z = fVar3;
        a_04.x = (float)(undefined4)uStack_11;
        a_04.y = (float)uStack_11._4_4_;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffff08,a_04,*pVVar8,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_03,*pVVar8,(MethodInfo *)0x0);
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&puStack_29,this_03,(MethodInfo *)0x0);
        uStack_14._0_4_ = pVVar8->x;
        uStack_14._4_4_ = pVVar8->y;
        fVar3 = pVVar8->z;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           ((Vector3 *)&stack0xfffffef0,(Transform *)pMStack_5,(MethodInfo *)0x0);
        uStack_11._0_4_ = pVVar8->x;
        uStack_11._4_4_ = pVVar8->y;
        fStack_12 = pVVar8->z;
        if (pLStack_1 == (List_1_VoxelHit_ *)0x0) break;
        puVar24 = (undefined8 *)
                 func_?(&stack0xfffffee4,pLStack_1,fStack_4,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                );
        uStack_30 = *puVar24;
        uStack_31 = *(uint *)(puVar24 + 1);
        a_00.z = fStack_12;
        a_00.x = (float)(undefined4)uStack_11;
        a_00.y = (float)uStack_11._4_4_;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xfffffed8,a_00,(float)(uStack_31 ^ _UNK_?),
                            (MethodInfo *)0x0);
        a_02.z = fVar3;
        a_02.x = (float)(undefined4)uStack_14;
        a_02.y = (float)uStack_14._4_4_;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xfffffecc,a_02,*pVVar8,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_03,*pVVar8,(MethodInfo *)0x0);
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&puStack_32,this_03,(MethodInfo *)0x0);
        uStack_11._0_4_ = pVVar8->x;
        uStack_11._4_4_ = pVVar8->y;
        fVar3 = pVVar8->z;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                           (&VStack_33,(Transform *)pMStack_5,(MethodInfo *)0x0);
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xfffffea8,*pVVar8,(this->fields).cameraOffset.y,
                            (MethodInfo *)0x0);
        a_05.z = fVar3;
        a_05.x = (float)(undefined4)uStack_11;
        a_05.y = (float)uStack_11._4_4_;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xfffffe9c,a_05,*pVVar8,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_03,*pVVar8,(MethodInfo *)0x0);
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xfffffe90,this_03,(MethodInfo *)0x0);
        pMVar6 = pMStack_5;
        uStack_14._0_4_ = pVVar8->x;
        uStack_14._4_4_ = pVVar8->y;
        fStack_15 = pVVar8->z;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                           ((Vector3 *)&stack0xfffffe84,(Transform *)pMStack_5,(MethodInfo *)0x0);
        uStack_11._0_4_ = pVVar8->x;
        uStack_11._4_4_ = pVVar8->y;
        fStack_12 = pVVar8->z;
        if (pLStack_1 == (List_1_VoxelHit_ *)0x0) break;
        puVar24 = (undefined8 *)
                 func_?(&stack0xfffffe78,pLStack_1,fStack_4,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                );
        uStack_34._4_4_ = (float)((ulonglong)*puVar24 >> 0x20);
        fVar3 = uStack_34._4_4_;
        a_03.z = fStack_12;
        a_03.x = (float)(undefined4)uStack_11;
        a_03.y = (float)uStack_11._4_4_;
        uStack_34 = *puVar24;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xfffffe6c,a_03,fVar3,(MethodInfo *)0x0);
        a_06.z = fStack_15;
        a_06.x = (float)(undefined4)uStack_14;
        a_06.y = (float)uStack_14._4_4_;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xfffffe60,a_06,*pVVar8,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_03,*pVVar8,(MethodInfo *)0x0);
        AvatarCapture_DrawObject(this,this_03,(Transform *)pMVar6,(MethodInfo *)0x0);
        pCVar7 = (this->fields).renderCam;
        if (pCVar7 == (Camera *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render(pCVar7,(MethodInfo *)0x0);
        fVar3 = (float)((int)fStack_4 + 1);
      }
    }
  }
  func_?(0);
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* Void CapturePlayerGroup(List`1[List`1[MVPlayer]]) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CapturePlayerGroup
               (AvatarCapture *this,List_1_List_1_MVPlayer_ *sortedList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObjectClientManager *)0x0;
  iStack_2 = 0;
  iStack_3 = 0;
  if (sortedList != (List_1_List_1_MVPlayer_ *)0x0) {
    while( true ) {
      iVar4 = iStack_3;
      iStack_2 = iStack_3;
      pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)sortedList,
                          MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Count__
                         );
      if ((int)pOVar5 <= iStack_3) {
        return;
      }
      this_00 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)sortedList,iVar4,
                           MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_
                          );
      if (this_00 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) break;
      pOStack_6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (this_00,
                              MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__)
      ;
      this_01 = (MVWorldObjectClientManager *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                ((List_1_UnityEngine_Vector4_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      pMStack_1 = this_01;
      AvatarCapture_CreateTriangleFormation
                (this,(List_1_UnityEngine_Vector3_ **)&pMStack_1,(this->fields).formationSpacing,
                 (int32_t)pOStack_6,(MethodInfo *)0x0);
      if (pMStack_1 == (MVWorldObjectClientManager *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Reverse
                ((List_1_VoxelHit_ *)pMStack_1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__);
      iStack_3 = iStack_2 + 1;
      pMStack_7 = (MVPointLightObject *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)sortedList
                              ,
                              MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Count__
                             );
      iVar4 = 0;
      while( true ) {
        if (pMStack_1 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMStack_1,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                           );
        if ((int)pOVar5 <= iVar4) break;
        pMStack_8 = pMStack_1;
        if (pMStack_1 == (MVWorldObjectClientManager *)0x0) goto code_?;
        puVar9 = (undefined8 *)
                 func_?(auStack_10,pMStack_1,iVar4,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                );
        uStack_11 = *puVar9;
        fStack_12 = *(float *)(puVar9 + 1);
        pVVar13 = AvatarCapture_CalculateTieOffset
                           (&VStack_14,this,iStack_3,(int32_t)pMStack_7,(MethodInfo *)0x0);
        uStack_15._0_4_ = pVVar13->x;
        uStack_15._4_4_ = pVVar13->y;
        fStack_16 = pVVar13->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a_07.z = fStack_12;
        a_07.x = (float)(undefined4)uStack_11;
        a_07.y = (float)uStack_11._4_4_;
        b.z = fStack_16;
        b.x = (float)(undefined4)uStack_15;
        b.y = uStack_15._4_4_;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           (&VStack_17,a_07,b,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
        List_1_UnityEngine_Vector3__set_Item
                  ((List_1_UnityEngine_Vector3_ *)pMStack_8,iVar4,*pVVar13,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                  );
        iVar4 = iVar4 + 1;
      }
      fStack_16 = 0.0;
      if (0 < (int)pOStack_6) {
        do {
          fVar18 = fStack_16;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMStack_8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          this_02 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)sortedList,
                               iStack_2,
                               MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_
                              );
          if (this_02 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0)
          goto code_?;
          this_03 = (MVPlayer *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              (this_02,(int32_t)fVar18,
                               MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_
                              );
          if (((this_03 == (MVPlayer *)0x0) ||
              (id = MVPlayer::MVPlayer_get_WoId(this_03,(MethodInfo *)0x0),
              pMStack_8 == (MVWorldObjectClientManager *)0x0)) ||
             (this_04 = (PrefabPool *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMStack_8,id,(MethodInfo *)0x0), this_04 == (PrefabPool *)0x0))
          goto code_?;
          pMVar19 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_04,(MethodInfo *)0x0);
          pCVar20 = (this->fields).renderCam;
          pMStack_7 = pMVar19;
          if (((pCVar20 == (Camera *)0x0) ||
              (this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)pCVar20,(MethodInfo *)0x0),
              pMVar19 == (MVPointLightObject *)0x0)) ||
             (pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_21,(Transform *)pMVar19,(MethodInfo *)0x0),
             this_05 == (Transform *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_05,*pVVar13,(MethodInfo *)0x0);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_22,this_05,(MethodInfo *)0x0);
          uStack_23._0_4_ = pVVar13->x;
          uStack_23._4_4_ = pVVar13->y;
          uStack_15 = CONCAT44(pVVar13->z,(undefined4)uStack_15);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                             (&VStack_24,(Transform *)pMVar19,(MethodInfo *)0x0);
          uStack_11._0_4_ = pVVar13->x;
          uStack_11._4_4_ = pVVar13->y;
          fStack_12 = pVVar13->z;
          pMStack_8 = (MVWorldObjectClientManager *)(this->fields).cameraOffset.x;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          VStack_25.z = (float)&UNK_?;
          a_08.z = fStack_12;
          a_08.x = (float)(undefined4)uStack_11;
          a_08.y = (float)uStack_11._4_4_;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             (&VStack_26,a_08,(float)pMStack_8,(MethodInfo *)0x0);
          a_09.z = uStack_15._4_4_;
          a_09.x = (float)(undefined4)uStack_23;
          a_09.y = (float)uStack_23._4_4_;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             (&VStack_27,a_09,*pVVar13,(MethodInfo *)0x0);
          VStack_28.z = (float)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_05,*pVVar13,(MethodInfo *)0x0);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_29,this_05,(MethodInfo *)0x0);
          uStack_11._0_4_ = pVVar13->x;
          uStack_11._4_4_ = pVVar13->y;
          uStack_15 = CONCAT44(pVVar13->z,(undefined4)uStack_15);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                             (&VStack_30,(Transform *)pMVar19,(MethodInfo *)0x0);
          uStack_23._0_4_ = pVVar13->x;
          uStack_23._4_4_ = pVVar13->y;
          fVar18 = pVVar13->z;
          if (pMStack_1 == (MVWorldObjectClientManager *)0x0) goto code_?;
          VStack_31.x = (float)
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
          ;
          VStack_32.z = fStack_16;
          VStack_32.y = (float)pMStack_1;
          VStack_32.x = (float)auStack_33;
          VStack_34.z = (float)&UNK_?;
          puVar9 = (undefined8 *)func_?();
          uStack_35 = *puVar9;
          a.z = fVar18;
          a.x = (float)(undefined4)uStack_23;
          a.y = (float)uStack_23._4_4_;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             (&VStack_36,a,(float)((uint)uStack_35 ^ _UNK_?),
                              (MethodInfo *)0x0);
          a_01.z = uStack_15._4_4_;
          a_01.x = (float)(undefined4)uStack_11;
          a_01.y = (float)uStack_11._4_4_;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             (&VStack_31,a_01,*pVVar13,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_05,*pVVar13,(MethodInfo *)0x0);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_32,this_05,(MethodInfo *)0x0);
          uStack_23._0_4_ = pVVar13->x;
          uStack_23._4_4_ = pVVar13->y;
          fVar18 = pVVar13->z;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             (&VStack_34,(Transform *)pMStack_7,(MethodInfo *)0x0);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             (&VStack_37,*pVVar13,
                              (float)((uint)(this->fields).cameraOffset.z ^ _UNK_?),
                              (MethodInfo *)0x0);
          a_04.z = fVar18;
          a_04.x = (float)(undefined4)uStack_23;
          a_04.y = (float)uStack_23._4_4_;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&stack0xfffffed4,a_04,*pVVar13,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_05,*pVVar13,(MethodInfo *)0x0);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffec8,this_05,(MethodInfo *)0x0);
          uStack_11._0_4_ = pVVar13->x;
          uStack_11._4_4_ = pVVar13->y;
          fVar18 = pVVar13->z;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             (&VStack_28,(Transform *)pMStack_7,(MethodInfo *)0x0);
          uStack_23._0_4_ = pVVar13->x;
          uStack_23._4_4_ = pVVar13->y;
          uStack_15 = CONCAT44(pVVar13->z,(undefined4)uStack_15);
          if (pMStack_1 == (MVWorldObjectClientManager *)0x0) goto code_?;
          puVar9 = (undefined8 *)
                   func_?(&stack0xfffffeb0,pMStack_1,fStack_16,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                  );
          uStack_38 = *puVar9;
          uStack_39 = *(uint *)(puVar9 + 1);
          a_00.z = uStack_15._4_4_;
          a_00.x = (float)(undefined4)uStack_23;
          a_00.y = (float)uStack_23._4_4_;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&stack0xfffffea4,a_00,(float)(uStack_39 ^ _UNK_?),
                              (MethodInfo *)0x0);
          a_02.z = fVar18;
          a_02.x = (float)(undefined4)uStack_11;
          a_02.y = (float)uStack_11._4_4_;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&stack0xfffffe98,a_02,*pVVar13,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_05,*pVVar13,(MethodInfo *)0x0);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffe8c,this_05,(MethodInfo *)0x0);
          uStack_23._0_4_ = pVVar13->x;
          uStack_23._4_4_ = pVVar13->y;
          fVar18 = pVVar13->z;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                             (&VStack_25,(Transform *)pMStack_7,(MethodInfo *)0x0);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&stack0xfffffe74,*pVVar13,(this->fields).cameraOffset.y,
                              (MethodInfo *)0x0);
          a_05.z = fVar18;
          a_05.x = (float)(undefined4)uStack_23;
          a_05.y = (float)uStack_23._4_4_;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&stack0xfffffe68,a_05,*pVVar13,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_05,*pVVar13,(MethodInfo *)0x0);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffe5c,this_05,(MethodInfo *)0x0);
          pMVar19 = pMStack_7;
          uStack_11._0_4_ = pVVar13->x;
          uStack_11._4_4_ = pVVar13->y;
          pMStack_8 = (MVWorldObjectClientManager *)pVVar13->z;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                             ((Vector3 *)&puStack_40,(Transform *)pMStack_7,(MethodInfo *)0x0);
          uStack_23._0_4_ = pVVar13->x;
          uStack_23._4_4_ = pVVar13->y;
          uStack_15 = CONCAT44(pVVar13->z,(undefined4)uStack_15);
          if (pMStack_1 == (MVWorldObjectClientManager *)0x0) goto code_?;
          puVar9 = (undefined8 *)
                   func_?(&stack0xfffffe44,pMStack_1,fStack_16,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                  );
          uStack_41._4_4_ = (float)((ulonglong)*puVar9 >> 0x20);
          fVar18 = uStack_41._4_4_;
          a_03.z = uStack_15._4_4_;
          a_03.x = (float)(undefined4)uStack_23;
          a_03.y = (float)uStack_23._4_4_;
          uStack_41 = *puVar9;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&stack0xfffffe38,a_03,fVar18,(MethodInfo *)0x0);
          a_06.z = (float)pMStack_8;
          a_06.x = (float)(undefined4)uStack_11;
          a_06.y = (float)uStack_11._4_4_;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&puStack_42,a_06,*pVVar13,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_05,*pVVar13,(MethodInfo *)0x0);
          AvatarCapture_DrawObject(this,this_05,(Transform *)pMVar19,(MethodInfo *)0x0);
          pCVar20 = (this->fields).renderCam;
          if (pCVar20 == (Camera *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render(pCVar20,(MethodInfo *)0x0);
          fStack_16 = (float)((int)fStack_16 + 1);
        } while ((int)fStack_16 < (int)pOStack_6);
      }
    }
  }
code_?:
  func_?(0);
  pcVar43 = (code *)swi(3);
  (*pcVar43)();
  return;
}


/* Void CapturePlayersInTeam(List`1[ScoreTeamEntry], GameStatCounterType) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CapturePlayersInTeam
               (AvatarCapture *this,List_1_ScoreTeamEntry_ *scoreTeamEntries,
               GameStatCounterType__Enum counterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarCapture___CapturePlayersInTeam_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    *(undefined1 *)&(this_01->fields)._._._._.m_CachedPtr = (undefined1)counterType;
    AvatarCapture_InitializeCamera(this,(MethodInfo *)0x0);
    this_02 = (List_1_UnityEngine_Vector4_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>
                             );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
              );
    index = 0;
    if (scoreTeamEntries != (List_1_ScoreTeamEntry_ *)0x0) {
      while( true ) {
        this_00 = scoreTeamEntries;
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                            scoreTeamEntries,
                            MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__
                           );
        if ((int)pOVar1 <= index) {
          AvatarCapture_CapturePlayerGroup
                    ((AvatarCapture *)0x0,(List_1_List_1_MVPlayer_ *)this_02,(MethodInfo *)0x0);
          return;
        }
        object = scoreTeamEntries;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
          object = scoreTeamEntries;
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_03 == (MVNetworkGame *)0x0) break;
        this_04 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)this_03,(MethodInfo *)0x0);
        scoreTeamEntries =
             (List_1_ScoreTeamEntry_ *)
             MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_;
        pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,index,
                            MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                           );
        if ((pIVar2 == (IEventSystemHandler *)0x0) || (this_04 == (SkyParam *)0x0)) break;
        source = MVTeamManager::MVTeamManager_GetPlayersInTeam
                           ((MVTeamManager *)this_04,(MVTeam__Enum)pIVar2[1].klass,(MethodInfo *)0x0
                           );
        this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_05,(Object *)object,
                   MethodInfo__AvatarCapture___CapturePlayersInTeam_c__AnonStorey0____m__0_MVPlayer_
                   ,MethodInfo__System__Func<MVPlayer,_int>__Func_System__Object__void__);
        source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                              ((IOrderedEnumerable_1_System_Object_ *)source,
                               (Func_2_Object_Int64_ *)this_05,
                               System__Linq__IOrderedEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__OrderBy<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_
                              );
        item = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                         ((IEnumerable_1_UseInteractor_ *)source_00,
                          System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                         );
        if (this_02 == (List_1_UnityEngine_Vector4_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)item,
                   MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__Add_System__Collections__Generic__List<MVPlayer>_
                  );
        index = index + 1;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 CreateTriangleFormation(List`1[UnityEngine.Vector3] ByRef, Vector3, Int32) */

int32_t Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CreateTriangleFormation
                  (AvatarCapture *this,List_1_UnityEngine_Vector3_ **positions,
                  Vector3 formationSpacing,int32_t numberOfPositions,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (ManualResetEvent *)0x0;
  uVar2 = 0;
  func_?(&stack0xfffffff0,0,0,0,0);
  if ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)*positions !=
      (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    item.m_WaitHandle = pMVar1;
    item.m_DelagateCallback = (SendOrPostCallback *)(int)uVar2;
    item.m_DelagateState = (Object *)(int)((ulonglong)uVar2 >> 0x20);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)*positions,item,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    if (1 < numberOfPositions) {
      numberOfPositions =
           AvatarCapture_CreateTriangleFormation_1
                     (this,positions,formationSpacing,numberOfPositions + -1,2,
                      (float)((uint)formationSpacing.y ^ _UNK_?),
                      (float)((uint)formationSpacing.z ^ _UNK_?),(MethodInfo *)0x0);
    }
    return numberOfPositions;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Int32 CreateTriangleFormation(List`1[UnityEngine.Vector3] ByRef, Vector3, Int32, Int32, Single,
   Single) */

int32_t Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CreateTriangleFormation_1
                  (AvatarCapture *this,List_1_UnityEngine_Vector3_ **positions,
                  Vector3 formationSpacing,int32_t positionsRemaining,int32_t unitsThisRow,
                  float targetY,float targetZ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  uStack_2 = 0;
  pMStack_3 = (ManualResetEvent *)0x0;
  if (0 < unitsThisRow) {
    fStack_4 = (float)unitsThisRow * _UNK_? - _UNK_?;
    iVar5 = positionsRemaining;
    do {
      iVar5 = iVar5 + -1;
      func_?(&uStack_2,0,targetY,targetZ,0);
      fVar6 = (this->fields).formationRandomness;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                        ((float)((uint)fVar6 ^ _UNK_?),fVar6,(MethodInfo *)0x0);
      fStack_7 = fStack_4 - (float)iVar1;
      fVar6 = (fVar6 + fStack_7) * formationSpacing.x;
      uStack_2 = CONCAT44(uStack_2._4_4_,fVar6);
      if ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)*positions ==
          (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        func_?(0);
        pcVar8 = (code *)swi(3);
        iVar9 = (*pcVar8)();
        return iVar9;
      }
      item.m_DelagateState = (Object *)uStack_2._4_4_;
      item.m_DelagateCallback = (SendOrPostCallback *)fVar6;
      item.m_WaitHandle = pMStack_3;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)*positions,item,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      if (iVar5 < 1) {
        return unitsThisRow;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < unitsThisRow);
  }
  iVar9 = AvatarCapture_CreateTriangleFormation_1
                    (this,positions,formationSpacing,positionsRemaining - unitsThisRow,
                     unitsThisRow + 1,targetY - formationSpacing.y,targetZ - formationSpacing.z,
                     (MethodInfo *)0x0);
  return iVar9;
}


/* Void DrawObject(Transform, Transform) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_DrawObject
               (AvatarCapture *this,Transform *cameraTransform,Transform *objectTransform,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                    (-0x23,0x23,(MethodInfo *)0x0);
  ppRStack_2 = (Renderer **)(float)iVar1;
  if (cameraTransform != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_4,cameraTransform,(MethodInfo *)0x0);
    uVar5 = pVVar3->x;
    uVar6 = pVVar3->y;
    fVar7 = pVVar3->z;
    VStack_8.y = (float)uVar5;
    VStack_8.z = (float)uVar6;
    if (objectTransform != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_9,objectTransform,(MethodInfo *)0x0);
      VStack_4.y = pVVar3->x;
      VStack_4.z = pVVar3->y;
      fVar10 = pVVar3->z;
      func_?();
      VStack_9.y = 0.0;
      VStack_9.z = 0.0;
      pMStack_11 = (MeshFilter *)0x0;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.y = VStack_8.z;
      a.x = VStack_8.y;
      a.z = fVar7;
      b.z = fVar10;
      b.x = VStack_4.y;
      b.y = VStack_4.z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         ((Vector3 *)&stack0xffffffb4,a,b,(MethodInfo *)0x0);
      uVar12 = pVVar3->x;
      uVar13 = pVVar3->y;
      fVar7 = pVVar3->z;
      VStack_8.y = (float)uVar12;
      VStack_8.z = (float)uVar13;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      euler.z = (float)pMStack_11;
      euler.x = VStack_9.y;
      euler.y = VStack_9.z;
      pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                          ((Quaternion *)&fStack_15,euler,(MethodInfo *)0x0);
      point.y = VStack_8.z;
      point.x = VStack_8.y;
      point.z = fVar7;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         (&VStack_8,*pQVar14,point,(MethodInfo *)0x0);
      b_00.z = fVar10;
      b_00.x = VStack_4.y;
      b_00.y = VStack_4.z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         (&VStack_4,*pVVar3,b_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (cameraTransform,*pVVar3,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&fStack_15,objectTransform,(MethodInfo *)0x0);
      puVar16 = (undefined8 *)func_?();
      VStack_8.z = *(float *)(puVar16 + 1);
      VStack_8.x = (float)*puVar16;
      VStack_8.y = (float)((ulonglong)*puVar16 >> 0x20);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffb4,(MethodInfo *)0x0);
      VStack_4.y = pVVar3->x;
      VStack_4.z = pVVar3->y;
      fVar7 = pVVar3->z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      axis.z = fVar7;
      axis.x = VStack_4.y;
      axis.y = VStack_4.z;
      pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                          ((Quaternion *)&fStack_15,VStack_8.y + _UNK_? + (float)ppRStack_2,
                           axis,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (cameraTransform,*pQVar14,(MethodInfo *)0x0);
      pRVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                Component_1_GetComponentsInChildren_12
                          ((Component_1 *)objectTransform,1,
                           UnityEngine__MeshFilter__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshFilter>_bool_____
                          );
      VStack_4.z = (float)pRVar17;
      cameraTransform = (Transform *)0x0;
      if (pRVar17 != (Renderer__Array *)0x0) {
        ppRStack_2 = pRVar17->vector;
        while( true ) {
          if ((int)pRVar17->max_length <= (int)cameraTransform) {
            return;
          }
          if ((Transform *)pRVar17->max_length <= cameraTransform) break;
          this_00 = (MeshFilter *)*ppRStack_2;
          pMStack_11 = this_00;
          if (this_00 == (MeshFilter *)0x0) goto code_?;
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                              (this_00,(MethodInfo *)0x0);
          pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this_00,(MethodInfo *)0x0);
          if (pGVar18 == (GameObject *)0x0) goto code_?;
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                              (pGVar18,
                               UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                              );
          pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this_00,(MethodInfo *)0x0);
          if (pGVar18 == (GameObject *)0x0) goto code_?;
          iVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                            (pGVar18,(MethodInfo *)0x0);
          bVar19 = LayerUtil::LayerUtil_HasFlags_3(iVar1,2,(MethodInfo *)0x0);
          if (bVar19 == 0) {
            submeshIndex = 0;
            while( true ) {
              if (this_01 == (Mesh *)0x0) goto code_?;
              iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount
                                (this_01,(MethodInfo *)0x0);
              if (iVar1 <= submeshIndex) break;
              if (this_02 == (UseInteractorHandler *)0x0) goto code_?;
              pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                        Renderer_get_sharedMaterials((Renderer *)this_02,(MethodInfo *)0x0);
              if (pMVar20 == (Material__Array *)0x0) goto code_?;
              VStack_8.z = (float)func_?();
              this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pMStack_11,(MethodInfo *)0x0);
              if (this_03 == (Transform *)0x0) goto code_?;
              pMVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localToWorldMatrix
                                  ((Matrix4x4 *)&stack0xffffff30,this_03,(MethodInfo *)0x0);
              fVar7 = pMVar21->m00;
              fVar10 = pMVar21->m10;
              fVar22 = pMVar21->m20;
              fVar23 = pMVar21->m30;
              fVar24 = pMVar21->m01;
              fVar25 = pMVar21->m11;
              fVar26 = pMVar21->m21;
              fVar27 = pMVar21->m31;
              fVar28 = pMVar21->m02;
              fVar29 = pMVar21->m12;
              fVar30 = pMVar21->m22;
              fVar31 = pMVar21->m32;
              fStack_15 = pMVar21->m03;
              fStack_32 = pMVar21->m13;
              puStack_33 = (undefined *)pMVar21->m23;
              fVar34 = pMVar21->m33;
              iStack_35 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                    (StringLiteral_UXElementSecondary,(MethodInfo *)0x0);
              VStack_9.z = (float)(this->fields).renderCam;
              if ((((uint)(TypeInfo__UnityEngine__Graphics->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Graphics->_1).cctor_started == 0)) {
                func_?();
              }
              matrix.m10 = fVar10;
              matrix.m00 = fVar7;
              matrix.m20 = fVar22;
              matrix.m30 = fVar23;
              matrix.m01 = fVar24;
              matrix.m11 = fVar25;
              matrix.m21 = fVar26;
              matrix.m31 = fVar27;
              matrix.m02 = fVar28;
              matrix.m12 = fVar29;
              matrix.m22 = fVar30;
              matrix.m32 = fVar31;
              matrix.m03 = fStack_15;
              matrix.m13 = fStack_32;
              matrix.m23 = (float)puStack_33;
              matrix.m33 = fVar34;
              UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_2
                        (this_01,matrix,(Material *)VStack_8.z,iStack_35,(Camera *)VStack_9.z,
                         submeshIndex,(MethodInfo *)0x0);
              submeshIndex = submeshIndex + 1;
            }
          }
          cameraTransform = (Transform *)((int)&cameraTransform->klass + 1);
          ppRStack_2 = ppRStack_2 + 1;
          pRVar17 = (Renderer__Array *)VStack_4.z;
        }
        func_?();
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Void InitializeCamera() */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_InitializeCamera
               (AvatarCapture *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar1->fields).AvatarCommandsPlayMode,
     this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    AvatarEnabledChangeHandler::AvatarEnabledChangeHandler_OnDisable
              ((AvatarEnabledChangeHandler *)this_00,(MethodInfo *)0x0);
    pCVar2 = (this->fields).renderCam;
    if (pCVar2 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                (pCVar2,CameraClearFlags__Enum_Depth,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary_1
                        (0x400,0x200,0x10,RenderTextureFormat__Enum_ARGB32,
                         RenderTextureReadWrite__Enum_Default,1,(MethodInfo *)0x0);
      value_00 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_get_active
                           ((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                (value,(MethodInfo *)0x0);
      pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_zero
                         (&RStack_4,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Clear(1,1,(Color)*pRVar3,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                (value_00,(MethodInfo *)0x0);
      if (value != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode
                  ((Texture *)value,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                  ((Texture *)value,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
        pCVar2 = (this->fields).renderCam;
        if (pCVar2 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar2,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_OnDestroy
               (AvatarCapture *this,MethodInfo *method)

{
  pCVar1 = (this->fields).renderCam;
  if (pCVar1 != (Camera *)0x0) {
    pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                       (pCVar1,(MethodInfo *)0x0);
    if (pRVar2 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_DiscardContents_1
                (pRVar2,(MethodInfo *)0x0);
      pCVar1 = (this->fields).renderCam;
      if (pCVar1 != (Camera *)0x0) {
        pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                           (pCVar1,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
                  (pRVar2,(MethodInfo *)0x0);
        pCVar1 = (this->fields).renderCam;
        if (pCVar1 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Vector3 RotatePointAroundPivot(Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarCapture::AvatarCapture_RotatePointAroundPivot
                    (Vector3 *__return_storage_ptr__,Vector3 point,Vector3 pivot,Vector3 angles,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  fVar1 = pivot.z;
  b_00.y = pivot.y;
  b_00.x = pivot.x;
  a.y = point.y;
  a.x = point.x;
  a.z = point.z;
  b_00.z = pivot.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)&stack0xfffffff0,a,b_00,(MethodInfo *)0x0);
  uVar3 = pVVar2->x;
  uVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  point.y = (float)uVar3;
  point.z = (float)uVar4;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                     ((Quaternion *)&puStack_7,angles,(MethodInfo *)0x0);
  fVar8 = point.y;
  pivot.x = 0.0;
  point.x = point.y;
  point.y = point.z;
  pVVar2 = (Vector3 *)pQVar6->w;
  point_00.y = point.z;
  point_00.x = fVar8;
  point_00.z = fVar5;
  point.z = fVar5;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&point,*pQVar6,point_00,(MethodInfo *)0x0);
  fVar5 = pivot.y;
  fStack10 = pivot.y;
  fStack11 = fVar1;
  pivot.z = (float)&pivot;
  pivot.y = (float)&UNK_?;
  b.y = fVar5;
  b.x = pivot.x;
  b.z = fVar1;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)pivot.z,*pVVar9,b,(MethodInfo *)0x0);
  fVar1 = pVVar9->y;
  fVar5 = pVVar9->z;
  pVVar2->x = pVVar9->x;
  pVVar2->y = fVar1;
  pVVar2->z = fVar5;
  return pVVar2;
}


/* AvatarCapture() */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture__ctor(AvatarCapture *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&uStack_2,0x40000000,0x3f19999a,0x3f99999a,0);
  (this->fields).formationSpacing.x = (float)(undefined4)uStack_2;
  (this->fields).formationSpacing.y = (float)uStack_2._4_4_;
  (this->fields).formationSpacing.z = fStack_1;
  (this->fields).formationRandomness = 1.0;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

