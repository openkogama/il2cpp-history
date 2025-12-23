
/* Vector3 CalculateTieOffset(Int32, Int32) */

Vector3 * Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CalculateTieOffset(Vector3 *__return_storage_ptr__,AvatarCapture *this,int32_t currentWinner,int32_t amountOfWinners,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  __return_storage_ptr__->x = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = (float)amountOfWinners * -0.5;
  if (((amountOfWinners & 1U) == 0) || (currentWinner != 1)) {
    iVar3 = FUN_?((float)(amountOfWinners + 2) * 0.5);
    iVar4 = FUN_?(((float)currentWinner - 1.0) * 0.5);
    fVar2 = ((float)iVar4 + 1.0) * (1.0 / (float)iVar3) * 4.0;
    __return_storage_ptr__->x = fVar2;
    iVar3 = FUN_?(((float)currentWinner - 1.0) * 0.5);
    fVar2 = (float)iVar3 + 1.0 + fVar2;
    __return_storage_ptr__->x = fVar2;
    if ((currentWinner & 1U) == 0) {
      __return_storage_ptr__->x = fVar2 * -1.0;
    }
  }
  return __return_storage_ptr__;
}


/* Void CaptureAllPlayersInGame() */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CaptureAllPlayersInGame(AvatarCapture *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__Add_System__Collections__Generic__List<MVPlayer>_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AvatarCapture_InitializeCamera(this,(MethodInfo *)0x0);
  this_03 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)FUN_?(TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) && (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) && (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    collection = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    pMVar3 = System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_;
    if ((System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_);
    }
    if (collection == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0) {
      s = (String *)func_?(&StringLiteral_source);
      pEVar4 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
      FUN_?(pEVar4,pMVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pvVar6 = (pMVar3->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
      pvVar6 = (void *)FUN_?(pvVar6);
    }
    this_04 = (List_1_System_Object_ *)FUN_?(pvVar6);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1(this_04,(IEnumerable_1_System_Object_ *)collection,(pMVar3->field7_0x38).rgctx_data[2].method);
    if (this_03 != (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
      FUN_?(this_03,this_04);
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__,this_03,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Count__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      index = 0;
      pLStack_7 = (List_1_UnityEngine_Vector3_ *)0x0;
      if (this_03 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lStack_8 = 0x20;
      do {
        if ((this_03->fields)._size <= (int)index) {
          return;
        }
        if ((uint)(this_03->fields)._size <= index) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pEVar9 = (this_03->fields)._items;
        if (pEVar9 == (EntryPreProcessor_AllocSize__Array *)0x0) goto code_?;
        if ((uint)pEVar9->max_length <= index) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar10 = *(longlong *)((longlong)&((EntryPreProcessor_AllocSize__Array *)(pEVar9->vector + -4))->klass + lStack_8);
        if (lVar10 == 0) goto code_?;
        numberOfPositions = *(int32_t *)(lVar10 + 0x18);
        pLVar11 = (List_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
        FUN_?(pLVar11,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
        VStack_12.x = (this->fields).formationSpacing.x;
        VStack_12.y = (this->fields).formationSpacing.y;
        VStack_12.z = (this->fields).formationSpacing.z;
        pLStack_7 = pLVar11;
        AvatarCapture_CreateTriangleFormation(this,&pLStack_7,&VStack_12,numberOfPositions,(MethodInfo *)0x0);
        if (pLStack_7 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        FUN_?();
        amountOfWinners = (this_03->fields)._size;
        uVar13 = 0;
        lVar10 = 0;
        while( true ) {
          pLVar11 = pLStack_7;
          if (pLStack_7 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
          uVar14 = (pLStack_7->fields)._size;
          if ((int)uVar14 <= (int)uVar13) break;
          if (uVar14 <= uVar13) goto code_?;
          pVVar15 = (pLStack_7->fields)._items;
          if (pVVar15 == (Vector3__Array *)0x0) goto code_?;
          if ((uint)pVVar15->max_length <= uVar13) goto code_?;
          uVar16 = *(undefined8 *)((longlong)&pVVar15->vector[0].x + lVar10);
          fVar17 = *(float *)((longlong)&pVVar15->vector[0].z + lVar10);
          pVVar18 = AvatarCapture_CalculateTieOffset(&VStack_19,this,index + 1,amountOfWinners,(MethodInfo *)0x0);
          uVar20 = pVVar18->x;
          fVar21 = pVVar18->z;
          if ((uint)(pLVar11->fields)._size <= uVar13) goto code_?;
          pVVar15 = (pLVar11->fields)._items;
          if (pVVar15 == (Vector3__Array *)0x0) goto code_?;
          if ((uint)pVVar15->max_length <= uVar13) goto code_?;
          uVar13 = uVar13 + 1;
          *(ulonglong *)((longlong)&pVVar15->vector[0].x + lVar10) = CONCAT44(pVVar18->y + (float)((ulonglong)uVar16 >> 0x20),(float)uVar20 + (float)uVar16);
          *(float *)((longlong)&pVVar15->vector[0].z + lVar10) = fVar21 + fVar17;
          piVar22 = &(pLVar11->fields)._version;
          *piVar22 = *piVar22 + 1;
          lVar10 = lVar10 + 0xc;
        }
        uVar13 = 0;
        if (0 < numberOfPositions) {
          lVar10 = 0;
          do {
            this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            EVar23 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::EntryPreProcessor+AllocSize]::List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item(this_03,index,MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_);
            if ((((EVar23 == (EntryPreProcessor_AllocSize)0x0) || (lVar24 = FUN_?(EVar23,uVar13), lVar24 == 0)) || ((*(longlong *)(lVar24 + 0x88) == 0 || ((lVar24 = *(longlong *)(*(longlong *)(lVar24 + 0x88) + 0x10), lVar24 == 0 || (this_05 == (MVWorldObjectClientManager *)0x0)))))) || (pMVar25 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient(this_05,*(int32_t *)(lVar24 + 0x10),(MethodInfo *)0x0), pMVar25 == (MVWorldObjectClient *)0x0)) goto code_?;
            this_01 = (this->fields).renderCam;
            this_02 = (pMVar25->fields).transform;
            if ((this_01 == (Camera *)0x0) || (this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0), this_02 == (Transform *)0x0)) goto code_?;
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_26,this_02,(MethodInfo *)0x0);
            if (this_06 == (Transform *)0x0) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uStack_27._0_4_ = pVVar18->x;
            uStack_27._4_4_ = pVVar18->y;
            fStack_28 = pVVar18->z;
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_27);
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_29,this_06,(MethodInfo *)0x0);
            uVar30 = pVVar18->x;
            uVar31 = pVVar18->y;
            fVar17 = pVVar18->z;
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right(&VStack_32,this_02,(MethodInfo *)0x0);
            fVar21 = (this->fields).cameraOffset.x;
            uVar33 = pVVar18->x;
            fStack_34 = pVVar18->z * fVar21 + fVar17;
            uStack_35 = CONCAT44(fVar21 * pVVar18->y + (float)uVar31,(float)uVar33 * fVar21 + (float)uVar30);
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_35);
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_36,this_06,(MethodInfo *)0x0);
            uStack_37._0_4_ = pVVar18->x;
            uStack_37._4_4_ = pVVar18->y;
            fVar21 = pVVar18->z;
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right(&VStack_38,this_02,(MethodInfo *)0x0);
            if (pLStack_7 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if ((uint)(pLStack_7->fields)._size <= uVar13) goto code_?;
            pVVar15 = (pLStack_7->fields)._items;
            if (pVVar15 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar15->max_length <= uVar13) goto code_?;
            uVar39 = pVVar18->x;
            uVar40 = pVVar18->y;
            fVar17 = -(float)*(undefined8 *)((longlong)&pVVar15->vector[0].x + lVar10);
            fStack_41 = fVar17 * pVVar18->z + fVar21;
            uStack_42 = CONCAT44(fVar17 * (float)uVar40 + uStack_37._4_4_,fVar17 * (float)uVar39 + (float)uStack_37);
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_42);
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_43,this_06,(MethodInfo *)0x0);
            uVar44 = pVVar18->x;
            uVar45 = pVVar18->y;
            fVar21 = pVVar18->z;
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(&VStack_46,this_02,(MethodInfo *)0x0);
            fVar17 = -(this->fields).cameraOffset.z;
            uVar47 = pVVar18->x;
            uVar48 = pVVar18->y;
            fStack_49 = fVar17 * pVVar18->z + fVar21;
            uStack_50 = CONCAT44(fVar17 * (float)uVar48 + (float)uVar45,fVar17 * (float)uVar47 + (float)uVar44);
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_50);
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_51,this_06,(MethodInfo *)0x0);
            uStack_52._0_4_ = pVVar18->x;
            uStack_52._4_4_ = pVVar18->y;
            fVar21 = pVVar18->z;
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(&VStack_53,this_02,(MethodInfo *)0x0);
            if (pLStack_7 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if ((uint)(pLStack_7->fields)._size <= uVar13) goto code_?;
            pVVar15 = (pLStack_7->fields)._items;
            if (pVVar15 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar15->max_length <= uVar13) goto code_?;
            uVar54 = pVVar18->x;
            uVar55 = pVVar18->y;
            fVar17 = -*(float *)((longlong)&pVVar15->vector[0].z + lVar10);
            fStack_56 = fVar17 * pVVar18->z + fVar21;
            uStack_57 = CONCAT44(fVar17 * (float)uVar55 + uStack_52._4_4_,fVar17 * (float)uVar54 + (float)uStack_52);
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_57);
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_58,this_06,(MethodInfo *)0x0);
            uVar59 = pVVar18->x;
            uVar60 = pVVar18->y;
            fVar17 = pVVar18->z;
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_61,this_02,(MethodInfo *)0x0);
            fVar21 = (this->fields).cameraOffset.y;
            uVar62 = pVVar18->x;
            uVar63 = pVVar18->y;
            fStack_64 = fVar21 * pVVar18->z + fVar17;
            uStack_65 = CONCAT44(fVar21 * (float)uVar63 + (float)uVar60,fVar21 * (float)uVar62 + (float)uVar59);
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_65);
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_66,this_06,(MethodInfo *)0x0);
            uStack_67._0_4_ = pVVar18->x;
            uStack_67._4_4_ = pVVar18->y;
            fVar21 = pVVar18->z;
            pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(aVStack_68,this_02,(MethodInfo *)0x0);
            if (pLStack_7 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if ((uint)(pLStack_7->fields)._size <= uVar13) goto code_?;
            pVVar15 = (pLStack_7->fields)._items;
            if (pVVar15 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar15->max_length <= uVar13) goto code_?;
            uVar69 = pVVar18->x;
            uVar70 = pVVar18->y;
            fVar17 = (float)((ulonglong)*(undefined8 *)((longlong)&pVVar15->vector[0].x + lVar10) >> 0x20);
            fStack_71 = fVar17 * pVVar18->z + fVar21;
            uStack_72 = CONCAT44(fVar17 * (float)uVar70 + uStack_67._4_4_,fVar17 * (float)uVar69 + (float)uStack_67);
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_72);
            coroutine = AvatarCapture_DrawAvatarRoutine(this,this_06,this_02,(MethodInfo *)0x0);
            Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
            uVar13 = uVar13 + 1;
            lVar10 = lVar10 + 0xc;
          } while ((int)uVar13 < numberOfPositions);
        }
        index = index + 1;
        lStack_8 = lStack_8 + 8;
      } while( true );
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CapturePlayer(List`1[MVPlayer]) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CapturePlayer(AvatarCapture *this,List_1_MVPlayer_ *players,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AvatarCapture_InitializeCamera(this,(MethodInfo *)0x0);
  if (players != (List_1_MVPlayer_ *)0x0) {
    iVar1 = (players->fields)._size;
    pLVar2 = (List_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(pLVar2,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    VStack_3.x = (this->fields).formationSpacing.x;
    VStack_3.y = (this->fields).formationSpacing.y;
    VStack_3.z = (this->fields).formationSpacing.z;
    apLStackX_10[0] = pLVar2;
    AvatarCapture_CreateTriangleFormation(this,apLStackX_10,&VStack_3,iVar1,(MethodInfo *)0x0);
    if (apLStackX_10[0] != (List_1_UnityEngine_Vector3_ *)0x0) {
      FUN_?();
      uVar4 = 0;
      lVar5 = 0;
      while( true ) {
        if ((players->fields)._size <= (int)uVar4) {
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar6 == (MVGameControllerBase *)0x0) || (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) break;
        if ((pMVar7->fields).worldNetwork == (WorldNetwork *)0x0) {
          pMVar8 = (MVWorldObjectClientManagerNetwork *)0x0;
        }
        else {
          pMVar8 = (((pMVar7->fields).worldNetwork)->fields)._.worldObjectClientManager;
        }
        if ((uint)(players->fields)._size <= uVar4) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pMVar10 = (players->fields)._items;
        if (pMVar10 == (MVPlayer__Array *)0x0) break;
        if ((uint)pMVar10->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((((pMVar10->vector[lVar5] == (MVPlayer *)0x0) || (pSVar11 = (pMVar10->vector[lVar5]->fields).spawnRolesManager, pSVar11 == (SpawnRolesManager *)0x0)) || (pSVar12 = (pSVar11->fields).spawnRolesRuntimeData, pSVar12 == (SpawnRolesRuntimeData *)0x0)) || (iVar1 = (pSVar12->fields).activeSpawnRole, pMVar8 == (MVWorldObjectClientManagerNetwork *)0x0)) break;
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pMVar8->fields)._.worldObjects;
        pOStackX_20 = (Object *)0x0;
        if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::Dictionary_2_System_Int32_System_Object__TryGetValue((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar1,&pOStackX_20,MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__);
        if (pOStackX_20 == (Object *)0x0) break;
        obj = (this->fields).renderCam;
        this_01 = (Transform *)pOStackX_20[0xd].monitor;
        if (obj == (Camera *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
          LOCK();
          UNLOCK();
          FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar13 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        pvVar13 = (void *)(*pcRam_?)(pvVar13);
        cameraTransform = (Transform *)UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar13,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
        if (this_01 == (Transform *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_3.x = 0.0;
        VStack_3.y = 0.0;
        VStack_3.z = 0.0;
        pvVar13 = (this_01->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13);
        if (cameraTransform == (Transform *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        VStack_15.x = VStack_3.x;
        VStack_15.y = VStack_3.y;
        VStack_15.z = VStack_3.z;
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar13 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_16 = 0;
        fStack_17 = 0.0;
        pvVar13 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13,&uStack_16);
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right(&VStack_19,this_01,(MethodInfo *)0x0);
        fVar20 = (this->fields).cameraOffset.x;
        uVar21 = pVVar18->x;
        uVar22 = pVVar18->y;
        fStack_23 = fVar20 * pVVar18->z + fStack_17;
        uStack_24 = CONCAT44(fVar20 * (float)uVar22 + uStack_16._4_4_,fVar20 * (float)uVar21 + (float)uStack_16);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar13 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_25 = 0;
        fStack_26 = 0.0;
        pvVar13 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13,&uStack_25);
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right(&VStack_27,this_01,(MethodInfo *)0x0);
        if (apLStackX_10[0] == (List_1_UnityEngine_Vector3_ *)0x0) break;
        if ((uint)(apLStackX_10[0]->fields)._size <= uVar4) goto code_?;
        pVVar28 = (apLStackX_10[0]->fields)._items;
        if (pVVar28 == (Vector3__Array *)0x0) break;
        if ((uint)pVVar28->max_length <= uVar4) goto code_?;
        uVar29 = pVVar18->x;
        uVar30 = pVVar18->y;
        uVar31 = pVVar28->vector[lVar5].x;
        fVar20 = -(float)uVar31;
        fStack_32 = fVar20 * pVVar18->z + fStack_26;
        uStack_33 = CONCAT44(fVar20 * (float)uVar30 + uStack_25._4_4_,fVar20 * (float)uVar29 + (float)uStack_25);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar13 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_34 = 0;
        fStack_35 = 0.0;
        pvVar13 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13,&uStack_34);
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(&VStack_36,this_01,(MethodInfo *)0x0);
        fVar20 = -(this->fields).cameraOffset.z;
        uVar37 = pVVar18->x;
        uVar38 = pVVar18->y;
        fStack_39 = fVar20 * pVVar18->z + fStack_35;
        uStack_40 = CONCAT44(fVar20 * (float)uVar38 + uStack_34._4_4_,fVar20 * (float)uVar37 + (float)uStack_34);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar13 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_41 = 0;
        fStack_42 = 0.0;
        pvVar13 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13,&uStack_41);
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(&VStack_43,this_01,(MethodInfo *)0x0);
        if (apLStackX_10[0] == (List_1_UnityEngine_Vector3_ *)0x0) break;
        if ((uint)(apLStackX_10[0]->fields)._size <= uVar4) goto code_?;
        pVVar28 = (apLStackX_10[0]->fields)._items;
        if (pVVar28 == (Vector3__Array *)0x0) break;
        if ((uint)pVVar28->max_length <= uVar4) goto code_?;
        uVar44 = pVVar18->x;
        uVar45 = pVVar18->y;
        fVar20 = -pVVar28->vector[lVar5].z;
        fStack_46 = fVar20 * pVVar18->z + fStack_42;
        uStack_47 = CONCAT44(fVar20 * (float)uVar45 + uStack_41._4_4_,fVar20 * (float)uVar44 + (float)uStack_41);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar13 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_48 = 0;
        fStack_49 = 0.0;
        pvVar13 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13,&uStack_48);
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_50,this_01,(MethodInfo *)0x0);
        fVar20 = (this->fields).cameraOffset.y;
        uVar51 = pVVar18->x;
        uVar52 = pVVar18->y;
        fStack_53 = fVar20 * pVVar18->z + fStack_49;
        uStack_54 = CONCAT44(fVar20 * (float)uVar52 + uStack_48._4_4_,fVar20 * (float)uVar51 + (float)uStack_48);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar13 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_55 = 0;
        fStack_56 = 0.0;
        pvVar13 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13,&uStack_55);
        pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(aVStack_57,this_01,(MethodInfo *)0x0);
        if (apLStackX_10[0] == (List_1_UnityEngine_Vector3_ *)0x0) break;
        if ((uint)(apLStackX_10[0]->fields)._size <= uVar4) goto code_?;
        pVVar28 = (apLStackX_10[0]->fields)._items;
        if (pVVar28 == (Vector3__Array *)0x0) break;
        if ((uint)pVVar28->max_length <= uVar4) goto code_?;
        uVar58 = pVVar18->x;
        uVar59 = pVVar18->y;
        uVar60 = pVVar28->vector[lVar5].y;
        fStack_61 = (float)uVar60 * pVVar18->z + fStack_56;
        uStack_62 = CONCAT44((float)uVar60 * (float)uVar59 + uStack_55._4_4_,(float)uVar60 * (float)uVar58 + (float)uStack_55);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar13 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar13 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar13,&uStack_62);
        routine = AvatarCapture_DrawAvatarRoutine(this,cameraTransform,this_01,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Coroutines);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_02 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
        if (this_02 == (MonoBehaviour *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2(this_02,routine,(MethodInfo *)0x0);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 1;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void CapturePlayerGroup(List`1[List`1[MVPlayer]]) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CapturePlayerGroup(AvatarCapture *this,List_1_List_1_MVPlayer_ *sortedList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  index = 0;
  pLStack_1 = (List_1_UnityEngine_Vector3_ *)0x0;
  if (sortedList == (List_1_List_1_MVPlayer_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lStack_3 = 0x20;
  do {
    if ((sortedList->fields)._size <= (int)index) {
      return;
    }
    if ((uint)(sortedList->fields)._size <= index) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pLVar4 = (sortedList->fields)._items;
    if (pLVar4 == (List_1_MVPlayer___Array *)0x0) goto code_?;
    if ((uint)pLVar4->max_length <= index) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar5 = *(longlong *)((longlong)pLVar4->vector + lStack_3 + -0x20);
    if (lVar5 == 0) goto code_?;
    numberOfPositions = *(int32_t *)(lVar5 + 0x18);
    pLVar6 = (List_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(pLVar6,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    VStack_7.x = (this->fields).formationSpacing.x;
    VStack_7.y = (this->fields).formationSpacing.y;
    VStack_7.z = (this->fields).formationSpacing.z;
    pLStack_1 = pLVar6;
    AvatarCapture_CreateTriangleFormation(this,&pLStack_1,&VStack_7,numberOfPositions,(MethodInfo *)0x0);
    if (pLStack_1 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    FUN_?();
    amountOfWinners = (sortedList->fields)._size;
    uVar8 = 0;
    lVar5 = 0;
    while( true ) {
      pLVar6 = pLStack_1;
      if (pLStack_1 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      uVar9 = (pLStack_1->fields)._size;
      if ((int)uVar9 <= (int)uVar8) break;
      if (uVar9 <= uVar8) goto code_?;
      pVVar10 = (pLStack_1->fields)._items;
      if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar10->max_length <= uVar8) goto code_?;
      uVar11 = *(undefined8 *)((longlong)&pVVar10->vector[0].x + lVar5);
      fVar12 = *(float *)((longlong)&pVVar10->vector[0].z + lVar5);
      pVVar13 = AvatarCapture_CalculateTieOffset(&VStack_14,this,index + 1,amountOfWinners,(MethodInfo *)0x0);
      uVar15 = pVVar13->x;
      fVar16 = pVVar13->z;
      if ((uint)(pLVar6->fields)._size <= uVar8) goto code_?;
      pVVar10 = (pLVar6->fields)._items;
      if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar10->max_length <= uVar8) goto code_?;
      uVar8 = uVar8 + 1;
      *(ulonglong *)((longlong)&pVVar10->vector[0].x + lVar5) = CONCAT44(pVVar13->y + (float)((ulonglong)uVar11 >> 0x20),(float)uVar15 + (float)uVar11);
      *(float *)((longlong)&pVVar10->vector[0].z + lVar5) = fVar16 + fVar12;
      piVar17 = &(pLVar6->fields)._version;
      *piVar17 = *piVar17 + 1;
      lVar5 = lVar5 + 0xc;
    }
    uVar8 = 0;
    if (0 < numberOfPositions) {
      lVar5 = 0;
      do {
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        EVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::EntryPreProcessor+AllocSize]::List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item((List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)sortedList,index,MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_);
        if (((((EVar18 == (EntryPreProcessor_AllocSize)0x0) || (lVar19 = FUN_?(EVar18,uVar8), lVar19 == 0)) || (*(longlong *)(lVar19 + 0x88) == 0)) || ((lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x88) + 0x10), lVar19 == 0 || (this_02 == (MVWorldObjectClientManager *)0x0)))) || (pMVar20 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient(this_02,*(int32_t *)(lVar19 + 0x10),(MethodInfo *)0x0), pMVar20 == (MVWorldObjectClient *)0x0)) goto code_?;
        this_00 = (this->fields).renderCam;
        this_01 = (pMVar20->fields).transform;
        if ((this_00 == (Camera *)0x0) || (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0), this_01 == (Transform *)0x0)) goto code_?;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_21,this_01,(MethodInfo *)0x0);
        if (this_03 == (Transform *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uStack_22._0_4_ = pVVar13->x;
        uStack_22._4_4_ = pVVar13->y;
        fStack_23 = pVVar13->z;
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar24 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar24 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar24,&uStack_22);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_25,this_03,(MethodInfo *)0x0);
        uVar26 = pVVar13->x;
        uVar27 = pVVar13->y;
        fVar12 = pVVar13->z;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right(&VStack_28,this_01,(MethodInfo *)0x0);
        fVar16 = (this->fields).cameraOffset.x;
        uVar29 = pVVar13->x;
        fStack_30 = pVVar13->z * fVar16 + fVar12;
        uStack_31 = CONCAT44(fVar16 * pVVar13->y + (float)uVar27,(float)uVar29 * fVar16 + (float)uVar26);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar24 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar24 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar24,&uStack_31);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_32,this_03,(MethodInfo *)0x0);
        uStack_33._0_4_ = pVVar13->x;
        uStack_33._4_4_ = pVVar13->y;
        fVar16 = pVVar13->z;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right(&VStack_34,this_01,(MethodInfo *)0x0);
        if (pLStack_1 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        if ((uint)(pLStack_1->fields)._size <= uVar8) goto code_?;
        pVVar10 = (pLStack_1->fields)._items;
        if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar10->max_length <= uVar8) goto code_?;
        uVar35 = pVVar13->x;
        uVar36 = pVVar13->y;
        fVar12 = -(float)*(undefined8 *)((longlong)&pVVar10->vector[0].x + lVar5);
        fStack_37 = fVar12 * pVVar13->z + fVar16;
        uStack_38 = CONCAT44(fVar12 * (float)uVar36 + uStack_33._4_4_,fVar12 * (float)uVar35 + (float)uStack_33);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar24 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar24 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar24,&uStack_38);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_39,this_03,(MethodInfo *)0x0);
        uVar40 = pVVar13->x;
        uVar41 = pVVar13->y;
        fVar16 = pVVar13->z;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(&VStack_42,this_01,(MethodInfo *)0x0);
        fVar12 = -(this->fields).cameraOffset.z;
        uVar43 = pVVar13->x;
        uVar44 = pVVar13->y;
        fStack_45 = fVar12 * pVVar13->z + fVar16;
        uStack_46 = CONCAT44(fVar12 * (float)uVar44 + (float)uVar41,fVar12 * (float)uVar43 + (float)uVar40);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar24 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar24 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar24,&uStack_46);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_47,this_03,(MethodInfo *)0x0);
        uStack_48._0_4_ = pVVar13->x;
        uStack_48._4_4_ = pVVar13->y;
        fVar16 = pVVar13->z;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(&VStack_49,this_01,(MethodInfo *)0x0);
        if (pLStack_1 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        if ((uint)(pLStack_1->fields)._size <= uVar8) goto code_?;
        pVVar10 = (pLStack_1->fields)._items;
        if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar10->max_length <= uVar8) goto code_?;
        uVar50 = pVVar13->x;
        uVar51 = pVVar13->y;
        fVar12 = -*(float *)((longlong)&pVVar10->vector[0].z + lVar5);
        fStack_52 = fVar12 * pVVar13->z + fVar16;
        uStack_53 = CONCAT44(fVar12 * (float)uVar51 + uStack_48._4_4_,fVar12 * (float)uVar50 + (float)uStack_48);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar24 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar24 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar24,&uStack_53);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_54,this_03,(MethodInfo *)0x0);
        uVar55 = pVVar13->x;
        uVar56 = pVVar13->y;
        fVar12 = pVVar13->z;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_57,this_01,(MethodInfo *)0x0);
        fVar16 = (this->fields).cameraOffset.y;
        uVar58 = pVVar13->x;
        uVar59 = pVVar13->y;
        fStack_60 = fVar16 * pVVar13->z + fVar12;
        uStack_61 = CONCAT44(fVar16 * (float)uVar59 + (float)uVar56,fVar16 * (float)uVar58 + (float)uVar55);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar24 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar24 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar24,&uStack_61);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_62,this_03,(MethodInfo *)0x0);
        uStack_63._0_4_ = pVVar13->x;
        uStack_63._4_4_ = pVVar13->y;
        fVar16 = pVVar13->z;
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(aVStack_64,this_01,(MethodInfo *)0x0);
        if (pLStack_1 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        if ((uint)(pLStack_1->fields)._size <= uVar8) goto code_?;
        pVVar10 = (pLStack_1->fields)._items;
        if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar10->max_length <= uVar8) goto code_?;
        uVar65 = pVVar13->x;
        uVar66 = pVVar13->y;
        fVar12 = (float)((ulonglong)*(undefined8 *)((longlong)&pVVar10->vector[0].x + lVar5) >> 0x20);
        fStack_67 = fVar12 * pVVar13->z + fVar16;
        uStack_68 = CONCAT44(fVar12 * (float)uVar66 + uStack_63._4_4_,fVar12 * (float)uVar65 + (float)uStack_63);
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar24 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar24 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar24,&uStack_68);
        coroutine = AvatarCapture_DrawAvatarRoutine(this,this_03,this_01,(MethodInfo *)0x0);
        Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
        uVar8 = uVar8 + 1;
        lVar5 = lVar5 + 0xc;
      } while ((int)uVar8 < numberOfPositions);
    }
    index = index + 1;
    lStack_3 = lStack_3 + 8;
  } while( true );
}


/* Void CapturePlayersInTeam(List`1[ScoreTeamEntry], GameStatCounterType) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CapturePlayersInTeam(AvatarCapture *this,List_1_ScoreTeamEntry_ *scoreTeamEntries,GameStatCounterType__Enum counterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&System__Linq__IOrderedEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__OrderBy<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_);
    LOCK();
    UNLOCK();
    FUN_?(&System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<MVPlayer,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__Add_System__Collections__Generic__List<MVPlayer>_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarCapture____c__DisplayClass8_0___CapturePlayersInTeam_b__0_MVPlayer_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarCapture____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__AvatarCapture____c__DisplayClass8_0);
  if (object != (Object *)0x0) {
    *(char *)&object[1].klass = (char)counterType;
    AvatarCapture_InitializeCamera(this,(MethodInfo *)0x0);
    this_03 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)FUN_?(TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__);
    uVar1 = 0;
    if (scoreTeamEntries != (List_1_ScoreTeamEntry_ *)0x0) {
      lVar2 = 0x20;
      for (; (int)uVar1 < (scoreTeamEntries->fields)._size; uVar1 = uVar1 + 1) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar3 == (MVGameControllerBase *)0x0) || (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) goto code_?;
        if ((uint)(scoreTeamEntries->fields)._size <= uVar1) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pSVar6 = (scoreTeamEntries->fields)._items;
        if (pSVar6 == (ScoreTeamEntry__Array *)0x0) goto code_?;
        if ((uint)pSVar6->max_length <= uVar1) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar7 = *(longlong *)((longlong)pSVar6->vector + lVar2 + -0x20);
        if ((lVar7 == 0) || (this_00 = (pMVar4->fields).teamManager, this_00 == (MVTeamManager *)0x0)) goto code_?;
        source = MVTeamManager::MVTeamManager_GetPlayersInTeam(this_00,*(MVTeam__Enum *)(lVar7 + 0x10),(MethodInfo *)0x0);
        this_04 = (Func_2_Object_Int32_ *)object[1].monitor;
        if (this_04 == (Func_2_Object_Int32_ *)0x0) {
          this_04 = (Func_2_Object_Int32_ *)FUN_?(TypeInfo__System__Func<MVPlayer,_int>);
          mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor((Func_2_Object_Int32Enum_ *)this_04,object,MethodInfo__AvatarCapture____c__DisplayClass8_0___CapturePlayersInTeam_b__0_MVPlayer_,(MethodInfo *)0x0);
          object[1].monitor = (MonitorData *)this_04;
          func_?(&object[1].monitor);
        }
        pIVar8 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_5((IEnumerable_1_System_Object_ *)source,this_04,System__Linq__IOrderedEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__OrderBy<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_);
        uVar9 = FUN_?(pIVar8);
        if (this_03 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) goto code_?;
        FUN_?(this_03,uVar9);
        lVar2 = lVar2 + 8;
      }
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__,this_03,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Count__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar1 = 0;
      pLStack_10 = (List_1_UnityEngine_Vector3_ *)0x0;
      if (this_03 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lStack_11 = 0x20;
      do {
        if ((this_03->fields)._size <= (int)uVar1) {
          return;
        }
        if ((uint)(this_03->fields)._size <= uVar1) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pEVar12 = (this_03->fields)._items;
        if (pEVar12 == (EntryPreProcessor_AllocSize__Array *)0x0) goto code_?;
        if ((uint)pEVar12->max_length <= uVar1) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar2 = *(longlong *)((longlong)&((EntryPreProcessor_AllocSize__Array *)(pEVar12->vector + -4))->klass + lStack_11);
        if (lVar2 == 0) goto code_?;
        numberOfPositions = *(int32_t *)(lVar2 + 0x18);
        pLVar13 = (List_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
        FUN_?(pLVar13,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
        VStack_14.x = (this->fields).formationSpacing.x;
        VStack_14.y = (this->fields).formationSpacing.y;
        VStack_14.z = (this->fields).formationSpacing.z;
        pLStack_10 = pLVar13;
        AvatarCapture_CreateTriangleFormation(this,&pLStack_10,&VStack_14,numberOfPositions,(MethodInfo *)0x0);
        if (pLStack_10 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        FUN_?();
        amountOfWinners = (this_03->fields)._size;
        uVar15 = 0;
        lVar2 = 0;
        while( true ) {
          pLVar13 = pLStack_10;
          if (pLStack_10 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
          uVar16 = (pLStack_10->fields)._size;
          if ((int)uVar16 <= (int)uVar15) break;
          if (uVar16 <= uVar15) goto code_?;
          pVVar17 = (pLStack_10->fields)._items;
          if (pVVar17 == (Vector3__Array *)0x0) goto code_?;
          if ((uint)pVVar17->max_length <= uVar15) goto code_?;
          uVar9 = *(undefined8 *)((longlong)&pVVar17->vector[0].x + lVar2);
          fVar18 = *(float *)((longlong)&pVVar17->vector[0].z + lVar2);
          pVVar19 = AvatarCapture_CalculateTieOffset(&VStack_20,this,uVar1 + 1,amountOfWinners,(MethodInfo *)0x0);
          uVar21 = pVVar19->x;
          fVar22 = pVVar19->z;
          if ((uint)(pLVar13->fields)._size <= uVar15) goto code_?;
          pVVar17 = (pLVar13->fields)._items;
          if (pVVar17 == (Vector3__Array *)0x0) goto code_?;
          if ((uint)pVVar17->max_length <= uVar15) goto code_?;
          uVar15 = uVar15 + 1;
          *(ulonglong *)((longlong)&pVVar17->vector[0].x + lVar2) = CONCAT44(pVVar19->y + (float)((ulonglong)uVar9 >> 0x20),(float)uVar21 + (float)uVar9);
          *(float *)((longlong)&pVVar17->vector[0].z + lVar2) = fVar22 + fVar18;
          piVar23 = &(pLVar13->fields)._version;
          *piVar23 = *piVar23 + 1;
          lVar2 = lVar2 + 0xc;
        }
        uVar15 = 0;
        if (0 < numberOfPositions) {
          lVar2 = 0;
          do {
            this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            EVar24 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::EntryPreProcessor+AllocSize]::List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item(this_03,uVar1,MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_);
            if (((((EVar24 == (EntryPreProcessor_AllocSize)0x0) || (lVar7 = FUN_?(EVar24,uVar15), lVar7 == 0)) || (*(longlong *)(lVar7 + 0x88) == 0)) || ((lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x88) + 0x10), lVar7 == 0 || (this_05 == (MVWorldObjectClientManager *)0x0)))) || (pMVar25 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient(this_05,*(int32_t *)(lVar7 + 0x10),(MethodInfo *)0x0), pMVar25 == (MVWorldObjectClient *)0x0)) goto code_?;
            this_01 = (this->fields).renderCam;
            this_02 = (pMVar25->fields).transform;
            if ((this_01 == (Camera *)0x0) || (this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0), this_02 == (Transform *)0x0)) goto code_?;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_26,this_02,(MethodInfo *)0x0);
            if (this_06 == (Transform *)0x0) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uStack_27._0_4_ = pVVar19->x;
            uStack_27._4_4_ = pVVar19->y;
            fStack_28 = pVVar19->z;
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar29,&uStack_27);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_30,this_06,(MethodInfo *)0x0);
            uVar31 = pVVar19->x;
            uVar32 = pVVar19->y;
            fVar18 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right(&VStack_33,this_02,(MethodInfo *)0x0);
            fVar22 = (this->fields).cameraOffset.x;
            uVar34 = pVVar19->x;
            fStack_35 = pVVar19->z * fVar22 + fVar18;
            uStack_36 = CONCAT44(fVar22 * pVVar19->y + (float)uVar32,(float)uVar34 * fVar22 + (float)uVar31);
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar29,&uStack_36);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_37,this_06,(MethodInfo *)0x0);
            uStack_38._0_4_ = pVVar19->x;
            uStack_38._4_4_ = pVVar19->y;
            fVar22 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right(&VStack_39,this_02,(MethodInfo *)0x0);
            if (pLStack_10 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if ((uint)(pLStack_10->fields)._size <= uVar15) goto code_?;
            pVVar17 = (pLStack_10->fields)._items;
            if (pVVar17 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar17->max_length <= uVar15) goto code_?;
            uVar40 = pVVar19->x;
            uVar41 = pVVar19->y;
            fVar18 = -(float)*(undefined8 *)((longlong)&pVVar17->vector[0].x + lVar2);
            fStack_42 = fVar18 * pVVar19->z + fVar22;
            uStack_43 = CONCAT44(fVar18 * (float)uVar41 + uStack_38._4_4_,fVar18 * (float)uVar40 + (float)uStack_38);
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar29,&uStack_43);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_44,this_06,(MethodInfo *)0x0);
            uVar45 = pVVar19->x;
            uVar46 = pVVar19->y;
            fVar22 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(&VStack_47,this_02,(MethodInfo *)0x0);
            fVar18 = -(this->fields).cameraOffset.z;
            uVar48 = pVVar19->x;
            uVar49 = pVVar19->y;
            fStack_50 = fVar18 * pVVar19->z + fVar22;
            uStack_51 = CONCAT44(fVar18 * (float)uVar49 + (float)uVar46,fVar18 * (float)uVar48 + (float)uVar45);
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar29,&uStack_51);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_52,this_06,(MethodInfo *)0x0);
            uStack_53._0_4_ = pVVar19->x;
            uStack_53._4_4_ = pVVar19->y;
            fVar22 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(&VStack_54,this_02,(MethodInfo *)0x0);
            if (pLStack_10 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if ((uint)(pLStack_10->fields)._size <= uVar15) goto code_?;
            pVVar17 = (pLStack_10->fields)._items;
            if (pVVar17 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar17->max_length <= uVar15) goto code_?;
            uVar55 = pVVar19->x;
            uVar56 = pVVar19->y;
            fVar18 = -*(float *)((longlong)&pVVar17->vector[0].z + lVar2);
            fStack_57 = fVar18 * pVVar19->z + fVar22;
            uStack_58 = CONCAT44(fVar18 * (float)uVar56 + uStack_53._4_4_,fVar18 * (float)uVar55 + (float)uStack_53);
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar29,&uStack_58);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_59,this_06,(MethodInfo *)0x0);
            uVar60 = pVVar19->x;
            uVar61 = pVVar19->y;
            fVar18 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(&VStack_62,this_02,(MethodInfo *)0x0);
            fVar22 = (this->fields).cameraOffset.y;
            uVar63 = pVVar19->x;
            uVar64 = pVVar19->y;
            fStack_65 = fVar22 * pVVar19->z + fVar18;
            uStack_66 = CONCAT44(fVar22 * (float)uVar64 + (float)uVar61,fVar22 * (float)uVar63 + (float)uVar60);
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar29,&uStack_66);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_67,this_06,(MethodInfo *)0x0);
            uStack_68._0_4_ = pVVar19->x;
            uStack_68._4_4_ = pVVar19->y;
            fVar22 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up(aVStack_69,this_02,(MethodInfo *)0x0);
            if (pLStack_10 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if ((uint)(pLStack_10->fields)._size <= uVar15) goto code_?;
            pVVar17 = (pLStack_10->fields)._items;
            if (pVVar17 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar17->max_length <= uVar15) goto code_?;
            uVar70 = pVVar19->x;
            uVar71 = pVVar19->y;
            fVar18 = (float)((ulonglong)*(undefined8 *)((longlong)&pVVar17->vector[0].x + lVar2) >> 0x20);
            fStack_72 = fVar18 * pVVar19->z + fVar22;
            uStack_73 = CONCAT44(fVar18 * (float)uVar71 + uStack_68._4_4_,fVar18 * (float)uVar70 + (float)uStack_68);
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar29,&uStack_73);
            coroutine = AvatarCapture_DrawAvatarRoutine(this,this_06,this_02,(MethodInfo *)0x0);
            Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
            uVar15 = uVar15 + 1;
            lVar2 = lVar2 + 0xc;
          } while ((int)uVar15 < numberOfPositions);
        }
        uVar1 = uVar1 + 1;
        lStack_11 = lStack_11 + 8;
      } while( true );
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Int32 CreateTriangleFormation(List`1[UnityEngine.Vector3] ByRef, Vector3, Int32) */

int32_t Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CreateTriangleFormation(AvatarCapture *this,List_1_UnityEngine_Vector3_ **positions,Vector3 *formationSpacing,int32_t numberOfPositions,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)*positions;
  if (this_00 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pPVar3 = (this_00->fields)._items;
    if (pPVar3 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if (uVar4 < (uint)pPVar3->max_length) {
        (this_00->fields)._size = uVar4 + 1;
        if ((uint)pPVar3->max_length <= uVar4) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          iVar6 = (*pcVar5)();
          return iVar6;
        }
        pPVar3->vector[(int)uVar4].Quadrant = 0;
        pPVar3->vector[(int)uVar4].FirstAxisSign = 0;
        pPVar3->vector[(int)uVar4].SecondAxisSign = 0;
      }
      else {
        PStack_7.SecondAxisSign = 0;
        PStack_7.Quadrant = 0;
        PStack_7.FirstAxisSign = 0;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this_00,&PStack_7,pMVar1->klass->rgctx_data[0xe].method);
      }
      if (1 < numberOfPositions) {
        PStack_7.Quadrant = (int32_t)formationSpacing->x;
        PStack_7.FirstAxisSign = (int32_t)formationSpacing->y;
        PStack_7.SecondAxisSign = (int32_t)formationSpacing->z;
        numberOfPositions = AvatarCapture_CreateTriangleFormation_1(this,positions,(Vector3 *)&PStack_7,numberOfPositions + -1,2,-formationSpacing->y,-formationSpacing->z,(MethodInfo *)0x0);
      }
      return numberOfPositions;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Int32 CreateTriangleFormation(List`1[UnityEngine.Vector3] ByRef, Vector3, Int32, Int32, Single, Single) */

