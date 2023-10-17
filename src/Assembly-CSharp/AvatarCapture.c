
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
  this_01 = (AvatarCapture *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>
                           );
  if (this_01 != (AvatarCapture *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
              );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
      source = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
      item = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                       ((IEnumerable_1_System_Object_ *)source,
                        System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                       );
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__Add_System__Collections__Generic__List<MVPlayer>_
                );
      AvatarCapture_CapturePlayerGroup(this_01,(List_1_List_1_MVPlayer_ *)this_01,(MethodInfo *)0x0)
      ;
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
    iStack_1 = (players->fields)._size;
    this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    if (this_02 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      pLStack_2 = this_02;
      AvatarCapture_CreateTriangleFormation
                (this,(List_1_UnityEngine_Vector3_ **)&pLStack_2,(this->fields).formationSpacing,
                 iStack_1,(MethodInfo *)0x0);
      if (pLStack_2 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Reverse
                  (pLStack_2,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__);
        index = 0;
        while( true ) {
          if ((players->fields)._size <= index) {
            return;
          }
          iStack_1 = index;
          pOStack_3 = (Object__Class *)
                       MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          this_03 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               players,index,
                               MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_
                              );
          if (this_03 == (RegexCharClass_SingleRange)0x0) break;
          id = MVPlayer::MVPlayer_get_WoId((MVPlayer *)this_03,(MethodInfo *)0x0);
          if (pOStack_3 == (Object__Class *)0x0) break;
          pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             ((MVWorldObjectClientManager *)pOStack_3,id,(MethodInfo *)0x0);
          if (pMVar4 == (MVWorldObject *)0x0) break;
          this_00 = (Object__Class *)pMVar4[1].fields.ownerActorNr;
          this_01 = (this->fields).renderCam;
          pOStack_3 = this_00;
          if (this_01 == (Camera *)0x0) break;
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_01,(MethodInfo *)0x0);
          if (this_00 == (Object__Class *)0x0) break;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_6,(Transform *)this_00,(MethodInfo *)0x0);
          if (this_04 == (Transform *)0x0) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_04,*pVVar5,(MethodInfo *)0x0);
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_7,this_04,(MethodInfo *)0x0);
          uStack_8._0_4_ = pVVar5->x;
          uStack_8._4_4_ = pVVar5->y;
          fStack_9 = pVVar5->z;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                             (&VStack_10,(Transform *)this_00,(MethodInfo *)0x0);
          uStack_11._0_4_ = pVVar5->x;
          uStack_11._4_4_ = pVVar5->y;
          fStack_12 = pVVar5->z;
          fVar13 = (this->fields).cameraOffset.x;
          fStack_14 = fStack_9 + fStack_12 * fVar13;
          value.y = uStack_8._4_4_ + (float)uStack_11._4_4_ * fVar13;
          value.x = (float)uStack_8 + (float)(undefined4)uStack_11 * fVar13;
          value.z = fStack_14;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_04,value,(MethodInfo *)0x0);
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_15,this_04,(MethodInfo *)0x0);
          uStack_16._0_4_ = pVVar5->x;
          uStack_16._4_4_ = pVVar5->y;
          fStack_17 = pVVar5->z;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                             (&VStack_18,(Transform *)this_00,(MethodInfo *)0x0);
          uStack_19._0_4_ = pVVar5->x;
          uStack_19._4_4_ = pVVar5->y;
          fStack_20 = pVVar5->z;
          if (pLStack_2 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
          break;
          pUVar21 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                   UnitySynchronizationContext+WorkRequest]::
                   List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                             (&UStack_22,pLStack_2,iStack_1,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             );
          uStack_23._0_4_ = pUVar21->m_DelagateCallback;
          uStack_23._4_4_ = pUVar21->m_DelagateState;
          fVar13 = (float)((undefined4)uStack_23 ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
          fStack_24 = fStack_17 + fStack_20 * fVar13;
          value_00.y = uStack_16._4_4_ + uStack_19._4_4_ * fVar13;
          value_00.x = (float)uStack_16 + (float)uStack_19 * fVar13;
          value_00.z = fStack_24;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_04,value_00,(MethodInfo *)0x0);
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_25,this_04,(MethodInfo *)0x0);
          uStack_26._0_4_ = pVVar5->x;
          uStack_26._4_4_ = pVVar5->y;
          fStack_27 = pVVar5->z;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             (&VStack_28,(Transform *)this_00,(MethodInfo *)0x0);
          uStack_29._0_4_ = pVVar5->x;
          uStack_29._4_4_ = pVVar5->y;
          fStack_30 = pVVar5->z;
          fVar13 = (float)((uint)(this->fields).cameraOffset.z ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
          fStack_31 = fStack_27 + fStack_30 * fVar13;
          value_01.y = uStack_26._4_4_ + (float)uStack_29._4_4_ * fVar13;
          value_01.x = (float)uStack_26 + (float)(undefined4)uStack_29 * fVar13;
          value_01.z = fStack_31;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_04,value_01,(MethodInfo *)0x0);
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_32,this_04,(MethodInfo *)0x0);
          uStack_33._0_4_ = pVVar5->x;
          uStack_33._4_4_ = pVVar5->y;
          fStack_34 = pVVar5->z;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             (&VStack_35,(Transform *)this_00,(MethodInfo *)0x0);
          uStack_36._0_4_ = pVVar5->x;
          uStack_36._4_4_ = pVVar5->y;
          fStack_37 = pVVar5->z;
          if (pLStack_2 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
          break;
          pUVar21 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                   UnitySynchronizationContext+WorkRequest]::
                   List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                             (&UStack_38,pLStack_2,iStack_1,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             );
          uStack_39._0_4_ = pUVar21->m_DelagateCallback;
          uStack_39._4_4_ = pUVar21->m_DelagateState;
          pMStack_40 = pUVar21->m_WaitHandle;
          fVar13 = (float)((uint)pMStack_40 ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
          fStack_41 = fStack_34 + fStack_37 * fVar13;
          value_02.y = uStack_33._4_4_ + uStack_36._4_4_ * fVar13;
          value_02.x = (float)uStack_33 + (float)uStack_36 * fVar13;
          value_02.z = fStack_41;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_04,value_02,(MethodInfo *)0x0);
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_42,this_04,(MethodInfo *)0x0);
          uStack_43._0_4_ = pVVar5->x;
          uStack_43._4_4_ = pVVar5->y;
          fStack_44 = pVVar5->z;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                             (&VStack_45,(Transform *)this_00,(MethodInfo *)0x0);
          uStack_46._0_4_ = pVVar5->x;
          uStack_46._4_4_ = pVVar5->y;
          fStack_47 = pVVar5->z;
          fVar13 = (this->fields).cameraOffset.y;
          fStack_48 = fStack_44 + fStack_47 * fVar13;
          value_03.y = uStack_43._4_4_ + (float)uStack_46._4_4_ * fVar13;
          value_03.x = (float)uStack_43 + (float)(undefined4)uStack_46 * fVar13;
          value_03.z = fStack_48;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_04,value_03,(MethodInfo *)0x0);
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_49,this_04,(MethodInfo *)0x0);
          uStack_50._0_4_ = pVVar5->x;
          uStack_50._4_4_ = pVVar5->y;
          fStack_51 = pVVar5->z;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                             ((Vector3 *)&stack0xfffffe40,(Transform *)this_00,(MethodInfo *)0x0);
          uStack_52._0_4_ = pVVar5->x;
          uStack_52._4_4_ = pVVar5->y;
          fStack_53 = pVVar5->z;
          if (pLStack_2 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
          break;
          pUVar21 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                   UnitySynchronizationContext+WorkRequest]::
                   List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                             ((UnitySynchronizationContext_WorkRequest *)&stack0xfffffe34,pLStack_2,
                              iStack_1,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             );
          uStack_54._0_4_ = pUVar21->m_DelagateCallback;
          uStack_54._4_4_ = pUVar21->m_DelagateState;
          fStack_55 = fStack_51 + fStack_53 * (float)uStack_54._4_4_;
          method_00 = (SendOrPostCallback *)
                      ((float)uStack_50 + (float)uStack_52 * (float)uStack_54._4_4_);
          value_04.y = uStack_50._4_4_ + uStack_52._4_4_ * (float)uStack_54._4_4_;
          value_04.x = (float)method_00;
          value_04.z = fStack_55;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_04,value_04,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            VStack_49.z = (float)&TypeInfo__AvatarCapture___DrawAvatarRoutine_d__12;
            VStack_49.y = (float)&UNK_?;
            func_?();
            cRam_? = '\x01';
          }
          VStack_49.z = (float)TypeInfo__AvatarCapture___DrawAvatarRoutine_d__12;
          VStack_49.y = (float)&UNK_?;
          value_05 = (Object *)func_?();
          if (value_05 == (Object *)0x0) break;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (value_05,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
          value_05[2].klass = (Object__Class *)this;
          value_05[1].klass = (Object__Class *)0x0;
          func_?(value_05 + 2,this);
          value_05[2].monitor = (MonitorData *)this_04;
          func_?(&value_05[2].monitor,this_04);
          value_05[3].klass = pOStack_3;
          func_?(value_05 + 3,pOStack_3);
          Coroutines::Coroutines_Start((IEnumerator *)value_05,(MethodInfo *)0x0);
          index = iStack_1 + 1;
        }
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
  pLStack_1 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0;
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
      pLStack_7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)func_?();
      if (pLStack_7 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLStack_7,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
      pLStack_1 = pLStack_7;
      AvatarCapture_CreateTriangleFormation
                (this,(List_1_UnityEngine_Vector3_ **)&pLStack_1,(this->fields).formationSpacing,
                 iStack_5,(MethodInfo *)0x0);
      if (pLStack_1 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Reverse
                (pLStack_1,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__);
      iStack_8 = iVar3 + 1;
      pLStack_7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  (sortedList->fields)._size;
      iVar3 = 0;
      while( true ) {
        pLVar9 = pLStack_1;
        if (pLStack_1 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
        goto code_?;
        if ((pLStack_1->fields)._size <= iVar3) break;
        puVar10 = (undefined8 *)
                 func_?(auStack_11,pLStack_1,iVar3,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                );
        uStack_12 = *puVar10;
        fStack_13 = *(float *)(puVar10 + 1);
        pVVar14 = AvatarCapture_CalculateTieOffset
                           (&VStack_15,this,iStack_8,(int32_t)pLStack_7,(MethodInfo *)0x0);
        uStack_16._0_4_ = pVVar14->x;
        uStack_16._4_4_ = pVVar14->y;
        fStack_17 = pVVar14->z;
        fStack_18 = (float)(undefined4)uStack_16 + (float)uStack_12;
        fStack_19 = (float)uStack_16._4_4_ + uStack_12._4_4_;
        fStack_20 = fStack_17 + fStack_13;
        if (pLVar9 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
        goto code_?;
        value_05.frameToChangeTextureAt = fStack_19;
        value_05.textureOffset = fStack_18;
        value_05._8_4_ = fStack_20;
        mscorlib.dll::System::Collections::Generic::
        List`1[AnimatedTextureOffset+TextureOffsetAnimationData]::
        List_1_AnimatedTextureOffset_TextureOffsetAnimationData__set_Item
                  ((List_1_AnimatedTextureOffset_TextureOffsetAnimationData_ *)pLVar9,iVar3,value_05
                   ,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                  );
        iVar3 = iVar3 + 1;
      }
      pLStack_7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0;
      if (0 < iStack_5) {
        do {
          pLVar9 = pLStack_7;
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
                                    *)RVar4,(int32_t)pLVar9,
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
          if (pLStack_1 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
          goto code_?;
          puVar37 = (uint *)func_?(auStack_38,pLStack_1,pLStack_7,
                                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                          );
          fVar29 = (float)(*puVar37 ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
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
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
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
          if (pLStack_1 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
          goto code_?;
          iVar3 = func_?(auStack_53,pLStack_1,pLStack_7,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                                 );
          fVar29 = (float)(*(uint *)(iVar3 + 8) ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
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
          if (pLStack_1 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
          goto code_?;
          iVar3 = func_?(apLStack_6,pLStack_1,pLStack_7,
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
          pLStack_7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                      ((int)&pLStack_7->klass + 1);
        } while ((int)pLStack_7 < iStack_5);
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
  value = (Object *)func_?(TypeInfo__AvatarCapture____c__DisplayClass8_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    *(undefined1 *)&value[1].klass = (undefined1)counterType;
    AvatarCapture_InitializeCamera(this,(MethodInfo *)0x0);
    sortedList = (List_1_List_1_MVPlayer_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>
                                );
    if (sortedList != (List_1_List_1_MVPlayer_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)sortedList,
                 MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
                );
      iStack_1 = 0;
      if (scoreTeamEntries != (List_1_ScoreTeamEntry_ *)0x0) {
        while( true ) {
          if ((scoreTeamEntries->fields)._size <= iStack_1) {
            AvatarCapture_CapturePlayerGroup(this,sortedList,(MethodInfo *)0x0);
            return;
          }
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 == (MVNetworkGame *)0x0) break;
          this_00 = (pMVar2->fields).teamManager;
          RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             scoreTeamEntries,iStack_1,
                             MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_
                            );
          if ((RVar3 == (RegexCharClass_SingleRange)0x0) || (this_00 == (MVTeamManager *)0x0))
          break;
          source = MVTeamManager::MVTeamManager_GetPlayersInTeam
                             (this_00,*(MVTeam__Enum *)((int)RVar3 + 8),(MethodInfo *)0x0);
          this_01 = (Func_2_Object_Single_ *)value[1].monitor;
          if (this_01 == (Func_2_Object_Single_ *)0x0) {
            this_01 = (Func_2_Object_Single_ *)
                      func_?(TypeInfo__System__Func<MVPlayer,_int>);
            if (this_01 == (Func_2_Object_Single_ *)0x0) break;
            mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::
            Object]::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                      ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_01,value,
                       MethodInfo__AvatarCapture____c__DisplayClass8_0___CapturePlayersInTeam_b__0_MVPlayer_
                       ,(MethodInfo *)0x0);
            value[1].monitor = (MonitorData *)this_01;
            func_?(&value[1].monitor,this_01);
          }
          source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                                ((IEnumerable_1_System_Object_ *)source,this_01,
                                 System__Linq__IOrderedEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__OrderBy<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_
                                );
          item = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                           ((IEnumerable_1_System_Object_ *)source_00,
                            System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                           );
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)sortedList,(Object *)item,
                     MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__Add_System__Collections__Generic__List<MVPlayer>_
                    );
          iStack_1 = iStack_1 + 1;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
                             __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                             ),(float)((uint)formationSpacing.z ^
                                      __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
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
                        __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field),
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
  value = (Object *)func_?(TypeInfo__AvatarCapture___DrawAvatarRoutine_d__12);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    value[2].monitor = (MonitorData *)cameraTransform;
    func_?(&value[2].monitor,cameraTransform);
    value[3].klass = (Object__Class *)objectTransform;
    func_?(value + 3,objectTransform);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void DrawObject(Transform, Transform) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_DrawObject
               (AvatarCapture *this,Transform *cameraTransform,Transform *objectTransform,
               MethodInfo *method)

{
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
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                     (-0x23,0x23,(MethodInfo *)0x0);
  fVar2 = (float)iVar1;
  if (cameraTransform != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd8,cameraTransform,(MethodInfo *)0x0);
    fVar4 = pVVar3->x;
    fVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    if (objectTransform != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&puStack_7,objectTransform,(MethodInfo *)0x0);
      fVar8 = pVVar3->x;
      fVar9 = pVVar3->y;
      fVar10 = pVVar3->z;
      puStack_7 = (undefined *)(fVar4 - fVar8);
      fVar5 = fVar5 - fVar9;
      fVar6 = fVar6 - fVar10;
      auVar11._4_8_ = 0;
      auVar11._0_4_ = fVar2 * _UNK_?;
      pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffff70,(Vector3)(auVar11 << 0x20),
                           (MethodInfo *)0x0);
      point.y = fVar5;
      point.x = (float)puStack_7;
      point.z = fVar6;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&puStack_7,*pQVar12,point,(MethodInfo *)0x0);
      uVar13 = pVVar3->x;
      uVar14 = pVVar3->y;
      value.y = fVar9 + (float)uVar14;
      value.x = fVar8 + (float)uVar13;
      value.z = fVar10 + pVVar3->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (cameraTransform,value,(MethodInfo *)0x0);
      pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffff70,objectTransform,(MethodInfo *)0x0);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_ToEulerRad
                          ((Vector3 *)&puStack_7,*pQVar12,(MethodInfo *)0x0);
      uVar15 = pVVar3->x;
      uVar16 = pVVar3->y;
      euler.y = (float)uVar16 * _UNK_?;
      euler.x = (float)uVar15 * _UNK_?;
      euler.z = pVVar3->z * _UNK_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_MakePositive
                          ((Vector3 *)&stack0xffffffc8,euler,(MethodInfo *)0x0);
      fVar6 = pVVar3->y;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                          ((Quaternion *)&stack0xffffff70,fVar6 + _UNK_? + fVar2,
                           TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (cameraTransform,*pQVar12,(MethodInfo *)0x0);
      bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_TryGetComponent
                         ((Component *)objectTransform,(Object **)0x1,
                          UnityEngine__MeshFilter__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshFilter>_bool_____
                         );
      iVar18 = CONCAT31(extraout_var,bVar17);
      fVar2 = 0.0;
      if (iVar18 != 0) {
        puVar19 = (undefined4 *)(iVar18 + 0x10);
        while( true ) {
          if (*(int *)(iVar18 + 0xc) <= (int)fVar2) {
            return;
          }
          if ((uint)*(float *)(iVar18 + 0xc) <= (uint)fVar2) break;
          this_00 = (MeshFilter *)*puVar19;
          if (this_00 == (MeshFilter *)0x0) goto code_?;
          this_04 = this_00;
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                              (this_00,(MethodInfo *)0x0);
          pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (pGVar20 == (GameObject *)0x0) goto code_?;
          this_02 = (Renderer *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar20,
                               UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                              );
          pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (pGVar20 == (GameObject *)0x0) goto code_?;
          flag = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                           (pGVar20,(MethodInfo *)0x0);
          bVar17 = mscorlib.dll::System::Runtime::Serialization::Formatters::Binary::IOUtil::
                   IOUtil_FlagTest(flag,MessageEnum__Enum_ArgsInline,(MethodInfo *)0x0);
          if (bVar17 == 0) {
            submeshIndex = 0;
            iVar21 = 0x10;
            if (this_01 == (Mesh *)0x0) goto code_?;
            while( true ) {
              puVar19 = (undefined4 *)0x0;
              iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount
                                 (this_01,(MethodInfo *)0x0);
              if (iVar1 <= (int)submeshIndex) break;
              if (this_02 == (Renderer *)0x0) goto code_?;
              pMVar22 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                        Renderer_get_sharedMaterials(this_02,(MethodInfo *)0x0);
              if (pMVar22 == (Material__Array *)0x0) goto code_?;
              if (pMVar22->max_length <= submeshIndex) goto code_?;
              material = *(Material **)((int)pMVar22->vector + iVar21 + -0x10);
              this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_04,(MethodInfo *)0x0);
              if (this_03 == (Transform *)0x0) goto code_?;
              pMVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localToWorldMatrix
                                  ((Matrix4x4 *)&stack0xffffff30,this_03,(MethodInfo *)0x0);
              puStack_7 = (undefined *)pMVar23->m00;
              this_01 = (Mesh *)pMVar23->m10;
              fVar4 = pMVar23->m20;
              fVar5 = pMVar23->m30;
              fVar2 = pMVar23->m01;
              fVar6 = pMVar23->m11;
              fVar8 = pMVar23->m21;
              fVar9 = pMVar23->m31;
              fVar10 = pMVar23->m32;
              fVar24 = pMVar23->m03;
              iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                 (StringLiteral_UXElementSecondary,(MethodInfo *)0x0);
              camera = (this->fields).renderCam;
              if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              this = (AvatarCapture *)0x0;
              this_02 = (Renderer *)&UNK_?;
              matrix.m10 = (float)this_01;
              matrix.m00 = (float)puStack_7;
              matrix.m20 = fVar4;
              matrix.m30 = fVar5;
              matrix.m01 = fVar2;
              matrix.m11 = fVar6;
              matrix.m21 = fVar8;
              matrix.m31 = fVar9;
              matrix.m02 = fVar6;
              matrix.m12 = fVar8;
              matrix.m22 = fVar9;
              matrix.m32 = fVar10;
              matrix.m03 = fVar24;
              matrix.m13 = (float)puStack_7;
              matrix.m23 = (float)this_01;
              matrix.m33 = fVar4;
              UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh
                        (this_01,matrix,material,iVar1,camera,submeshIndex,
                         (MaterialPropertyBlock *)0x0,1,1,0,(MethodInfo *)0x0);
              submeshIndex = submeshIndex + 1;
              iVar21 = iVar21 + 4;
            }
          }
          fVar2 = (float)((int)fVar2 + 1);
          puVar19 = puVar19 + 1;
        }
code_?:
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
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
  iStack_1 = 0;
  SStack_2._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
  SStack_2._index = 0;
  pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar3 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar3->fields).AvatarCommandsPlayMode,
     this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedInterstitialAd::
    RewardedInterstitialAd__RegisterAdEvents_m__3
              ((RewardedInterstitialAd *)this_00,(Object *)0x0,unaff_ESI,unaff_EBX);
    pCVar4 = (this->fields).renderCam;
    if (pCVar4 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                (pCVar4,CameraClearFlags__Enum_Depth,(MethodInfo *)0x0);
      pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                         (&RStack_6,(MethodInfo *)0x0);
      SStack_2._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)pRVar5->m_Width;
      SStack_2._index = pRVar5->m_Height;
      iStack_1 = pRVar5->m_RefreshRate;
      width = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_7
                        ((uint8_t *)&SStack_2,(MethodInfo *)0x0);
      iStack_7 = mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
                 SparselyPopulatedArrayAddInfo_1_System_Object__get_Index
                           (&SStack_2,(MethodInfo *)0x0);
      this_01 = (RenderTexture *)func_?(TypeInfo__UnityEngine__RenderTexture);
      if (this_01 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_8
                  (this_01,(int32_t)width,iStack_7,0x10,RenderTextureFormat__Enum_ARGB32,
                   RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0);
        value = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_get_active
                          ((MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                  (this_01,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Clear
                  (1,1,(Color)ZEXT816(0),(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                  (value,(MethodInfo *)0x0);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  QStack_4.w = angles.z * _UNK_?;
  euler.y = angles.y * _UNK_?;
  euler.x = angles.x * _UNK_?;
  euler.z = QStack_4.w;
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
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}

