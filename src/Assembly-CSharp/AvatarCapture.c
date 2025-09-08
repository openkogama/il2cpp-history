
/* Vector3 CalculateTieOffset(Int32, Int32) */

Vector3 * Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CalculateTieOffset
                    (Vector3 *__return_storage_ptr__,AvatarCapture *this,int32_t currentWinner,
                    int32_t amountOfWinners,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  __return_storage_ptr__->x = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = (float)amountOfWinners * _UNK_?;
  if (((amountOfWinners & 1U) == 0) || (currentWinner != 1)) {
    fVar1 = (float)(amountOfWinners + 2) * _UNK_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    cVar2 = cRam_?;
    fVar3 = (float10)func_?((double)fVar1);
    fVar1 = ((float)currentWinner - _UNK_?) * _UNK_?;
    if (cVar2 == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    fVar4 = (float10)func_?((double)fVar1);
    fVar1 = _UNK_?;
    fVar5 = ((float)(int)fVar4 + _UNK_?) *
            (_UNK_? / (float)(int)fVar3) * _UNK_?;
    __return_storage_ptr__->x = fVar5;
    fVar1 = ((float)currentWinner - fVar1) * _UNK_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    fVar3 = (float10)func_?((double)fVar1);
    fVar5 = (float)(int)fVar3 + _UNK_? + fVar5;
    __return_storage_ptr__->x = fVar5;
    if ((currentWinner & 1U) == 0) {
      __return_storage_ptr__->x = fVar5 * _UNK_?;
    }
  }
  return __return_storage_ptr__;
}


/* Void CaptureAllPlayersInGame() */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CaptureAllPlayersInGame
               (AvatarCapture *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__Add_System__Collections__Generic__List<MVPlayer>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>
                   );
    cRam_? = '\x01';
  }
  AvatarCapture_InitializeCamera(this,(MethodInfo *)0x0);
  sortedList = (List_1_List_1_MVPlayer_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>
                              );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)sortedList,
             MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
            );
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_01 = (AvatarCapture *)
              MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    item = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                     ((IEnumerable_1_System_Object_ *)this_01,
                      System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                     );
    if (sortedList != (List_1_List_1_MVPlayer_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)sortedList,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__Add_System__Collections__Generic__List<MVPlayer>_
                );
      AvatarCapture_CapturePlayerGroup(this_01,sortedList,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CapturePlayer(List`1[MVPlayer]) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CapturePlayer
               (AvatarCapture *this,List_1_MVPlayer_ *players,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  AvatarCapture_InitializeCamera(this,(MethodInfo *)0x0);
  if (players != (List_1_MVPlayer_ *)0x0) {
    iVar1 = (players->fields)._size;
    this_02 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
              func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    pLStack_2 = this_02;
    AvatarCapture_CreateTriangleFormation
              (this,(List_1_UnityEngine_Vector3_ **)&pLStack_2,(this->fields).formationSpacing,iVar1
               ,(MethodInfo *)0x0);
    if (pLStack_2 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__Reverse
                (pLStack_2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__);
      index = 0;
      while( true ) {
        if ((players->fields)._size <= index) {
          return;
        }
        iStack_3 = index;
        pOStack_4 = (Object__Class *)
                     MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        this_03 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             players,index,
                             MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_
                            );
        if (this_03 == (RegexCharClass_SingleRange)0x0) break;
        iVar1 = MVPlayer::MVPlayer_get_WoId((MVPlayer *)this_03,(MethodInfo *)0x0);
        if (pOStack_4 == (Object__Class *)0x0) break;
        pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           ((MVWorldObjectClientManager *)pOStack_4,iVar1,(MethodInfo *)0x0);
        if (pMVar5 == (MVWorldObject *)0x0) break;
        this_00 = (Object__Class *)pMVar5[1].fields.ownerActorNr;
        this_01 = (this->fields).renderCam;
        pOStack_4 = this_00;
        if (this_01 == (Camera *)0x0) break;
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_01,(MethodInfo *)0x0);
        if (this_00 == (Object__Class *)0x0) break;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_7,(Transform *)this_00,(MethodInfo *)0x0);
        if (this_04 == (Transform *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_04,*pVVar6,(MethodInfo *)0x0);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_8,this_04,(MethodInfo *)0x0);
        uStack_9._0_4_ = pVVar6->x;
        uStack_9._4_4_ = pVVar6->y;
        fStack_10 = pVVar6->z;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                           (&VStack_11,(Transform *)this_00,(MethodInfo *)0x0);
        uStack_12._0_4_ = pVVar6->x;
        uStack_12._4_4_ = pVVar6->y;
        fStack_13 = pVVar6->z;
        fVar14 = (this->fields).cameraOffset.x;
        fStack_15 = fStack_10 + fStack_13 * fVar14;
        value.y = uStack_9._4_4_ + (float)uStack_12._4_4_ * fVar14;
        value.x = (float)uStack_9 + (float)(undefined4)uStack_12 * fVar14;
        value.z = fStack_15;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_04,value,(MethodInfo *)0x0);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_16,this_04,(MethodInfo *)0x0);
        uStack_17._0_4_ = pVVar6->x;
        uStack_17._4_4_ = pVVar6->y;
        fStack_18 = pVVar6->z;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                           (&VStack_19,(Transform *)this_00,(MethodInfo *)0x0);
        uStack_20._0_4_ = pVVar6->x;
        uStack_20._4_4_ = pVVar6->y;
        fStack_21 = pVVar6->z;
        if (pLStack_2 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) break;
        pVVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           (&VStack_23,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pLStack_2,
                            iStack_3,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        uStack_24._0_4_ = pVVar22->alias;
        uStack_24._4_4_ = pVVar22->path;
        fVar14 = (float)((undefined4)uStack_24 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fStack_25 = fStack_18 + fStack_21 * fVar14;
        value_00.y = uStack_17._4_4_ + uStack_20._4_4_ * fVar14;
        value_00.x = (float)uStack_17 + (float)uStack_20 * fVar14;
        value_00.z = fStack_25;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_04,value_00,(MethodInfo *)0x0);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_26,this_04,(MethodInfo *)0x0);
        uStack_27._0_4_ = pVVar6->x;
        uStack_27._4_4_ = pVVar6->y;
        fStack_28 = pVVar6->z;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           (&VStack_29,(Transform *)this_00,(MethodInfo *)0x0);
        uStack_30._0_4_ = pVVar6->x;
        uStack_30._4_4_ = pVVar6->y;
        fStack_31 = pVVar6->z;
        fVar14 = (float)((uint)(this->fields).cameraOffset.z ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fStack_32 = fStack_28 + fStack_31 * fVar14;
        value_01.y = uStack_27._4_4_ + (float)uStack_30._4_4_ * fVar14;
        value_01.x = (float)uStack_27 + (float)(undefined4)uStack_30 * fVar14;
        value_01.z = fStack_32;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_04,value_01,(MethodInfo *)0x0);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_33,this_04,(MethodInfo *)0x0);
        uStack_34._0_4_ = pVVar6->x;
        uStack_34._4_4_ = pVVar6->y;
        fStack_35 = pVVar6->z;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           (&VStack_36,(Transform *)this_00,(MethodInfo *)0x0);
        uStack_37._0_4_ = pVVar6->x;
        uStack_37._4_4_ = pVVar6->y;
        fStack_38 = pVVar6->z;
        if (pLStack_2 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) break;
        pVVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           (&VStack_39,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pLStack_2,
                            iStack_3,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        uStack_40._0_4_ = pVVar22->alias;
        uStack_40._4_4_ = pVVar22->path;
        pVStack_41 = pVVar22->asset;
        fVar14 = (float)((uint)pVStack_41 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fStack_42 = fStack_35 + fStack_38 * fVar14;
        value_02.y = uStack_34._4_4_ + uStack_37._4_4_ * fVar14;
        value_02.x = (float)uStack_34 + (float)uStack_37 * fVar14;
        value_02.z = fStack_42;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_04,value_02,(MethodInfo *)0x0);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_43,this_04,(MethodInfo *)0x0);
        uStack_44._0_4_ = pVVar6->x;
        uStack_44._4_4_ = pVVar6->y;
        fStack_45 = pVVar6->z;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                           (&VStack_46,(Transform *)this_00,(MethodInfo *)0x0);
        uStack_47._0_4_ = pVVar6->x;
        uStack_47._4_4_ = pVVar6->y;
        fStack_48 = pVVar6->z;
        fVar14 = (this->fields).cameraOffset.y;
        fStack_49 = fStack_45 + fStack_48 * fVar14;
        value_03.y = uStack_44._4_4_ + (float)uStack_47._4_4_ * fVar14;
        value_03.x = (float)uStack_44 + (float)(undefined4)uStack_47 * fVar14;
        value_03.z = fStack_49;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_04,value_03,(MethodInfo *)0x0);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xfffffe4c,this_04,(MethodInfo *)0x0);
        uStack_50._0_4_ = pVVar6->x;
        uStack_50._4_4_ = pVVar6->y;
        fStack_51 = pVVar6->z;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                           ((Vector3 *)&stack0xfffffe40,(Transform *)this_00,(MethodInfo *)0x0);
        uStack_52._0_4_ = pVVar6->x;
        uStack_52._4_4_ = pVVar6->y;
        fStack_53 = pVVar6->z;
        if (pLStack_2 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) break;
        pVVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           ((VisualTreeAsset_UsingEntry *)&stack0xfffffe34,
                            (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pLStack_2,
                            iStack_3,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                           );
        uStack_54._0_4_ = pVVar22->alias;
        uStack_54._4_4_ = pVVar22->path;
        fStack_55 = fStack_51 + fStack_53 * (float)uStack_54._4_4_;
        value_04.y = uStack_50._4_4_ + uStack_52._4_4_ * (float)uStack_54._4_4_;
        value_04.x = (float)uStack_50 + (float)uStack_52 * (float)uStack_54._4_4_;
        value_04.z = fStack_55;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_04,value_04,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__AvatarCapture___DrawAvatarRoutine_d__12;
        value_05 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value_05,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        value_05[1].klass = (Object__Class *)0x0;
        value_05[2].klass = (Object__Class *)this;
        func_?();
        value_05[2].monitor = (MonitorData *)this_04;
        func_?();
        value_05[3].klass = pOStack_4;
        func_?();
        Coroutines::Coroutines_Start((IEnumerator *)value_05,(MethodInfo *)0x0);
        index = iStack_3 + 1;
      }
    }
  }
  func_?();
  pcVar56 = (code *)swi(3);
  (*pcVar56)();
  return;
}


/* Void CapturePlayerGroup(List`1[List`1[MVPlayer]]) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CapturePlayerGroup
               (AvatarCapture *this,List_1_List_1_MVPlayer_ *sortedList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  pLStack_1 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  iStack_2 = 0;
  if (sortedList != (List_1_List_1_MVPlayer_ *)0x0) {
    while( true ) {
      iVar3 = iStack_2;
      if ((sortedList->fields)._size <= iStack_2) {
        return;
      }
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         sortedList,iStack_2,
                         MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_
                        );
      if (RVar4 == (RegexCharClass_SingleRange)0x0) break;
      iStack_5 = *(int32_t *)((int)RVar4 + 0xc);
      apLStack_6[0] = TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>;
      pLVar7 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)func_?();
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar7,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      pLStack_1 = pLVar7;
      AvatarCapture_CreateTriangleFormation
                (this,(List_1_UnityEngine_Vector3_ **)&pLStack_1,(this->fields).formationSpacing,
                 iStack_5,(MethodInfo *)0x0);
      if (pLStack_1 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__Reverse
                (pLStack_1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__);
      iStack_8 = iVar3 + 1;
      iVar3 = 0;
      iStack_9 = (sortedList->fields)._size;
      while( true ) {
        pLVar7 = pLStack_1;
        if (pLStack_1 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
        if ((pLStack_1->fields)._size <= iVar3) break;
        puVar10 = (undefined8 *)
                 func_?(auStack_11,pLStack_1,iVar3,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                );
        uStack_12 = *puVar10;
        fStack_13 = *(float *)(puVar10 + 1);
        pVVar14 = AvatarCapture_CalculateTieOffset
                           (&VStack_15,this,iStack_8,iStack_9,(MethodInfo *)0x0);
        uStack_16._0_4_ = pVVar14->x;
        uStack_16._4_4_ = pVVar14->y;
        fStack_17 = pVVar14->z;
        fStack_18 = (float)(undefined4)uStack_16 + (float)uStack_12;
        fStack_19 = (float)uStack_16._4_4_ + uStack_12._4_4_;
        fStack_20 = fStack_17 + fStack_13;
        if (pLVar7 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
        value_05.FirstAxisSign = (int32_t)fStack_19;
        value_05.Quadrant = (int32_t)fStack_18;
        value_05.SecondAxisSign = (int32_t)fStack_20;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                  (pLVar7,iVar3,value_05,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                  );
        iVar3 = iVar3 + 1;
      }
      iStack_9 = 0;
      if (0 < iStack_5) {
        do {
          iVar3 = iStack_9;
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             sortedList,iStack_2,
                             MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_
                            );
          if ((((RVar4 == (RegexCharClass_SingleRange)0x0) ||
               (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)RVar4,iVar3,
                                   MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_
                                  ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
              (id = MVPlayer::MVPlayer_get_WoId((MVPlayer *)RVar4,(MethodInfo *)0x0),
              this_02 == (MVWorldObjectClientManager *)0x0)) ||
             (pMVar21 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (this_02,id,(MethodInfo *)0x0), pMVar21 == (MVWorldObject *)0x0))
          goto code_?;
          this_00 = (Transform *)pMVar21[1].fields.ownerActorNr;
          this_01 = (this->fields).renderCam;
          if (((this_01 == (Camera *)0x0) ||
              (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this_01,(MethodInfo *)0x0),
              this_00 == (Transform *)0x0)) ||
             (pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_22,this_00,(MethodInfo *)0x0),
             this_03 == (Transform *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_03,*pVVar14,(MethodInfo *)0x0);
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_23,this_03,(MethodInfo *)0x0);
          uStack_24._0_4_ = pVVar14->x;
          uStack_24._4_4_ = pVVar14->y;
          fStack_25 = pVVar14->z;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                             (&VStack_26,this_00,(MethodInfo *)0x0);
          uStack_27._0_4_ = pVVar14->x;
          uStack_27._4_4_ = pVVar14->y;
          fStack_28 = pVVar14->z;
          fVar29 = (this->fields).cameraOffset.x;
          fStack_30 = fStack_25 + fStack_28 * fVar29;
          value_02.y = uStack_24._4_4_ + (float)uStack_27._4_4_ * fVar29;
          value_02.x = (float)uStack_24 + (float)(undefined4)uStack_27 * fVar29;
          value_02.z = fStack_30;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_03,value_02,(MethodInfo *)0x0);
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_31,this_03,(MethodInfo *)0x0);
          uStack_32._0_4_ = pVVar14->x;
          uStack_32._4_4_ = pVVar14->y;
          fStack_33 = pVVar14->z;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                             (&VStack_34,this_00,(MethodInfo *)0x0);
          uStack_35._0_4_ = pVVar14->x;
          uStack_35._4_4_ = pVVar14->y;
          fStack_36 = pVVar14->z;
          if (pLStack_1 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0)
          goto code_?;
          puVar37 = (uint *)func_?(auStack_38,pLStack_1,iStack_9,
                                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                          );
          fVar29 = (float)(*puVar37 ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          fStack_39 = fStack_33 + fStack_36 * fVar29;
          value_00.y = uStack_32._4_4_ + uStack_35._4_4_ * fVar29;
          value_00.x = (float)uStack_32 + (float)uStack_35 * fVar29;
          value_00.z = fStack_39;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_03,value_00,(MethodInfo *)0x0);
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_40,this_03,(MethodInfo *)0x0);
          uStack_41._0_4_ = pVVar14->x;
          uStack_41._4_4_ = pVVar14->y;
          fStack_42 = pVVar14->z;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             (&VStack_43,this_00,(MethodInfo *)0x0);
          uStack_44._0_4_ = pVVar14->x;
          uStack_44._4_4_ = pVVar14->y;
          fStack_45 = pVVar14->z;
          fVar29 = (float)((uint)(this->fields).cameraOffset.z ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          fStack_46 = fStack_42 + fStack_45 * fVar29;
          value_03.y = uStack_41._4_4_ + (float)uStack_44._4_4_ * fVar29;
          value_03.x = (float)uStack_41 + (float)(undefined4)uStack_44 * fVar29;
          value_03.z = fStack_46;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_03,value_03,(MethodInfo *)0x0);
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_47,this_03,(MethodInfo *)0x0);
          uStack_48._0_4_ = pVVar14->x;
          uStack_48._4_4_ = pVVar14->y;
          fStack_49 = pVVar14->z;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             (&VStack_50,this_00,(MethodInfo *)0x0);
          uStack_51._0_4_ = pVVar14->x;
          uStack_51._4_4_ = pVVar14->y;
          fStack_52 = pVVar14->z;
          if (pLStack_1 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0)
          goto code_?;
          iVar3 = func_?(auStack_53,pLStack_1,iStack_9,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                 );
          fVar29 = (float)(*(uint *)(iVar3 + 8) ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          fStack_54 = fStack_49 + fStack_52 * fVar29;
          value_01.y = uStack_48._4_4_ + uStack_51._4_4_ * fVar29;
          value_01.x = (float)uStack_48 + (float)uStack_51 * fVar29;
          value_01.z = fStack_54;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_03,value_01,(MethodInfo *)0x0);
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_55,this_03,(MethodInfo *)0x0);
          uStack_56._0_4_ = pVVar14->x;
          uStack_56._4_4_ = pVVar14->y;
          fStack_57 = pVVar14->z;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                             (&VStack_58,this_00,(MethodInfo *)0x0);
          uStack_59._0_4_ = pVVar14->x;
          uStack_59._4_4_ = pVVar14->y;
          fStack_60 = pVVar14->z;
          fVar29 = (this->fields).cameraOffset.y;
          fStack_61 = fStack_57 + fStack_60 * fVar29;
          value_04.y = uStack_56._4_4_ + (float)uStack_59._4_4_ * fVar29;
          value_04.x = (float)uStack_56 + (float)(undefined4)uStack_59 * fVar29;
          value_04.z = fStack_61;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_03,value_04,(MethodInfo *)0x0);
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_62,this_03,(MethodInfo *)0x0);
          uStack_63._0_4_ = pVVar14->x;
          uStack_63._4_4_ = pVVar14->y;
          fStack_64 = pVVar14->z;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                             (&VStack_65,this_00,(MethodInfo *)0x0);
          uStack_66._0_4_ = pVVar14->x;
          uStack_66._4_4_ = pVVar14->y;
          fStack_67 = pVVar14->z;
          if (pLStack_1 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0)
          goto code_?;
          iVar3 = func_?(apLStack_6,pLStack_1,iStack_9,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                 );
          fVar29 = *(float *)(iVar3 + 4);
          fStack_68 = fStack_64 + fStack_67 * fVar29;
          value.y = uStack_63._4_4_ + uStack_66._4_4_ * fVar29;
          value.x = (float)uStack_63 + (float)uStack_66 * fVar29;
          value.z = fStack_68;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_03,value,(MethodInfo *)0x0);
          coroutine = AvatarCapture_DrawAvatarRoutine(this,this_03,this_00,(MethodInfo *)0x0);
          Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
          iStack_9 = iStack_9 + 1;
        } while (iStack_9 < iStack_5);
      }
      iStack_2 = iStack_2 + 1;
    }
  }
code_?:
  func_?();
  pcVar69 = (code *)swi(3);
  (*pcVar69)();
  return;
}


/* Void CapturePlayersInTeam(List`1[ScoreTeamEntry], GameStatCounterType) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CapturePlayersInTeam
               (AvatarCapture *this,List_1_ScoreTeamEntry_ *scoreTeamEntries,
               GameStatCounterType__Enum counterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Linq__IOrderedEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__OrderBy<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_
                   );
    func_?(&
                    System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                   );
    func_?(&TypeInfo__System__Func<MVPlayer,_int>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__Add_System__Collections__Generic__List<MVPlayer>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_);
    func_?(&
                    TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>
                   );
    func_?(&
                    MethodInfo__AvatarCapture____c__DisplayClass8_0___CapturePlayersInTeam_b__0_MVPlayer_
                   );
    func_?(&TypeInfo__AvatarCapture____c__DisplayClass8_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarCapture____c__DisplayClass8_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    *(undefined1 *)&value[1].klass = (undefined1)counterType;
    AvatarCapture_InitializeCamera(this,(MethodInfo *)0x0);
    sortedList = (List_1_List_1_MVPlayer_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>
                                );
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)sortedList,
               MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
              );
    index = 0;
    if (scoreTeamEntries != (List_1_ScoreTeamEntry_ *)0x0) {
      while( true ) {
        if ((scoreTeamEntries->fields)._size <= index) {
          AvatarCapture_CapturePlayerGroup(this,sortedList,(MethodInfo *)0x0);
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        this = (AvatarCapture *)(pMVar1->fields).teamManager;
        RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           scoreTeamEntries,index,
                           MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                          );
        if ((RVar2 == (RegexCharClass_SingleRange)0x0) || (this == (AvatarCapture *)0x0)) break;
        team = *(List_1_ScoreTeamEntry_ **)((int)RVar2 + 8);
        sortedList = (List_1_List_1_MVPlayer_ *)scoreTeamEntries;
        source = MVTeamManager::MVTeamManager_GetPlayersInTeam
                           ((MVTeamManager *)this,(MVTeam__Enum)team,(MethodInfo *)0x0);
        this_00 = (Func_2_Object_Int32_ *)value[1].monitor;
        scoreTeamEntries = team;
        if (this_00 == (Func_2_Object_Int32_ *)0x0) {
          this_00 = (Func_2_Object_Int32_ *)func_?();
          this = (AvatarCapture *)&UNK_?;
          Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType]::
          ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    ((ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                     this_00,value,
                     MethodInfo__AvatarCapture____c__DisplayClass8_0___CapturePlayersInTeam_b__0_MVPlayer_
                     ,(MethodInfo *)0x0);
          value[1].monitor = (MonitorData *)this_00;
          func_?();
          source = (List_1_MVPlayer_ *)&UNK_?;
          scoreTeamEntries = (List_1_ScoreTeamEntry_ *)this_00;
        }
        source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                              ((IEnumerable_1_System_Object_ *)source,this_00,
                               System__Linq__IOrderedEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__OrderBy<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_
                              );
        item = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                         ((IEnumerable_1_System_Object_ *)source_00,
                          System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                         );
        if (sortedList == (List_1_List_1_MVPlayer_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)sortedList,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__Add_System__Collections__Generic__List<MVPlayer>_
                  );
        index = index + 1;
      }
    }
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    cRam_? = '\x01';
  }
  if (*positions != (List_1_UnityEngine_Vector3_ *)0x0) {
    func_?(*positions,0,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    if (1 < numberOfPositions) {
      numberOfPositions =
           AvatarCapture_CreateTriangleFormation_1
                     (this,positions,formationSpacing,numberOfPositions + -1,2,
                      (float)((uint)formationSpacing.y ^
                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                             ),(float)((uint)formationSpacing.z ^
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      ),(MethodInfo *)0x0);
    }
    return numberOfPositions;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* Int32 CreateTriangleFormation(List`1[UnityEngine.Vector3] ByRef, Vector3, Int32, Int32, Single,
   Single) */

int32_t Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CreateTriangleFormation_1
                  (AvatarCapture *this,List_1_UnityEngine_Vector3_ **positions,
                  Vector3 formationSpacing,int32_t positionsRemaining,int32_t unitsThisRow,
                  float targetY,float targetZ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    cRam_? = '\x01';
  }
  iVar1 = 0;
  if (0 < unitsThisRow) {
    fVar2 = (float)unitsThisRow * _UNK_? - _UNK_?;
    iVar3 = positionsRemaining;
    fVar4 = targetY;
    fVar5 = targetZ;
    do {
      iVar3 = iVar3 + -1;
      maxInclusive = (this->fields).formationRandomness;
      UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                ((float)((uint)maxInclusive ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field),
                 maxInclusive,(MethodInfo *)0x0);
      if (*positions == (List_1_UnityEngine_Vector3_ *)0x0) {
        func_?(fVar4,fVar5,fVar2 - (float)iVar1);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      func_?(*positions,
                      CONCAT44(fVar4,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                              ),fVar5);
      if (iVar3 < 1) {
        return unitsThisRow;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < unitsThisRow);
  }
  iVar7 = AvatarCapture_CreateTriangleFormation_1
                    (this,positions,formationSpacing,positionsRemaining - unitsThisRow,
                     unitsThisRow + 1,targetY - formationSpacing.y,targetZ - formationSpacing.z,
                     (MethodInfo *)0x0);
  return iVar7;
}


/* IEnumerator DrawAvatarRoutine(Transform, Transform) */

IEnumerator *
Assembly-CSharp.dll::AvatarCapture::AvatarCapture_DrawAvatarRoutine
          (AvatarCapture *this,Transform *cameraTransform,Transform *objectTransform,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarCapture___DrawAvatarRoutine_d__12);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarCapture___DrawAvatarRoutine_d__12;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)cameraTransform;
  func_?(&value[2].monitor,cameraTransform);
  value[3].klass = (Object__Class *)objectTransform;
  func_?(value + 3,objectTransform);
  return (IEnumerator *)value;
}


/* Void DrawObject(Transform, Transform) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_DrawObject
               (AvatarCapture *this,Transform *cameraTransform,Transform *objectTransform,
               MethodInfo *method)

{
  auVar1._0_40_ = in_stack_2._0_40_;
  auVar1._40_4_ = unaff_EBX;
  auVar3._0_28_ = in_stack_2._0_28_;
  auVar3._28_4_ = unaff_EBP;
  auVar3._36_8_ = auVar1._36_8_;
  auVar3._32_4_ = unaff_retaddr;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshFilter>_bool_____
                   );
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                   );
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&StringLiteral_UXElementSecondary);
    cRam_? = '\x01';
  }
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                     (-0x23,0x23,(MethodInfo *)0x0);
  auVar5._28_16_ = auVar3._28_16_;
  auVar5._0_24_ = auVar3._0_24_;
  auVar5._24_4_ = (float)iVar4;
  if (cameraTransform != (Transform *)0x0) {
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd8,cameraTransform,(MethodInfo *)0x0);
    fVar7 = pVVar6->x;
    fVar8 = pVVar6->y;
    fVar9 = pVVar6->z;
    if (objectTransform != (Transform *)0x0) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffb0,objectTransform,(MethodInfo *)0x0);
      uVar10._0_4_ = pVVar6->x;
      uVar10._4_4_ = pVVar6->y;
      fVar11 = pVVar6->z;
      auVar12._16_28_ = auVar5._16_28_;
      auVar12._0_8_ = auVar5._0_8_;
      auVar12._8_8_ = uVar10;
      fVar7 = fVar7 - (float)(undefined4)uVar10;
      auVar13._4_40_ = auVar12._4_40_;
      auVar13._0_4_ = fVar11;
      auVar14._0_16_ = auVar13._0_16_;
      auVar14._16_4_ = fVar11;
      auVar14._24_20_ = auVar5._24_20_;
      auVar14._20_4_ = fVar8 - (float)uVar10._4_4_;
      fVar9 = fVar9 - fVar11;
      auVar15._4_8_ = 0;
      auVar15._0_4_ = auVar5._24_4_ * _UNK_?;
      pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffc8,(Vector3)(auVar15 << 0x20),
                           (MethodInfo *)0x0);
      point.y = (float)auVar14._20_4_;
      point.x = fVar7;
      point.z = fVar9;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffb0,*pQVar16,point,(MethodInfo *)0x0);
      uVar17 = pVVar6->x;
      uVar18 = pVVar6->y;
      auVar19._4_40_ = auVar14._4_40_;
      auVar19._0_4_ = pVVar6->z;
      fVar7 = auVar14._16_4_ + pVVar6->z;
      auVar20._16_28_ = auVar14._16_28_;
      auVar20._0_12_ = auVar19._0_12_;
      auVar20._12_4_ = fVar7;
      value.y = auVar14._12_4_ + (float)uVar18;
      value.x = auVar14._8_4_ + (float)uVar17;
      value.z = fVar7;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (cameraTransform,value,(MethodInfo *)0x0);
      pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffffb0,objectTransform,(MethodInfo *)0x0);
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_ToEulerRad
                          ((Vector3 *)&stack0xffffffb0,*pQVar16,(MethodInfo *)0x0);
      uVar21._0_4_ = pVVar6->x;
      uVar21._4_4_ = pVVar6->y;
      auVar22._0_8_ = auVar20._0_8_;
      auVar22._8_8_ = uVar21;
      auVar23._20_24_ = auVar20._20_24_;
      auVar23._16_4_ = pVVar6->z;
      auVar23._0_16_ = auVar22;
      fVar7 = pVVar6->z * _UNK_?;
      auVar24._16_28_ = auVar23._16_28_;
      auVar24._0_12_ = auVar22._0_12_;
      auVar24._12_4_ = fVar7;
      euler.y = (float)uVar21._4_4_ * _UNK_?;
      euler.x = (float)(undefined4)uVar21 * _UNK_?;
      euler.z = fVar7;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_MakePositive
                          ((Vector3 *)&stack0xffffffb0,euler,(MethodInfo *)0x0);
      uVar25 = pVVar6->x;
      uVar26 = pVVar6->y;
      auVar27._12_4_ = uVar26;
      auVar27._8_4_ = uVar25;
      auVar27._0_8_ = auVar24._0_8_;
      auVar28._20_24_ = auVar24._20_24_;
      auVar28._16_4_ = pVVar6->z;
      auVar28._0_16_ = auVar27;
      if (cRam_? == '\0') {
        auVar29._16_4_ = &TypeInfo__UnityEngine__Vector3;
        auVar29._0_16_ = auVar27;
        auVar29._20_24_ = auVar28._20_24_;
        auVar28._16_28_ = auVar29._16_28_;
        auVar28._0_12_ = auVar27._0_12_;
        auVar28._12_4_ = &UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      auVar30._20_24_ = auVar28._20_24_;
      auVar30._0_16_ = auVar28._0_16_;
      auVar30._16_4_ = 0;
      pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar32 = (pVVar31->upVector).x;
      uVar33 = (pVVar31->upVector).y;
      auVar34._4_4_ = uVar33;
      auVar34._0_4_ = uVar32;
      auVar34._8_32_ = auVar30._12_32_;
      auVar35._0_12_ = auVar34._0_12_ << 0x20;
      auVar36._16_28_ = auVar30._16_28_;
      auVar35._12_4_ = (pVVar31->upVector).z;
      auVar36._0_16_ = auVar35;
      fVar7 = auVar28._12_4_ + _UNK_? + auVar28._24_4_;
      auVar37._4_40_ = auVar36._4_40_;
      auVar37._0_4_ = fVar7;
      pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                          ((Quaternion *)&stack0xffffffb0,fVar7,auVar35._4_12_,(MethodInfo *)0x0);
      auVar38._0_20_ = auVar37._0_20_;
      auVar38._20_4_ = cameraTransform;
      auVar38._24_4_ = pQVar16->x;
      auVar38._28_4_ = pQVar16->y;
      auVar38._32_4_ = pQVar16->z;
      auVar38._36_4_ = pQVar16->w;
      auVar39._0_16_ = auVar37._0_16_;
      auVar39._16_4_ = &UNK_?;
      auVar39._20_20_ = auVar38._20_20_;
      auVar39._40_4_ = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (cameraTransform,auVar38._24_16_,(MethodInfo *)0x0);
      auVar40._0_36_ = auVar39._0_36_;
      auVar40._36_4_ = 1;
      auVar40._40_4_ =
           UnityEngine__MeshFilter__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshFilter>_bool_____
      ;
      auVar41._36_8_ = auVar40._36_8_;
      auVar41._0_32_ = auVar39._0_32_;
      auVar41._32_4_ = objectTransform;
      auVar42._32_12_ = auVar41._32_12_;
      auVar42._0_28_ = auVar39._0_28_;
      auVar42._28_4_ = &UNK_?;
      pOVar43 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                Component_GetComponentsInChildren_2
                          ((Component *)objectTransform,1,
                           UnityEngine__MeshFilter__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshFilter>_bool_____
                          );
      uVar44 = 0;
      if (pOVar43 != (Object__Array *)0x0) {
        ppOVar45 = pOVar43->vector;
        while( true ) {
          auVar46._24_20_ = auVar42._24_20_;
          auVar46._0_20_ = auVar42._0_20_;
          auVar46._20_4_ = ppOVar45;
          if ((int)pOVar43->max_length <= (int)uVar44) {
            return;
          }
          if (pOVar43->max_length <= uVar44) break;
          this_00 = (MeshFilter *)*ppOVar45;
          if (this_00 == (MeshFilter *)0x0) goto code_?;
          this_03 = this_00;
          pMVar47 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                              (this_00,(MethodInfo *)0x0);
          auVar42._28_16_ = auVar46._28_16_;
          auVar42._0_24_ = auVar46._0_24_;
          auVar42._24_4_ = pMVar47;
          pGVar48 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (pGVar48 == (GameObject *)0x0) goto code_?;
          this_01 = (Renderer *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar48,
                               UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                              );
          pGVar48 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (pGVar48 == (GameObject *)0x0) goto code_?;
          flagSet = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                              (pGVar48,(MethodInfo *)0x0);
          bVar49 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::PointerDeviceState::
                   PointerDeviceState_HasFlagFast(flagSet,2,(MethodInfo *)0x0);
          if (bVar49 == 0) {
            pMVar47 = auVar42._24_4_;
            submeshIndex = 0;
            iVar50 = 0x10;
            if (pMVar47 == (Mesh *)0x0) goto code_?;
            while( true ) {
              iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount
                                 (pMVar47,(MethodInfo *)0x0);
              if (iVar4 <= (int)submeshIndex) break;
              if (this_01 == (Renderer *)0x0) goto code_?;
              pMVar51 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                        Renderer_get_sharedMaterials(this_01,(MethodInfo *)0x0);
              if (pMVar51 == (Material__Array *)0x0) goto code_?;
              if (pMVar51->max_length <= submeshIndex) goto code_?;
              material = *(Material **)((int)pMVar51->vector + iVar50 + -0x10);
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_03,(MethodInfo *)0x0);
              if (this_02 == (Transform *)0x0) goto code_?;
              pMVar52 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localToWorldMatrix
                                  ((Matrix4x4 *)&stack0xffffff48,this_02,(MethodInfo *)0x0);
              fVar7 = pMVar52->m00;
              fVar8 = pMVar52->m10;
              fVar9 = pMVar52->m20;
              mesh = (Mesh *)pMVar52->m30;
              auVar53._4_36_ = auVar42._8_36_;
              auVar53._0_4_ = pMVar52->m01;
              auVar54._0_8_ = auVar53._0_8_ << 0x20;
              auVar54._8_4_ = pMVar52->m11;
              auVar54._12_4_ = pMVar52->m21;
              auVar54._20_24_ = auVar42._20_24_;
              auVar54._16_4_ = pMVar52->m31;
              fVar11 = pMVar52->m02;
              fVar55 = pMVar52->m12;
              fVar56 = pMVar52->m22;
              auVar57._40_4_ = 0;
              auVar57._0_40_ = auVar54._4_40_;
              auVar57 = auVar57 << 0x20;
              this = (AvatarCapture *)pMVar52->m03;
              cameraTransform = (Transform *)pMVar52->m13;
              objectTransform = (Transform *)pMVar52->m23;
              method = (MethodInfo *)pMVar52->m33;
              iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                 (StringLiteral_UXElementSecondary,(MethodInfo *)0x0);
              camera = (Camera *)pMVar47[1].monitor;
              if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              auVar42._4_4_ = fVar8;
              auVar42._0_4_ = fVar7;
              auVar42._8_4_ = fVar9;
              auVar42._12_4_ = mesh;
              auVar42._16_4_ = fVar8;
              auVar42._20_4_ = fVar9;
              auVar42._24_4_ = mesh;
              auVar42._28_4_ = auVar57._16_4_;
              auVar42._32_4_ = fVar11;
              auVar42._36_4_ = fVar55;
              auVar42._40_4_ = fVar56;
              unaff_retaddr = fVar7;
              fVar58 = fVar7;
              stack0xffffffd8 = fVar8;
              stack0xffffffdc = fVar9;
              stack0xffffffe0 = (float)mesh;
              stack0xffffffe4 = fVar8;
              stack0xffffffe8 = fVar9;
              stack0xffffffec = (float)mesh;
              stack0xfffffff0 = (float)auVar57._16_4_;
              stack0xfffffff4 = fVar11;
              stack0xfffffff8 = fVar55;
              stack0xfffffffc = fVar56;
              matrix = (Matrix4x4)CONCAT2044(auVar59,auVar60);
              UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh
                        (mesh,matrix,material,iVar4,camera,submeshIndex,
                         (MaterialPropertyBlock *)0x0,1,1,0,(MethodInfo *)0x0);
              pMVar47 = auVar42._24_4_;
              submeshIndex = submeshIndex + 1;
              iVar50 = iVar50 + 4;
            }
          }
          uVar44 = uVar44 + 1;
          ppOVar45 = (Object **)(auVar42._20_4_ + 4);
        }
code_?:
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar61 = (code *)swi(3);
  (*pcVar61)();
  return;
}


/* Void InitializeCamera() */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_InitializeCamera
               (AvatarCapture *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RenderTexture);
    cRam_? = '\x01';
  }
  TStack_1._id_k__BackingField = 0;
  TStack_1.m_Data = (Object *)0x0;
  TStack_1.m_Children = (IList_1_UnityEngine_UIElements_TreeViewItemData_1_System_Object_ *)0x0;
  uStack_2 = 0;
  pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar3 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar3->fields).AvatarCommandsPlayMode,
     this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__A
              ((RewardedAd *)this_00,(MethodInfo *)0x0);
    pCVar4 = (this->fields).renderCam;
    if (pCVar4 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                (pCVar4,CameraClearFlags__Enum_Depth,(MethodInfo *)0x0);
      pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                         (&RStack_6,(MethodInfo *)0x0);
      TStack_1._id_k__BackingField = pRVar5->m_Width;
      TStack_1.m_Data = (Object *)pRVar5->m_Height;
      TStack_1.m_Children =
           (IList_1_UnityEngine_UIElements_TreeViewItemData_1_System_Object_ *)
           (pRVar5->m_RefreshRate).numerator;
      uStack_2 = (pRVar5->m_RefreshRate).denominator;
      width = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_6
                        ((uint8_t *)&TStack_1,(MethodInfo *)0x0);
      height = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::TreeViewItemData`1[System
               ::Object]::TreeViewItemData_1_System_Object__get_data(&TStack_1,(MethodInfo *)0x0);
      this_01 = (RenderTexture *)func_?(TypeInfo__UnityEngine__RenderTexture);
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_8
                (this_01,(int32_t)width,(int32_t)height,0x10,RenderTextureFormat__Enum_ARGB32,
                 RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_get_active
                        ((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                (this_01,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Clear_1
                (1,1,(Color)ZEXT816(0),(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                (value,(MethodInfo *)0x0);
      if (this_01 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode
                  ((Texture *)this_01,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                  ((Texture *)this_01,FilterMode__Enum_Trilinear,(MethodInfo *)0x0);
        pCVar4 = (this->fields).renderCam;
        if (pCVar4 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar4,this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
        if (pRVar2 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
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
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Vector3 RotatePointAroundPivot(Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarCapture::AvatarCapture_RotatePointAroundPivot
                    (Vector3 *__return_storage_ptr__,Vector3 point,Vector3 pivot,Vector3 angles,
                    MethodInfo *method)

{
  fVar1 = point.x - pivot.x;
  fStack_2 = point.y - pivot.y;
  VStack_3.z = point.z - pivot.z;
  QStack_4.z = angles.z * _UNK_?;
  euler.y = angles.y * _UNK_?;
  euler.x = angles.x * _UNK_?;
  euler.z = angles.z * _UNK_?;
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (&QStack_4,euler,(MethodInfo *)0x0);
  fVar6 = pQVar5->w;
  point_00.y = fStack_2;
  point_00.x = fVar1;
  point_00.z = VStack_3.z;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_3,*pQVar5,point_00,(MethodInfo *)0x0);
  uVar8 = pVVar7->x;
  uVar9 = pVVar7->y;
  fVar1 = pVVar7->z;
  __return_storage_ptr__->x = fVar6 + (float)uVar8;
  __return_storage_ptr__->y = pivot.y + (float)uVar9;
  __return_storage_ptr__->z = pivot.z + fVar1;
  return __return_storage_ptr__;
}


/* AvatarCapture() */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture__ctor(AvatarCapture *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  (this->fields).formationSpacing.x = (float)_UNK_?;
  (this->fields).formationSpacing.y = (float)uVar1;
  (this->fields).formationSpacing.z = 1.2;
  (this->fields).formationRandomness = 1.0;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