int32_t Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CreateTriangleFormation_1(AvatarCapture *this,List_1_UnityEngine_Vector3_ **positions,Vector3 *formationSpacing,int32_t positionsRemaining,int32_t unitsThisRow,float targetY,float targetZ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  if (0 < unitsThisRow) {
    fVar2 = formationSpacing->x;
    iVar3 = positionsRemaining;
    do {
      iVar3 = iVar3 + -1;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range(-(this->fields).formationRandomness,(this->fields).formationRandomness,(MethodInfo *)0x0);
      pMVar5 = MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
      this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)*positions;
      uVar6._0_4_ = (fVar4 + (((float)unitsThisRow * 0.5 - 0.5) - (float)iVar1)) * fVar2;
      if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
code_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        iVar8 = (*pcVar7)();
        return iVar8;
      }
      piVar9 = &(this_00->fields)._version;
      *piVar9 = *piVar9 + 1;
      pPVar10 = (this_00->fields)._items;
      if (pPVar10 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
      uVar11 = (this_00->fields)._size;
      if (uVar11 < (uint)pPVar10->max_length) {
        (this_00->fields)._size = uVar11 + 1;
        if ((uint)pPVar10->max_length <= uVar11) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          iVar8 = (*pcVar7)();
          return iVar8;
        }
        pPVar10->vector[(int)uVar11].Quadrant = (int32_t)(float)uVar6;
        pPVar10->vector[(int)uVar11].FirstAxisSign = (int32_t)targetY;
        pPVar10->vector[(int)uVar11].SecondAxisSign = (int32_t)targetZ;
      }
      else {
        uVar6._4_4_ = (int32_t)targetY;
        aPStack_12[0].SecondAxisSign = (int32_t)targetZ;
        aPStack_12[0]._0_8_ = uVar6;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize(this_00,aPStack_12,pMVar5->klass->rgctx_data[0xe].method);
      }
      if (iVar3 < 1) {
        return unitsThisRow;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < unitsThisRow);
  }
  aPStack_12[0].SecondAxisSign = (int32_t)formationSpacing->z;
  aPStack_12[0].Quadrant = (int32_t)formationSpacing->x;
  aPStack_12[0].FirstAxisSign = (int32_t)formationSpacing->y;
  iVar8 = AvatarCapture_CreateTriangleFormation_1(this,positions,(Vector3 *)aPStack_12,positionsRemaining - unitsThisRow,unitsThisRow + 1,targetY - formationSpacing->y,targetZ - formationSpacing->z,(MethodInfo *)0x0);
  return iVar8;
}


/* IEnumerator DrawAvatarRoutine(Transform, Transform) */

IEnumerator * Assembly-CSharp.dll::AvatarCapture::AvatarCapture_DrawAvatarRoutine(AvatarCapture *this,Transform *cameraTransform,Transform *objectTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarCapture___DrawAvatarRoutine_d__12);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__AvatarCapture___DrawAvatarRoutine_d__12);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pIVar1[2].monitor = (MonitorData *)cameraTransform;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  pIVar1[3].klass = (IEnumerator__Class *)objectTransform;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 3) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return pIVar1;
}


/* Void DrawObject(Transform, Transform) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_DrawObject(AvatarCapture *this,Transform *cameraTransform,Transform *objectTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&UnityEngine__MeshFilter__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshFilter>_bool_____);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UXElementSecondary);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar3 = (*pcRam_?)(0xffffffdd);
  if (cameraTransform != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_4 = (undefined1  [8])0x0;
    uStack_5 = uStack_5 & 0xffffffff00000000;
    pvVar6 = (cameraTransform->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar6);
    if (objectTransform != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_7 = (undefined1  [8])0x0;
      pIStack_8 = (Il2CppMethodPointer)((ulonglong)pIStack_8 & 0xffffffff00000000);
      pvVar6 = (objectTransform->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)objectTransform,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar6,auStack_7);
      pIStack_9._0_4_ = pIStack_8._0_4_;
      pMVar10 = (MethodInfo *)auStack_11;
      pp_Stack_c8 = (_Il2CppFullySharedGenericType **)((ulonglong)(uint)(float)iVar3 << 0x20);
      auStack_11 = auStack_7;
      auStack_7 = auStack_4;
      fStack_12 = 0.0;
      pIStack_8 = (Il2CppMethodPointer)CONCAT44(pIStack_8._4_4_,(float)uStack_5);
      pVVar13 = AvatarCapture_RotatePointAroundPivot((Vector3 *)auStack_4,(Vector3 *)auStack_7,(Vector3 *)pMVar10,(Vector3 *)&pp_Stack_c8,(MethodInfo *)0x0);
      auStack_11 = *(undefined1 (*) [8])pVVar13;
      pIStack_9 = (Il2CppMethodPointer)CONCAT44(pIStack_9._4_4_,pVVar13->z);
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (cameraTransform->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar6);
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_7 = (undefined1  [8])0x0;
      pIStack_8 = (Il2CppMethodPointer)0x0;
      pvVar6 = (objectTransform->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)objectTransform,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar6,auStack_7);
      auStack_11 = auStack_7;
      pIStack_9 = pIStack_8;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles((Vector3 *)auStack_7,(Quaternion *)auStack_11,pMVar10);
      fVar14 = pVVar13->y;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_11 = *(undefined1 (*) [8])&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
      pIStack_9 = (Il2CppMethodPointer)CONCAT44(pIStack_9._4_4_,(TypeInfo__UnityEngine__Vector3->static_fields->upVector).z);
      auStack_4 = (undefined1  [8])0x0;
      uStack_5 = 0;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(fVar14 + 180.0 + (float)iVar3,auStack_11,auStack_4);
      fStack_15 = (float)auStack_4._0_4_;
      fStack_16 = (float)auStack_4._4_4_;
      fStack_17 = (float)uStack_5;
      uStack_18 = uStack_5._4_4_;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (cameraTransform->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar6);
      pMVar10 = UnityEngine__MeshFilter__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshFilter>_bool_____;
      if ((UnityEngine__MeshFilter__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshFilter>_bool_____->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(UnityEngine__MeshFilter__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshFilter>_bool_____);
      }
      pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)objectTransform,(MethodInfo *)0x0);
      if (pGVar19 == (GameObject *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      auStack_7 = (undefined1  [8])UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar19,1,((pMVar10->field7_0x38).rgctx_data)->method);
      uStack_20 = 0;
      if (auStack_7 != (undefined1  [8])0x0) {
        pp_Var20 = ((_Il2CppFullySharedGenericType__Array *)auStack_7)->vector;
        do {
          uVar21 = uStack_20;
          if ((int)*(il2cpp_array_size_t *)((longlong)auStack_7 + 0x18) <= (int)uStack_20) {
            return;
          }
          pp_Stack_c8 = pp_Var20;
          if ((uint)*(il2cpp_array_size_t *)((longlong)auStack_7 + 0x18) <= uStack_20) {
code_?:
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          this_00 = (MeshFilter *)*pp_Var20;
          if (this_00 == (MeshFilter *)0x0) break;
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh(this_00,(MethodInfo *)0x0);
          pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
          if (pGVar19 == (GameObject *)0x0) break;
          this_02 = (Renderer *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1(pGVar19,UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__);
          pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
          if (pGVar19 == (GameObject *)0x0) break;
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar6 = (pGVar19->fields)._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar19,(MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          uVar22 = (*pcRam_?)(pvVar6);
          if ((uVar22 & 2) == 0) {
            submeshIndex = 0;
            lVar23 = 0x20;
            if (this_01 == (Mesh *)0x0) break;
            for (; iVar24 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount(this_01,(MethodInfo *)0x0), pp_Var20 = pp_Stack_c8, uVar21 = uStack_20, (int)submeshIndex < iVar24; submeshIndex = submeshIndex + 1) {
              if ((this_02 == (Renderer *)0x0) || (pMVar25 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials(this_02,(MethodInfo *)0x0), pMVar25 == (Material__Array *)0x0)) goto code_?;
              if ((uint)pMVar25->max_length <= submeshIndex) goto code_?;
              material = *(Material **)((longlong)pMVar25->vector + lVar23 + -0x20);
              this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
              if (this_03 == (Transform *)0x0) goto code_?;
              pMVar26 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix((Matrix4x4 *)&ppIStack_27,this_03,(MethodInfo *)0x0);
              ppIVar28 = *(Il2CppType ***)pMVar26;
              _Var5 = *(_union_154 *)&pMVar26->m20;
              auVar29._0_4_ = pMVar26->m01;
              auVar29._4_4_ = pMVar26->m11;
              auVar29._8_4_ = pMVar26->m21;
              auVar29._12_4_ = pMVar26->m31;
              uVar2._0_4_ = pMVar26->m02;
              uVar2._4_4_ = pMVar26->m12;
              uVar30._0_4_ = pMVar26->m22;
              uVar30._4_4_ = pMVar26->m32;
              uVar31._0_4_ = pMVar26->m03;
              uVar31._4_4_ = pMVar26->m13;
              uVar32._0_4_ = pMVar26->m23;
              uVar32._4_4_ = pMVar26->m33;
              iVar24 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_UXElementSecondary,(MethodInfo *)0x0);
              auStack_4 = (undefined1  [8])(this->fields).renderCam;
              if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                FUN_?();
              }
              ppIStack_27 = ppIVar28;
              _Stack_a0 = _Var5;
              auStack_33 = auVar29;
              uStack_34 = uVar2;
              uStack_35 = uVar30;
              uStack_36 = uVar31;
              uStack_37 = uVar32;
              UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh(this_01,(Matrix4x4 *)&ppIStack_27,material,iVar24,(Camera *)auStack_4,submeshIndex,(MaterialPropertyBlock *)0x0,1,1,0,(MethodInfo *)0x0);
              lVar23 = lVar23 + 8;
            }
          }
          uStack_20 = uVar21 + 1;
          pp_Var20 = pp_Var20 + 1;
        } while( true );
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InitializeCamera() */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_InitializeCamera(AvatarCapture *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RenderTexture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) && (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) && (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) && (pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode, pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    if ((pGVar4->fields).OnReadyScreenShot != (Action *)0x0) {
      pAVar5 = (pGVar4->fields).OnReadyScreenShot;
      (*(pAVar5->fields)._._.invoke_impl)((pAVar5->fields)._._.method_code);
    }
    pCVar6 = (this->fields).renderCam;
    if (pCVar6 != (Camera *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (pCVar6->fields)._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar6,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7,3);
      uStack_10 = 0;
      uStack_11 = 0;
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(&uStack_10);
      this_00 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
      pvVar7 = (void *)0x0;
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_8(this_00,(int32_t)uStack_10,uStack_10._4_4_,0x10,RenderTextureFormat__Enum_ARGB32,RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0);
      pRVar12 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_get_active((MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar13 = pvVar7;
      if (this_00 != (RenderTexture *)0x0) {
        pvVar13 = (this_00->fields)._._.m_CachedPtr;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar13);
      uStack_10 = 0;
      uStack_11 = 0;
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(1,1,&uStack_10,0x3f800000);
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pRVar12 != (RenderTexture *)0x0) {
        pvVar7 = (pRVar12->fields)._._.m_CachedPtr;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7);
      if (this_00 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode((Texture *)this_00,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode((Texture *)this_00,FilterMode__Enum_Trilinear,(MethodInfo *)0x0);
        pCVar6 = (this->fields).renderCam;
        if (pCVar6 != (Camera *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_,this_00,0);
            LOCK();
            UNLOCK();
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pCVar6 == (Camera *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pvVar7 = (pCVar6->fields)._._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar6,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          if (this_00 == (RenderTexture *)0x0) {
            pvVar13 = (void *)0x0;
          }
          else {
            pvVar13 = (this_00->fields)._._.m_CachedPtr;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar7,pvVar13);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_OnDestroy(AvatarCapture *this,MethodInfo *method)

{
  pCVar1 = (this->fields).renderCam;
  if ((pCVar1 != (Camera *)0x0) && (pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture(pCVar1,(MethodInfo *)0x0), pRVar2 != (RenderTexture *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_DiscardContents_1(pRVar2,(MethodInfo *)0x0);
    pCVar1 = (this->fields).renderCam;
    if ((pCVar1 != (Camera *)0x0) && (pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture(pCVar1,(MethodInfo *)0x0), pRVar2 != (RenderTexture *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pRVar2->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      pCVar1 = (this->fields).renderCam;
      if (pCVar1 != (Camera *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
          LOCK();
          UNLOCK();
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pCVar1->fields)._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar3,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Vector3 RotatePointAroundPivot(Vector3, Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarCapture::AvatarCapture_RotatePointAroundPivot(Vector3 *__return_storage_ptr__,Vector3 *point,Vector3 *pivot,Vector3 *angles,MethodInfo *method)

{
  uVar1 = point->x;
  uVar2 = point->y;
  uVar3 = pivot->x;
  uVar4 = pivot->y;
  fVar5 = (float)uVar1 - (float)uVar3;
  fVar6 = point->z - pivot->z;
  fVar7 = (float)uVar2 - (float)uVar4;
  uVar8 = angles->x;
  uVar9 = angles->y;
  fStack_10 = angles->z * 0.017453292;
  uStack_11 = CONCAT44((float)uVar9 * 0.017453292,(float)uVar8 * 0.017453292);
  uStack_12 = 0;
  uStack_13 = 0;
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    pVVar16 = (Vector3 *)(*pcVar14)();
    return pVVar16;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(&uStack_11,&uStack_12);
  fVar17 = uStack_12._4_4_ + uStack_12._4_4_;
  fVar18 = (float)uStack_13 + (float)uStack_13;
  fVar19 = (float)uStack_12 * ((float)uStack_12 + (float)uStack_12);
  fVar20 = uStack_13._4_4_ * ((float)uStack_12 + (float)uStack_12);
  uVar21 = pivot->x;
  uVar22 = pivot->y;
  fVar23 = pivot->z;
  __return_storage_ptr__->x = (1.0 - ((float)uStack_13 * fVar18 + uStack_12._4_4_ * fVar17)) * fVar5 + ((float)uStack_12 * fVar17 - uStack_13._4_4_ * fVar18) * fVar7 + (uStack_13._4_4_ * fVar17 + (float)uStack_12 * fVar18) * fVar6 + (float)uVar21;
  __return_storage_ptr__->y = (1.0 - ((float)uStack_13 * fVar18 + fVar19)) * fVar7 + (uStack_13._4_4_ * fVar18 + (float)uStack_12 * fVar17) * fVar5 + (uStack_12._4_4_ * fVar18 - fVar20) * fVar6 + (float)uVar22;
  __return_storage_ptr__->z = ((float)uStack_12 * fVar18 - uStack_13._4_4_ * fVar17) * fVar5 + (fVar20 + uStack_12._4_4_ * fVar18) * fVar7 + (1.0 - (uStack_12._4_4_ * fVar17 + fVar19)) * fVar6 + fVar23;
  return __return_storage_ptr__;
}


/* AvatarCapture() */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture__ctor(AvatarCapture *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).formationSpacing.x = 2.0;
  (this->fields).formationSpacing.y = 0.6;
  (this->fields).formationSpacing.z = 1.2;
  (this->fields).formationRandomness = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2));
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052af36, ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1), *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0xf;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_19) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_19 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      uStack_18 = 0;
      uStack_19 = 0xf;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar21 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar22 = *puVar21;
            LOCK();
            uVar23 = *puVar21;
            if (uVar22 == uVar23) {
              *puVar21 = uVar22 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar22 != uVar23);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_20 + 1) && (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1], 0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17)))) goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_19 + 1 < 0x1000) || (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1], (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar24._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar24._4_4_ = (pOVar2->_1).cctor_started;
  uVar24 = FUN_?(uVar24);
  FUN_?(uVar24,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

