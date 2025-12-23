
/* Vector3 CalculateTieOffset(Int32, Int32) */

Vector3 * Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CalculateTieOffset
                    (Vector3 *__return_storage_ptr__,AvatarCapture *this,int32_t currentWinner,
                    int32_t amountOfWinners,MethodInfo *method)

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
  __return_storage_ptr__->z = (float)amountOfWinners * _UNK_?;
  if (((amountOfWinners & 1U) == 0) || (currentWinner != 1)) {
    iVar3 = FUN_?((float)(amountOfWinners + 2) * _UNK_?);
    fVar2 = _UNK_?;
    iVar4 = FUN_?(((float)currentWinner - _UNK_?) * _UNK_?);
    fVar5 = ((float)iVar4 + fVar2) * (fVar2 / (float)iVar3) * _UNK_?;
    __return_storage_ptr__->x = fVar5;
    iVar3 = FUN_?(((float)currentWinner - fVar2) * _UNK_?);
    fVar5 = (float)iVar3 + fVar2 + fVar5;
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
    FUN_?(&
                  System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__Add_System__Collections__Generic__List<MVPlayer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AvatarCapture_InitializeCamera(this,(MethodInfo *)0x0);
  this_03 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
             MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    collection = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    pMVar3 = 
    System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
    ;
    if ((
        System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                   );
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
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              (this_04,(IEnumerable_1_System_Object_ *)collection,
               (pMVar3->field7_0x38).rgctx_data[2].method);
    if (this_03 != (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
      FUN_?(this_03,this_04);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__
                      ,this_03,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__)
        ;
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar7 = _UNK_?;
      index = 0;
      pLStack_8 = (List_1_UnityEngine_Vector3_ *)0x0;
      if (this_03 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lStack_9 = 0x20;
      do {
        if ((this_03->fields)._size <= (int)index) {
          return;
        }
        if ((uint)(this_03->fields)._size <= index) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pEVar10 = (this_03->fields)._items;
        if (pEVar10 == (EntryPreProcessor_AllocSize__Array *)0x0) goto code_?;
        if ((uint)pEVar10->max_length <= index) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar11 = *(longlong *)
                  ((longlong)&((EntryPreProcessor_AllocSize__Array *)(pEVar10->vector + -4))->klass
                  + lStack_9);
        if (lVar11 == 0) goto code_?;
        numberOfPositions = *(int32_t *)(lVar11 + 0x18);
        pLVar12 = (List_1_UnityEngine_Vector3_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
        FUN_?(pLVar12,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
        VStack_13.x = (this->fields).formationSpacing.x;
        VStack_13.y = (this->fields).formationSpacing.y;
        VStack_13.z = (this->fields).formationSpacing.z;
        pLStack_8 = pLVar12;
        AvatarCapture_CreateTriangleFormation
                  (this,&pLStack_8,&VStack_13,numberOfPositions,(MethodInfo *)0x0);
        if (pLStack_8 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        FUN_?();
        amountOfWinners = (this_03->fields)._size;
        uVar14 = 0;
        lVar11 = 0;
        while( true ) {
          pLVar12 = pLStack_8;
          if (pLStack_8 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
          uVar15 = (pLStack_8->fields)._size;
          if ((int)uVar15 <= (int)uVar14) break;
          if (uVar15 <= uVar14) goto code_?;
          pVVar16 = (pLStack_8->fields)._items;
          if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
          if ((uint)pVVar16->max_length <= uVar14) goto code_?;
          uVar17 = *(undefined8 *)((longlong)&pVVar16->vector[0].x + lVar11);
          fVar18 = *(float *)((longlong)&pVVar16->vector[0].z + lVar11);
          pVVar19 = AvatarCapture_CalculateTieOffset
                              (&VStack_20,this,index + 1,amountOfWinners,(MethodInfo *)0x0);
          uVar21 = pVVar19->x;
          fVar22 = pVVar19->z;
          if ((uint)(pLVar12->fields)._size <= uVar14) goto code_?;
          pVVar16 = (pLVar12->fields)._items;
          if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
          if ((uint)pVVar16->max_length <= uVar14) goto code_?;
          uVar14 = uVar14 + 1;
          *(ulonglong *)((longlong)&pVVar16->vector[0].x + lVar11) =
               CONCAT44(pVVar19->y + (float)((ulonglong)uVar17 >> 0x20),(float)uVar21 + (float)uVar17
                       );
          *(float *)((longlong)&pVVar16->vector[0].z + lVar11) = fVar22 + fVar18;
          piVar23 = &(pLVar12->fields)._version;
          *piVar23 = *piVar23 + 1;
          lVar11 = lVar11 + 0xc;
        }
        uVar14 = 0;
        if (0 < numberOfPositions) {
          lVar11 = 0;
          do {
            this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            EVar24 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR
                     ::EntryPreProcessor+AllocSize]::
                     List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                               (this_03,index,
                                MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_
                               );
            if ((((EVar24 == (EntryPreProcessor_AllocSize)0x0) ||
                 (lVar25 = FUN_?(EVar24,uVar14), lVar25 == 0)) ||
                ((*(longlong *)(lVar25 + 0x88) == 0 ||
                 ((lVar25 = *(longlong *)(*(longlong *)(lVar25 + 0x88) + 0x10), lVar25 == 0 ||
                  (this_05 == (MVWorldObjectClientManager *)0x0)))))) ||
               (pMVar26 = MVWorldObjectClientManager::
                          MVWorldObjectClientManager_GetWorldObjectClient
                                    (this_05,*(int32_t *)(lVar25 + 0x10),(MethodInfo *)0x0),
               pMVar26 == (MVWorldObjectClient *)0x0)) goto code_?;
            this_01 = (this->fields).renderCam;
            this_02 = (pMVar26->fields).transform;
            if ((this_01 == (Camera *)0x0) ||
               (this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_01,(MethodInfo *)0x0),
               this_02 == (Transform *)0x0)) goto code_?;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_27,this_02,(MethodInfo *)0x0);
            if (this_06 == (Transform *)0x0) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uStack_28._0_4_ = pVVar19->x;
            uStack_28._4_4_ = pVVar19->y;
            fStack_29 = pVVar19->z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_28);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_30,this_06,(MethodInfo *)0x0);
            uVar31 = pVVar19->x;
            uVar32 = pVVar19->y;
            fVar18 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                (&VStack_33,this_02,(MethodInfo *)0x0);
            fVar22 = (this->fields).cameraOffset.x;
            uVar34 = pVVar19->x;
            fStack_35 = pVVar19->z * fVar22 + fVar18;
            uStack_36 = CONCAT44(fVar22 * pVVar19->y + (float)uVar32,
                                  (float)uVar34 * fVar22 + (float)uVar31);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_36);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_37,this_06,(MethodInfo *)0x0);
            uStack_38._0_4_ = pVVar19->x;
            uStack_38._4_4_ = pVVar19->y;
            fVar22 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                (&VStack_39,this_02,(MethodInfo *)0x0);
            if (pLStack_8 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if ((uint)(pLStack_8->fields)._size <= uVar14) goto code_?;
            pVVar16 = (pLStack_8->fields)._items;
            if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar16->max_length <= uVar14) goto code_?;
            uVar40 = pVVar19->x;
            uVar41 = pVVar19->y;
            fVar18 = (float)((uint)*(undefined8 *)((longlong)&pVVar16->vector[0].x + lVar11) ^
                            uVar7);
            fStack_42 = fVar18 * pVVar19->z + fVar22;
            uStack_43 = CONCAT44(fVar18 * (float)uVar41 + uStack_38._4_4_,
                                  fVar18 * (float)uVar40 + (float)uStack_38);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_43);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_44,this_06,(MethodInfo *)0x0);
            uVar45 = pVVar19->x;
            uVar46 = pVVar19->y;
            fVar22 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                (&VStack_47,this_02,(MethodInfo *)0x0);
            fVar18 = (float)((uint)(this->fields).cameraOffset.z ^ uVar7);
            uVar48 = pVVar19->x;
            uVar49 = pVVar19->y;
            fStack_50 = fVar18 * pVVar19->z + fVar22;
            uStack_51 = CONCAT44(fVar18 * (float)uVar49 + (float)uVar46,
                                  fVar18 * (float)uVar48 + (float)uVar45);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_51);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_52,this_06,(MethodInfo *)0x0);
            uStack_53._0_4_ = pVVar19->x;
            uStack_53._4_4_ = pVVar19->y;
            fVar22 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                (&VStack_54,this_02,(MethodInfo *)0x0);
            if (pLStack_8 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if ((uint)(pLStack_8->fields)._size <= uVar14) goto code_?;
            pVVar16 = (pLStack_8->fields)._items;
            if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar16->max_length <= uVar14) goto code_?;
            uVar55 = pVVar19->x;
            uVar56 = pVVar19->y;
            fVar18 = (float)(*(uint *)((longlong)&pVVar16->vector[0].z + lVar11) ^ uVar7);
            fStack_57 = fVar18 * pVVar19->z + fVar22;
            uStack_58 = CONCAT44(fVar18 * (float)uVar56 + uStack_53._4_4_,
                                  fVar18 * (float)uVar55 + (float)uStack_53);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_58);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_59,this_06,(MethodInfo *)0x0);
            uVar60 = pVVar19->x;
            uVar61 = pVVar19->y;
            fVar18 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                (&VStack_62,this_02,(MethodInfo *)0x0);
            fVar22 = (this->fields).cameraOffset.y;
            uVar63 = pVVar19->x;
            uVar64 = pVVar19->y;
            fStack_65 = fVar22 * pVVar19->z + fVar18;
            uStack_66 = CONCAT44(fVar22 * (float)uVar64 + (float)uVar61,
                                  fVar22 * (float)uVar63 + (float)uVar60);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_66);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_67,this_06,(MethodInfo *)0x0);
            uStack_68._0_4_ = pVVar19->x;
            uStack_68._4_4_ = pVVar19->y;
            fVar22 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                (aVStack_69,this_02,(MethodInfo *)0x0);
            if (pLStack_8 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if ((uint)(pLStack_8->fields)._size <= uVar14) goto code_?;
            pVVar16 = (pLStack_8->fields)._items;
            if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar16->max_length <= uVar14) goto code_?;
            uVar70 = pVVar19->x;
            uVar71 = pVVar19->y;
            fVar18 = (float)((ulonglong)*(undefined8 *)((longlong)&pVVar16->vector[0].x + lVar11) >>
                            0x20);
            fStack_72 = fVar18 * pVVar19->z + fVar22;
            uStack_73 = CONCAT44(fVar18 * (float)uVar71 + uStack_68._4_4_,
                                  fVar18 * (float)uVar70 + (float)uStack_68);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar6 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar6,&uStack_73);
            coroutine = AvatarCapture_DrawAvatarRoutine(this,this_06,this_02,(MethodInfo *)0x0);
            Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
            uVar14 = uVar14 + 1;
            lVar11 = lVar11 + 0xc;
          } while ((int)uVar14 < numberOfPositions);
        }
        index = index + 1;
        lStack_9 = lStack_9 + 8;
      } while( true );
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CapturePlayer(List`1[MVPlayer]) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CapturePlayer
               (AvatarCapture *this,List_1_MVPlayer_ *players,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
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
    pLVar2 = (List_1_UnityEngine_Vector3_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(pLVar2,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    VStack_3.x = (this->fields).formationSpacing.x;
    VStack_3.y = (this->fields).formationSpacing.y;
    VStack_3.z = (this->fields).formationSpacing.z;
    apLStackX_10[0] = pLVar2;
    AvatarCapture_CreateTriangleFormation(this,apLStackX_10,&VStack_3,iVar1,(MethodInfo *)0x0);
    if (apLStackX_10[0] != (List_1_UnityEngine_Vector3_ *)0x0) {
      FUN_?();
      uVar4 = _UNK_?;
      uVar5 = 0;
      lVar6 = 0;
      while( true ) {
        if ((players->fields)._size <= (int)uVar5) {
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar7 == (MVGameControllerBase *)0x0) ||
           (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) break;
        if ((pMVar8->fields).worldNetwork == (WorldNetwork *)0x0) {
          pMVar9 = (MVWorldObjectClientManagerNetwork *)0x0;
        }
        else {
          pMVar9 = (((pMVar8->fields).worldNetwork)->fields)._.worldObjectClientManager;
        }
        if ((uint)(players->fields)._size <= uVar5) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pMVar11 = (players->fields)._items;
        if (pMVar11 == (MVPlayer__Array *)0x0) break;
        if ((uint)pMVar11->max_length <= uVar5) {
code_?:
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((((pMVar11->vector[lVar6] == (MVPlayer *)0x0) ||
             (pSVar12 = (pMVar11->vector[lVar6]->fields).spawnRolesManager,
             pSVar12 == (SpawnRolesManager *)0x0)) ||
            (pSVar13 = (pSVar12->fields).spawnRolesRuntimeData,
            pSVar13 == (SpawnRolesRuntimeData *)0x0)) ||
           (iVar1 = (pSVar13->fields).activeSpawnRole,
           pMVar9 == (MVWorldObjectClientManagerNetwork *)0x0)) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pMVar9->fields)._.worldObjects;
        pOStackX_20 = (Object *)0x0;
        if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar1,&pOStackX_20,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        if (pOStackX_20 == (Object *)0x0) break;
        obj = (this->fields).renderCam;
        this_01 = (Transform *)pOStackX_20[0xd].monitor;
        if (obj == (Camera *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        pvVar14 = (void *)(*pcRam_?)(pvVar14);
        cameraTransform =
             (Transform *)
             UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
             Unmarshal_UnmarshalUnityObject
                       (pvVar14,
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
        if (this_01 == (Transform *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_3.x = 0.0;
        VStack_3.y = 0.0;
        VStack_3.z = 0.0;
        pvVar14 = (this_01->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14);
        if (cameraTransform == (Transform *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        VStack_16.x = VStack_3.x;
        VStack_16.y = VStack_3.y;
        VStack_16.z = VStack_3.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_17 = 0;
        fStack_18 = 0.0;
        pvVar14 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14,&uStack_17);
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (&VStack_20,this_01,(MethodInfo *)0x0);
        fVar21 = (this->fields).cameraOffset.x;
        uVar22 = pVVar19->x;
        uVar23 = pVVar19->y;
        fStack_24 = fVar21 * pVVar19->z + fStack_18;
        uStack_25 = CONCAT44(fVar21 * (float)uVar23 + uStack_17._4_4_,
                              fVar21 * (float)uVar22 + (float)uStack_17);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_26 = 0;
        fStack_27 = 0.0;
        pvVar14 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14,&uStack_26);
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (&VStack_28,this_01,(MethodInfo *)0x0);
        if (apLStackX_10[0] == (List_1_UnityEngine_Vector3_ *)0x0) break;
        if ((uint)(apLStackX_10[0]->fields)._size <= uVar5) goto code_?;
        pVVar29 = (apLStackX_10[0]->fields)._items;
        if (pVVar29 == (Vector3__Array *)0x0) break;
        if ((uint)pVVar29->max_length <= uVar5) goto code_?;
        uVar30 = pVVar19->x;
        uVar31 = pVVar19->y;
        uVar32 = pVVar29->vector[lVar6].x;
        fVar21 = (float)(uVar32 ^ uVar4);
        fStack_33 = fVar21 * pVVar19->z + fStack_27;
        uStack_34 = CONCAT44(fVar21 * (float)uVar31 + uStack_26._4_4_,
                             fVar21 * (float)uVar30 + (float)uStack_26);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_35 = 0;
        fStack_36 = 0.0;
        pvVar14 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14,&uStack_35);
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (&VStack_37,this_01,(MethodInfo *)0x0);
        fVar21 = (float)((uint)(this->fields).cameraOffset.z ^ uVar4);
        uVar38 = pVVar19->x;
        uVar39 = pVVar19->y;
        fStack_40 = fVar21 * pVVar19->z + fStack_36;
        uStack_41 = CONCAT44(fVar21 * (float)uVar39 + uStack_35._4_4_,
                             fVar21 * (float)uVar38 + (float)uStack_35);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_42 = 0;
        fStack_43 = 0.0;
        pvVar14 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14,&uStack_42);
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (&VStack_44,this_01,(MethodInfo *)0x0);
        if (apLStackX_10[0] == (List_1_UnityEngine_Vector3_ *)0x0) break;
        if ((uint)(apLStackX_10[0]->fields)._size <= uVar5) goto code_?;
        pVVar29 = (apLStackX_10[0]->fields)._items;
        if (pVVar29 == (Vector3__Array *)0x0) break;
        if ((uint)pVVar29->max_length <= uVar5) goto code_?;
        uVar45 = pVVar19->x;
        uVar46 = pVVar19->y;
        fVar21 = (float)((uint)pVVar29->vector[lVar6].z ^ uVar4);
        fStack_47 = fVar21 * pVVar19->z + fStack_43;
        uStack_48 = CONCAT44(fVar21 * (float)uVar46 + uStack_42._4_4_,
                             fVar21 * (float)uVar45 + (float)uStack_42);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_49 = 0;
        fStack_50 = 0.0;
        pvVar14 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14,&uStack_49);
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (&VStack_51,this_01,(MethodInfo *)0x0);
        fVar21 = (this->fields).cameraOffset.y;
        uVar52 = pVVar19->x;
        uVar53 = pVVar19->y;
        fStack_54 = fVar21 * pVVar19->z + fStack_50;
        uStack_55 = CONCAT44(fVar21 * (float)uVar53 + uStack_49._4_4_,
                             fVar21 * (float)uVar52 + (float)uStack_49);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_56 = 0;
        fStack_57 = 0.0;
        pvVar14 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14,&uStack_56);
        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (aVStack_58,this_01,(MethodInfo *)0x0);
        if (apLStackX_10[0] == (List_1_UnityEngine_Vector3_ *)0x0) break;
        if ((uint)(apLStackX_10[0]->fields)._size <= uVar5) goto code_?;
        pVVar29 = (apLStackX_10[0]->fields)._items;
        if (pVVar29 == (Vector3__Array *)0x0) break;
        if ((uint)pVVar29->max_length <= uVar5) goto code_?;
        uVar59 = pVVar19->x;
        uVar60 = pVVar19->y;
        uVar61 = pVVar29->vector[lVar6].y;
        fStack_62 = (float)uVar61 * pVVar19->z + fStack_57;
        uStack_63 = CONCAT44((float)uVar61 * (float)uVar60 + uStack_56._4_4_,
                             (float)uVar61 * (float)uVar59 + (float)uStack_56);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (cameraTransform->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar15 = func_?(&UNK_?);
          FUN_?(uVar15,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar14,&uStack_63);
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
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  (this_02,routine,(MethodInfo *)0x0);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void CapturePlayerGroup(List`1[List`1[MVPlayer]]) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CapturePlayerGroup
               (AvatarCapture *this,List_1_List_1_MVPlayer_ *sortedList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  index = 0;
  pLStack_2 = (List_1_UnityEngine_Vector3_ *)0x0;
  if (sortedList == (List_1_List_1_MVPlayer_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lStack_4 = 0x20;
  do {
    if ((sortedList->fields)._size <= (int)index) {
      return;
    }
    if ((uint)(sortedList->fields)._size <= index) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pLVar5 = (sortedList->fields)._items;
    if (pLVar5 == (List_1_MVPlayer___Array *)0x0) goto code_?;
    if ((uint)pLVar5->max_length <= index) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar6 = *(longlong *)((longlong)pLVar5->vector + lStack_4 + -0x20);
    if (lVar6 == 0) goto code_?;
    numberOfPositions = *(int32_t *)(lVar6 + 0x18);
    pLVar7 = (List_1_UnityEngine_Vector3_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    FUN_?(pLVar7,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    VStack_8.x = (this->fields).formationSpacing.x;
    VStack_8.y = (this->fields).formationSpacing.y;
    VStack_8.z = (this->fields).formationSpacing.z;
    pLStack_2 = pLVar7;
    AvatarCapture_CreateTriangleFormation
              (this,&pLStack_2,&VStack_8,numberOfPositions,(MethodInfo *)0x0);
    if (pLStack_2 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    FUN_?();
    amountOfWinners = (sortedList->fields)._size;
    uVar9 = 0;
    lVar6 = 0;
    while( true ) {
      pLVar7 = pLStack_2;
      if (pLStack_2 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      uVar10 = (pLStack_2->fields)._size;
      if ((int)uVar10 <= (int)uVar9) break;
      if (uVar10 <= uVar9) goto code_?;
      pVVar11 = (pLStack_2->fields)._items;
      if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar11->max_length <= uVar9) goto code_?;
      uVar12 = *(undefined8 *)((longlong)&pVVar11->vector[0].x + lVar6);
      fVar13 = *(float *)((longlong)&pVVar11->vector[0].z + lVar6);
      pVVar14 = AvatarCapture_CalculateTieOffset
                          (&VStack_15,this,index + 1,amountOfWinners,(MethodInfo *)0x0);
      uVar16 = pVVar14->x;
      fVar17 = pVVar14->z;
      if ((uint)(pLVar7->fields)._size <= uVar9) goto code_?;
      pVVar11 = (pLVar7->fields)._items;
      if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar11->max_length <= uVar9) goto code_?;
      uVar9 = uVar9 + 1;
      *(ulonglong *)((longlong)&pVVar11->vector[0].x + lVar6) =
           CONCAT44(pVVar14->y + (float)((ulonglong)uVar12 >> 0x20),(float)uVar16 + (float)uVar12);
      *(float *)((longlong)&pVVar11->vector[0].z + lVar6) = fVar17 + fVar13;
      piVar18 = &(pLVar7->fields)._version;
      *piVar18 = *piVar18 + 1;
      lVar6 = lVar6 + 0xc;
    }
    uVar9 = 0;
    if (0 < numberOfPositions) {
      lVar6 = 0;
      do {
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        EVar19 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                 EntryPreProcessor+AllocSize]::
                 List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                           ((List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                            sortedList,index,
                            MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_
                           );
        if (((((EVar19 == (EntryPreProcessor_AllocSize)0x0) ||
              (lVar20 = FUN_?(EVar19,uVar9), lVar20 == 0)) ||
             (*(longlong *)(lVar20 + 0x88) == 0)) ||
            ((lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x88) + 0x10), lVar20 == 0 ||
             (this_02 == (MVWorldObjectClientManager *)0x0)))) ||
           (pMVar21 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                (this_02,*(int32_t *)(lVar20 + 0x10),(MethodInfo *)0x0),
           pMVar21 == (MVWorldObjectClient *)0x0)) goto code_?;
        this_00 = (this->fields).renderCam;
        this_01 = (pMVar21->fields).transform;
        if ((this_00 == (Camera *)0x0) ||
           (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0),
           this_01 == (Transform *)0x0)) goto code_?;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_22,this_01,(MethodInfo *)0x0);
        if (this_03 == (Transform *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uStack_23._0_4_ = pVVar14->x;
        uStack_23._4_4_ = pVVar14->y;
        fStack_24 = pVVar14->z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar25 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar25 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar25,&uStack_23);
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_26,this_03,(MethodInfo *)0x0);
        uVar27 = pVVar14->x;
        uVar28 = pVVar14->y;
        fVar13 = pVVar14->z;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (&VStack_29,this_01,(MethodInfo *)0x0);
        fVar17 = (this->fields).cameraOffset.x;
        uVar30 = pVVar14->x;
        fStack_31 = pVVar14->z * fVar17 + fVar13;
        uStack_32 = CONCAT44(fVar17 * pVVar14->y + (float)uVar28,(float)uVar30 * fVar17 + (float)uVar27
                             );
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar25 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar25 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar25,&uStack_32);
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_33,this_03,(MethodInfo *)0x0);
        uStack_34._0_4_ = pVVar14->x;
        uStack_34._4_4_ = pVVar14->y;
        fVar17 = pVVar14->z;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (&VStack_35,this_01,(MethodInfo *)0x0);
        if (pLStack_2 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        if ((uint)(pLStack_2->fields)._size <= uVar9) goto code_?;
        pVVar11 = (pLStack_2->fields)._items;
        if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar11->max_length <= uVar9) goto code_?;
        uVar36 = pVVar14->x;
        uVar37 = pVVar14->y;
        fVar13 = (float)((uint)*(undefined8 *)((longlong)&pVVar11->vector[0].x + lVar6) ^ uVar1);
        fStack_38 = fVar13 * pVVar14->z + fVar17;
        uStack_39 = CONCAT44(fVar13 * (float)uVar37 + uStack_34._4_4_,
                              fVar13 * (float)uVar36 + (float)uStack_34);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar25 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar25 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar25,&uStack_39);
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_40,this_03,(MethodInfo *)0x0);
        uVar41 = pVVar14->x;
        uVar42 = pVVar14->y;
        fVar17 = pVVar14->z;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (&VStack_43,this_01,(MethodInfo *)0x0);
        fVar13 = (float)((uint)(this->fields).cameraOffset.z ^ uVar1);
        uVar44 = pVVar14->x;
        uVar45 = pVVar14->y;
        fStack_46 = fVar13 * pVVar14->z + fVar17;
        uStack_47 = CONCAT44(fVar13 * (float)uVar45 + (float)uVar42,
                              fVar13 * (float)uVar44 + (float)uVar41);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar25 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar25 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar25,&uStack_47);
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_48,this_03,(MethodInfo *)0x0);
        uStack_49._0_4_ = pVVar14->x;
        uStack_49._4_4_ = pVVar14->y;
        fVar17 = pVVar14->z;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (&VStack_50,this_01,(MethodInfo *)0x0);
        if (pLStack_2 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        if ((uint)(pLStack_2->fields)._size <= uVar9) goto code_?;
        pVVar11 = (pLStack_2->fields)._items;
        if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar11->max_length <= uVar9) goto code_?;
        uVar51 = pVVar14->x;
        uVar52 = pVVar14->y;
        fVar13 = (float)(*(uint *)((longlong)&pVVar11->vector[0].z + lVar6) ^ uVar1);
        fStack_53 = fVar13 * pVVar14->z + fVar17;
        uStack_54 = CONCAT44(fVar13 * (float)uVar52 + uStack_49._4_4_,
                              fVar13 * (float)uVar51 + (float)uStack_49);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar25 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar25 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar25,&uStack_54);
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_55,this_03,(MethodInfo *)0x0);
        uVar56 = pVVar14->x;
        uVar57 = pVVar14->y;
        fVar13 = pVVar14->z;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (&VStack_58,this_01,(MethodInfo *)0x0);
        fVar17 = (this->fields).cameraOffset.y;
        uVar59 = pVVar14->x;
        uVar60 = pVVar14->y;
        fStack_61 = fVar17 * pVVar14->z + fVar13;
        uStack_62 = CONCAT44(fVar17 * (float)uVar60 + (float)uVar57,
                              fVar17 * (float)uVar59 + (float)uVar56);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar25 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar25 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar25,&uStack_62);
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_63,this_03,(MethodInfo *)0x0);
        uStack_64._0_4_ = pVVar14->x;
        uStack_64._4_4_ = pVVar14->y;
        fVar17 = pVVar14->z;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (aVStack_65,this_01,(MethodInfo *)0x0);
        if (pLStack_2 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        if ((uint)(pLStack_2->fields)._size <= uVar9) goto code_?;
        pVVar11 = (pLStack_2->fields)._items;
        if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar11->max_length <= uVar9) goto code_?;
        uVar66 = pVVar14->x;
        uVar67 = pVVar14->y;
        fVar13 = (float)((ulonglong)*(undefined8 *)((longlong)&pVVar11->vector[0].x + lVar6) >>
                        0x20);
        fStack_68 = fVar13 * pVVar14->z + fVar17;
        uStack_69 = CONCAT44(fVar13 * (float)uVar67 + uStack_64._4_4_,
                              fVar13 * (float)uVar66 + (float)uStack_64);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar25 = (this_03->fields)._._.m_CachedPtr;
        if (pvVar25 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar25,&uStack_69);
        coroutine = AvatarCapture_DrawAvatarRoutine(this,this_03,this_01,(MethodInfo *)0x0);
        Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 0xc;
      } while ((int)uVar9 < numberOfPositions);
    }
    index = index + 1;
    lStack_4 = lStack_4 + 8;
  } while( true );
}


/* Void CapturePlayersInTeam(List`1[ScoreTeamEntry], GameStatCounterType) */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CapturePlayersInTeam
               (AvatarCapture *this,List_1_ScoreTeamEntry_ *scoreTeamEntries,
               GameStatCounterType__Enum counterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Linq__IOrderedEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__OrderBy<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<MVPlayer,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__Add_System__Collections__Generic__List<MVPlayer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarCapture____c__DisplayClass8_0___CapturePlayersInTeam_b__0_MVPlayer_
                 );
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
    this_03 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>
                           );
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__List__
              );
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
        if ((pMVar3 == (MVGameControllerBase *)0x0) ||
           (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0))
        goto code_?;
        if ((uint)(scoreTeamEntries->fields)._size <= uVar1) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
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
        if ((lVar7 == 0) ||
           (this_00 = (pMVar4->fields).teamManager, this_00 == (MVTeamManager *)0x0))
        goto code_?;
        source = MVTeamManager::MVTeamManager_GetPlayersInTeam
                           (this_00,*(MVTeam__Enum *)(lVar7 + 0x10),(MethodInfo *)0x0);
        this_04 = (Func_2_Object_Int32_ *)object[1].monitor;
        if (this_04 == (Func_2_Object_Int32_ *)0x0) {
          this_04 = (Func_2_Object_Int32_ *)FUN_?(TypeInfo__System__Func<MVPlayer,_int>);
          mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
                    ((Func_2_Object_Int32Enum_ *)this_04,object,
                     MethodInfo__AvatarCapture____c__DisplayClass8_0___CapturePlayersInTeam_b__0_MVPlayer_
                     ,(MethodInfo *)0x0);
          object[1].monitor = (MonitorData *)this_04;
          func_?(&object[1].monitor);
        }
        pIVar8 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_5
                            ((IEnumerable_1_System_Object_ *)source,this_04,
                             System__Linq__IOrderedEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__OrderBy<MVPlayer,_int>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_int>_
                            );
        uVar9 = FUN_?(pIVar8);
        if (this_03 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0)
        goto code_?;
        FUN_?(this_03,uVar9);
        lVar2 = lVar2 + 8;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Reverse__
                      ,this_03,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__)
        ;
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar1 = _UNK_?;
      index = 0;
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
        if ((this_03->fields)._size <= (int)index) {
          return;
        }
        if ((uint)(this_03->fields)._size <= index) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pEVar12 = (this_03->fields)._items;
        if (pEVar12 == (EntryPreProcessor_AllocSize__Array *)0x0) goto code_?;
        if ((uint)pEVar12->max_length <= index) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar2 = *(longlong *)
                  ((longlong)&((EntryPreProcessor_AllocSize__Array *)(pEVar12->vector + -4))->klass
                  + lStack_11);
        if (lVar2 == 0) goto code_?;
        numberOfPositions = *(int32_t *)(lVar2 + 0x18);
        pLVar13 = (List_1_UnityEngine_Vector3_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
        FUN_?(pLVar13,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
        VStack_14.x = (this->fields).formationSpacing.x;
        VStack_14.y = (this->fields).formationSpacing.y;
        VStack_14.z = (this->fields).formationSpacing.z;
        pLStack_10 = pLVar13;
        AvatarCapture_CreateTriangleFormation
                  (this,&pLStack_10,&VStack_14,numberOfPositions,(MethodInfo *)0x0);
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
          pVVar19 = AvatarCapture_CalculateTieOffset
                              (&VStack_20,this,index + 1,amountOfWinners,(MethodInfo *)0x0);
          uVar21 = pVVar19->x;
          fVar22 = pVVar19->z;
          if ((uint)(pLVar13->fields)._size <= uVar15) goto code_?;
          pVVar17 = (pLVar13->fields)._items;
          if (pVVar17 == (Vector3__Array *)0x0) goto code_?;
          if ((uint)pVVar17->max_length <= uVar15) goto code_?;
          uVar15 = uVar15 + 1;
          *(ulonglong *)((longlong)&pVVar17->vector[0].x + lVar2) =
               CONCAT44(pVVar19->y + (float)((ulonglong)uVar9 >> 0x20),(float)uVar21 + (float)uVar9
                       );
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
            EVar24 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR
                     ::EntryPreProcessor+AllocSize]::
                     List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                               (this_03,index,
                                MethodInfo__System__Collections__Generic__List<System::Collections::Generic::List<MVPlayer>_>__get_Item_int_
                               );
            if (((((EVar24 == (EntryPreProcessor_AllocSize)0x0) ||
                  (lVar7 = FUN_?(EVar24,uVar15), lVar7 == 0)) ||
                 (*(longlong *)(lVar7 + 0x88) == 0)) ||
                ((lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x88) + 0x10), lVar7 == 0 ||
                 (this_05 == (MVWorldObjectClientManager *)0x0)))) ||
               (pMVar25 = MVWorldObjectClientManager::
                          MVWorldObjectClientManager_GetWorldObjectClient
                                    (this_05,*(int32_t *)(lVar7 + 0x10),(MethodInfo *)0x0),
               pMVar25 == (MVWorldObjectClient *)0x0)) goto code_?;
            this_01 = (this->fields).renderCam;
            this_02 = (pMVar25->fields).transform;
            if ((this_01 == (Camera *)0x0) ||
               (this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_01,(MethodInfo *)0x0),
               this_02 == (Transform *)0x0)) goto code_?;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_26,this_02,(MethodInfo *)0x0);
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
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar29,&uStack_27);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_30,this_06,(MethodInfo *)0x0);
            uVar31 = pVVar19->x;
            uVar32 = pVVar19->y;
            fVar18 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                (&VStack_33,this_02,(MethodInfo *)0x0);
            fVar22 = (this->fields).cameraOffset.x;
            uVar34 = pVVar19->x;
            fStack_35 = pVVar19->z * fVar22 + fVar18;
            uStack_36 = CONCAT44(fVar22 * pVVar19->y + (float)uVar32,
                                  (float)uVar34 * fVar22 + (float)uVar31);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar29,&uStack_36);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_37,this_06,(MethodInfo *)0x0);
            uStack_38._0_4_ = pVVar19->x;
            uStack_38._4_4_ = pVVar19->y;
            fVar22 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                (&VStack_39,this_02,(MethodInfo *)0x0);
            if (pLStack_10 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if ((uint)(pLStack_10->fields)._size <= uVar15) goto code_?;
            pVVar17 = (pLStack_10->fields)._items;
            if (pVVar17 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar17->max_length <= uVar15) goto code_?;
            uVar40 = pVVar19->x;
            uVar41 = pVVar19->y;
            fVar18 = (float)((uint)*(undefined8 *)((longlong)&pVVar17->vector[0].x + lVar2) ^
                            uVar1);
            fStack_42 = fVar18 * pVVar19->z + fVar22;
            uStack_43 = CONCAT44(fVar18 * (float)uVar41 + uStack_38._4_4_,
                                  fVar18 * (float)uVar40 + (float)uStack_38);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar29,&uStack_43);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_44,this_06,(MethodInfo *)0x0);
            uVar45 = pVVar19->x;
            uVar46 = pVVar19->y;
            fVar22 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                (&VStack_47,this_02,(MethodInfo *)0x0);
            fVar18 = (float)((uint)(this->fields).cameraOffset.z ^ uVar1);
            uVar48 = pVVar19->x;
            uVar49 = pVVar19->y;
            fStack_50 = fVar18 * pVVar19->z + fVar22;
            uStack_51 = CONCAT44(fVar18 * (float)uVar49 + (float)uVar46,
                                  fVar18 * (float)uVar48 + (float)uVar45);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar29,&uStack_51);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_52,this_06,(MethodInfo *)0x0);
            uStack_53._0_4_ = pVVar19->x;
            uStack_53._4_4_ = pVVar19->y;
            fVar22 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                (&VStack_54,this_02,(MethodInfo *)0x0);
            if (pLStack_10 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if ((uint)(pLStack_10->fields)._size <= uVar15) goto code_?;
            pVVar17 = (pLStack_10->fields)._items;
            if (pVVar17 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar17->max_length <= uVar15) goto code_?;
            uVar55 = pVVar19->x;
            uVar56 = pVVar19->y;
            fVar18 = (float)(*(uint *)((longlong)&pVVar17->vector[0].z + lVar2) ^ uVar1);
            fStack_57 = fVar18 * pVVar19->z + fVar22;
            uStack_58 = CONCAT44(fVar18 * (float)uVar56 + uStack_53._4_4_,
                                  fVar18 * (float)uVar55 + (float)uStack_53);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar29,&uStack_58);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_59,this_06,(MethodInfo *)0x0);
            uVar60 = pVVar19->x;
            uVar61 = pVVar19->y;
            fVar18 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                (&VStack_62,this_02,(MethodInfo *)0x0);
            fVar22 = (this->fields).cameraOffset.y;
            uVar63 = pVVar19->x;
            uVar64 = pVVar19->y;
            fStack_65 = fVar22 * pVVar19->z + fVar18;
            uStack_66 = CONCAT44(fVar22 * (float)uVar64 + (float)uVar61,
                                  fVar22 * (float)uVar63 + (float)uVar60);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar29,&uStack_66);
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_67,this_06,(MethodInfo *)0x0);
            uStack_68._0_4_ = pVVar19->x;
            uStack_68._4_4_ = pVVar19->y;
            fVar22 = pVVar19->z;
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                (aVStack_69,this_02,(MethodInfo *)0x0);
            if (pLStack_10 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
            if ((uint)(pLStack_10->fields)._size <= uVar15) goto code_?;
            pVVar17 = (pLStack_10->fields)._items;
            if (pVVar17 == (Vector3__Array *)0x0) goto code_?;
            if ((uint)pVVar17->max_length <= uVar15) goto code_?;
            uVar70 = pVVar19->x;
            uVar71 = pVVar19->y;
            fVar18 = (float)((ulonglong)*(undefined8 *)((longlong)&pVVar17->vector[0].x + lVar2) >>
                            0x20);
            fStack_72 = fVar18 * pVVar19->z + fVar22;
            uStack_73 = CONCAT44(fVar18 * (float)uVar71 + uStack_68._4_4_,
                                  fVar18 * (float)uVar70 + (float)uStack_68);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar29 = (this_06->fields)._._.m_CachedPtr;
            if (pvVar29 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this_06,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
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
        index = index + 1;
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

int32_t Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CreateTriangleFormation
                  (AvatarCapture *this,List_1_UnityEngine_Vector3_ **positions,
                  Vector3 *formationSpacing,int32_t numberOfPositions,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
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
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this_00,&PStack_7,pMVar1->klass->rgctx_data[0xe].method);
      }
      if (1 < numberOfPositions) {
        PStack_7.Quadrant = (int32_t)formationSpacing->x;
        PStack_7.FirstAxisSign = (int32_t)formationSpacing->y;
        PStack_7.SecondAxisSign = (int32_t)formationSpacing->z;
        numberOfPositions =
             AvatarCapture_CreateTriangleFormation_1
                       (this,positions,(Vector3 *)&PStack_7,numberOfPositions + -1,2,
                        (float)((uint)formationSpacing->y ^ _UNK_?),
                        (float)((uint)formationSpacing->z ^ _UNK_?),(MethodInfo *)0x0);
      }
      return numberOfPositions;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Int32 CreateTriangleFormation(List`1[UnityEngine.Vector3] ByRef, Vector3, Int32, Int32, Single,
   Single) */

int32_t Assembly-CSharp.dll::AvatarCapture::AvatarCapture_CreateTriangleFormation_1
                  (AvatarCapture *this,List_1_UnityEngine_Vector3_ **positions,
                  Vector3 *formationSpacing,int32_t positionsRemaining,int32_t unitsThisRow,
                  float targetY,float targetZ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  iVar2 = 0;
  if (0 < unitsThisRow) {
    fVar3 = formationSpacing->x;
    fVar4 = (float)unitsThisRow * _UNK_? - _UNK_?;
    iVar5 = positionsRemaining;
    do {
      iVar5 = iVar5 + -1;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                         ((float)((uint)(this->fields).formationRandomness ^ uVar1),
                          (this->fields).formationRandomness,(MethodInfo *)0x0);
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
      ;
      this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)*positions;
      uVar8._0_4_ = (fVar6 + (fVar4 - (float)iVar2)) * fVar3;
      if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        iVar10 = (*pcVar9)();
        return iVar10;
      }
      piVar11 = &(this_00->fields)._version;
      *piVar11 = *piVar11 + 1;
      pPVar12 = (this_00->fields)._items;
      if (pPVar12 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
      uVar13 = (this_00->fields)._size;
      if (uVar13 < (uint)pPVar12->max_length) {
        (this_00->fields)._size = uVar13 + 1;
        if ((uint)pPVar12->max_length <= uVar13) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          iVar10 = (*pcVar9)();
          return iVar10;
        }
        pPVar12->vector[(int)uVar13].Quadrant = (int32_t)(float)uVar8;
        pPVar12->vector[(int)uVar13].FirstAxisSign = (int32_t)targetY;
        pPVar12->vector[(int)uVar13].SecondAxisSign = (int32_t)targetZ;
      }
      else {
        uVar8._4_4_ = (int32_t)targetY;
        aPStack_14[0].SecondAxisSign = (int32_t)targetZ;
        aPStack_14[0]._0_8_ = uVar8;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this_00,aPStack_14,pMVar7->klass->rgctx_data[0xe].method);
      }
      if (iVar5 < 1) {
        return unitsThisRow;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < unitsThisRow);
  }
  aPStack_14[0].SecondAxisSign = (int32_t)formationSpacing->z;
  aPStack_14[0].Quadrant = (int32_t)formationSpacing->x;
  aPStack_14[0].FirstAxisSign = (int32_t)formationSpacing->y;
  iVar10 = AvatarCapture_CreateTriangleFormation_1
                    (this,positions,(Vector3 *)aPStack_14,positionsRemaining - unitsThisRow,
                     unitsThisRow + 1,targetY - formationSpacing->y,targetZ - formationSpacing->z,
                     (MethodInfo *)0x0);
  return iVar10;
}


/* IEnumerator DrawAvatarRoutine(Transform, Transform) */

IEnumerator *
Assembly-CSharp.dll::AvatarCapture::AvatarCapture_DrawAvatarRoutine
          (AvatarCapture *this,Transform *cameraTransform,Transform *objectTransform,
          MethodInfo *method)

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

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_DrawObject
               (AvatarCapture *this,Transform *cameraTransform,Transform *objectTransform,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshFilter>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                 );
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
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
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
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_4 = (undefined1  [8])0x0;
    uStack_5 = uStack_5 & 0xffffffff00000000;
    pvVar6 = (cameraTransform->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
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
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_7 = (undefined1  [8])0x0;
      pIStack_8 = (Il2CppMethodPointer)((ulonglong)pIStack_8 & 0xffffffff00000000);
      pvVar6 = (objectTransform->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)objectTransform,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
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
      pVVar13 = AvatarCapture_RotatePointAroundPivot
                          ((Vector3 *)auStack_4,(Vector3 *)auStack_7,(Vector3 *)pMVar10,
                           (Vector3 *)&pp_Stack_c8,(MethodInfo *)0x0);
      auStack_11 = *(undefined1 (*) [8])pVVar13;
      pIStack_9 = (Il2CppMethodPointer)CONCAT44(pIStack_9._4_4_,pVVar13->z);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (cameraTransform->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar6);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_7 = (undefined1  [8])0x0;
      pIStack_8 = (Il2CppMethodPointer)0x0;
      pvVar6 = (objectTransform->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)objectTransform,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
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
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                          ((Vector3 *)auStack_7,(Quaternion *)auStack_11,pMVar10);
      fVar14 = pVVar13->y;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar14 = fVar14 + _UNK_?;
      auStack_11 = *(undefined1 (*) [8])&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
      pIStack_9 = (Il2CppMethodPointer)
                   CONCAT44(pIStack_9._4_4_,
                            (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z);
      auStack_4 = (undefined1  [8])0x0;
      uStack_5 = 0;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(fVar14 + (float)iVar3,auStack_11,auStack_4);
      fStack_15 = (float)auStack_4._0_4_;
      fStack_16 = (float)auStack_4._4_4_;
      fStack_17 = (float)uStack_5;
      uStack_18 = uStack_5._4_4_;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (cameraTransform->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)cameraTransform,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar6);
      pMVar10 = 
      UnityEngine__MeshFilter__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshFilter>_bool_____
      ;
      if ((
          UnityEngine__MeshFilter__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshFilter>_bool_____
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     UnityEngine__MeshFilter__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshFilter>_bool_____
                     );
      }
      pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)objectTransform,(MethodInfo *)0x0);
      if (pGVar19 == (GameObject *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      auStack_7 = (undefined1  [8])
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentsInChildren_4
                              (pGVar19,1,((pMVar10->field7_0x38).rgctx_data)->method);
      uStack_20 = 0;
      if (auStack_7 != (undefined1  [8])0x0) {
        pp_Var19 = ((_Il2CppFullySharedGenericType__Array *)auStack_7)->vector;
        do {
          uVar21 = uStack_20;
          if ((int)*(il2cpp_array_size_t *)((longlong)auStack_7 + 0x18) <= (int)uStack_20) {
            return;
          }
          pp_Stack_c8 = pp_Var19;
          if ((uint)*(il2cpp_array_size_t *)((longlong)auStack_7 + 0x18) <= uStack_20) {
code_?:
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          this_00 = (MeshFilter *)*pp_Var19;
          if (this_00 == (MeshFilter *)0x0) break;
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                              (this_00,(MethodInfo *)0x0);
          pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (pGVar19 == (GameObject *)0x0) break;
          this_02 = (Renderer *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar19,
                               UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                              );
          pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (pGVar19 == (GameObject *)0x0) break;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar6 = (pGVar19->fields)._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar19,(MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
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
            for (; iVar24 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount
                                     (this_01,(MethodInfo *)0x0), pp_Var19 = pp_Stack_c8,
                uVar21 = uStack_20, (int)submeshIndex < iVar24; submeshIndex = submeshIndex + 1) {
              if ((this_02 == (Renderer *)0x0) ||
                 (pMVar25 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                            Renderer_get_sharedMaterials(this_02,(MethodInfo *)0x0),
                 pMVar25 == (Material__Array *)0x0)) goto code_?;
              if ((uint)pMVar25->max_length <= submeshIndex) goto code_?;
              material = *(Material **)((longlong)pMVar25->vector + lVar23 + -0x20);
              this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_00,(MethodInfo *)0x0);
              if (this_03 == (Transform *)0x0) goto code_?;
              pMVar26 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localToWorldMatrix
                                  ((Matrix4x4 *)&ppIStack_27,this_03,(MethodInfo *)0x0);
              ppIVar28 = *(Il2CppType ***)pMVar26;
              _Var4 = *(_union_154 *)&pMVar26->m20;
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
              iVar24 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                (StringLiteral_UXElementSecondary,(MethodInfo *)0x0);
              auStack_4 = (undefined1  [8])(this->fields).renderCam;
              if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                FUN_?();
              }
              ppIStack_27 = ppIVar28;
              _Stack_a0 = _Var4;
              auStack_33 = auVar29;
              uStack_34 = uVar2;
              uStack_35 = uVar30;
              uStack_36 = uVar31;
              uStack_37 = uVar32;
              UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh
                        (this_01,(Matrix4x4 *)&ppIStack_27,material,iVar24,(Camera *)auStack_4,
                         submeshIndex,(MaterialPropertyBlock *)0x0,1,1,0,(MethodInfo *)0x0);
              lVar23 = lVar23 + 8;
            }
          }
          uStack_20 = uVar21 + 1;
          pp_Var19 = pp_Var19 + 1;
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

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_InitializeCamera
               (AvatarCapture *this,MethodInfo *method)

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
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
     (pGVar4 = (pGVar3->fields).AvatarCommandsPlayMode,
     pGVar4 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    if ((pGVar4->fields).OnReadyScreenShot != (Action *)0x0) {
      pAVar5 = (pGVar4->fields).OnReadyScreenShot;
      (*(pAVar5->fields)._._.invoke_impl)((pAVar5->fields)._._.method_code);
    }
    pCVar6 = (this->fields).renderCam;
    if (pCVar6 != (Camera *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (pCVar6->fields)._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar6,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
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
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
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
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_8
                (this_00,(int32_t)uStack_10,uStack_10._4_4_,0x10,RenderTextureFormat__Enum_ARGB32,
                 RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0);
      pRVar12 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_get_active
                         ((MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar13 = pvVar7;
      if (this_00 != (RenderTexture *)0x0) {
        pvVar13 = (this_00->fields)._._.m_CachedPtr;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
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
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(1,1,&uStack_10,_UNK_?);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pRVar12 != (RenderTexture *)0x0) {
        pvVar7 = (pRVar12->fields)._._.m_CachedPtr;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7);
      if (this_00 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode
                  ((Texture *)this_00,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                  ((Texture *)this_00,FilterMode__Enum_Trilinear,(MethodInfo *)0x0);
        pCVar6 = (this->fields).renderCam;
        if (pCVar6 != (Camera *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                          ,this_00,0);
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                         );
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
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar6,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          if (this_00 == (RenderTexture *)0x0) {
            pvVar13 = (void *)0x0;
          }
          else {
            pvVar13 = (this_00->fields)._._.m_CachedPtr;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
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

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture_OnDestroy
               (AvatarCapture *this,MethodInfo *method)

{
  pCVar1 = (this->fields).renderCam;
  if ((pCVar1 != (Camera *)0x0) &&
     (pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                         (pCVar1,(MethodInfo *)0x0), pRVar2 != (RenderTexture *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_DiscardContents_1
              (pRVar2,(MethodInfo *)0x0);
    pCVar1 = (this->fields).renderCam;
    if ((pCVar1 != (Camera *)0x0) &&
       (pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                           (pCVar1,(MethodInfo *)0x0), pRVar2 != (RenderTexture *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pRVar2->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
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
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pCVar1->fields)._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((
            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
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

Vector3 * Assembly-CSharp.dll::AvatarCapture::AvatarCapture_RotatePointAroundPivot
                    (Vector3 *__return_storage_ptr__,Vector3 *point,Vector3 *pivot,Vector3 *angles,
                    MethodInfo *method)

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
  fStack_10 = angles->z * _UNK_?;
  uStack_11 = CONCAT44((float)uVar9 * _UNK_?,(float)uVar8 * _UNK_?);
  uStack_12 = 0;
  uStack_13 = 0;
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
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
  fVar23 = _UNK_? - ((float)uStack_13 * fVar18 + fVar19);
  fVar24 = _UNK_? - (uStack_12._4_4_ * fVar17 + fVar19);
  fVar19 = pivot->z;
  __return_storage_ptr__->x =
       (_UNK_? - ((float)uStack_13 * fVar18 + uStack_12._4_4_ * fVar17)) * fVar5 +
       ((float)uStack_12 * fVar17 - uStack_13._4_4_ * fVar18) * fVar7 +
       (uStack_13._4_4_ * fVar17 + (float)uStack_12 * fVar18) * fVar6 + (float)uVar21;
  __return_storage_ptr__->y =
       fVar23 * fVar7 + (uStack_13._4_4_ * fVar18 + (float)uStack_12 * fVar17) * fVar5 +
       (uStack_12._4_4_ * fVar18 - fVar20) * fVar6 + (float)uVar22;
  __return_storage_ptr__->z =
       ((float)uStack_12 * fVar18 - uStack_13._4_4_ * fVar17) * fVar5 +
       (fVar20 + uStack_12._4_4_ * fVar18) * fVar7 + fVar24 * fVar6 + fVar19;
  return __return_storage_ptr__;
}


/* AvatarCapture() */

void Assembly-CSharp.dll::AvatarCapture::AvatarCapture__ctor(AvatarCapture *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  uVar2 = _UNK_?;
  bVar3 = cRam_? == '\0';
  (this->fields).formationSpacing.x = (float)TypeRef__System__Activator__T._0_4_;
  (this->fields).formationSpacing.y = (float)uVar2;
  (this->fields).formationSpacing.z = fVar1;
  (this->fields).formationRandomness = 1.0;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar4 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar5 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar6 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar7 = ppMVar5;
  if (lVar6 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar6 = lRam_?;
  }
  else {
    do {
      uVar8 = (uint)ppMVar7;
      LOCK();
      bVar3 = uVar8 != uRam_?;
      uVar9 = uVar8;
      uVar10 = uVar8 + 1;
      if (bVar3) {
        uVar9 = uRam_?;
        uVar10 = uRam_?;
      }
      uRam_? = uVar10;
      UNLOCK();
    } while ((bVar3) && (ppMVar7 = (MethodInfo **)(ulonglong)uVar9, uVar8 = uVar9, uVar9 != 2)
            );
    while (uVar8 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar8 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar6;
  puVar11 = &(pOVar4->_1).field_0x1c;
  LOCK();
  bVar3 = *(int *)puVar11 == 1;
  if (bVar3) {
    *(undefined4 *)puVar11 = 1;
  }
  uVar8 = uRam_?;
  UNLOCK();
  if (bVar3) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar8 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar12 = &(pOVar4->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar3 = *puVar12 == 1;
  if (bVar3) {
    *puVar12 = 1;
  }
  uVar8 = uRam_?;
  UNLOCK();
  if (bVar3) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar8 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar8 = GetCurrentThreadId();
    psVar13 = &(pOVar4->_1).cctor_thread;
    LOCK();
    bVar3 = (ulonglong)uVar8 == *psVar13;
    if (bVar3) {
      *psVar13 = (ulonglong)uVar8;
    }
    UNLOCK();
    if (bVar3) {
      return;
    }
    while( true ) {
      puVar11 = &(pOVar4->_1).field_0x1c;
      LOCK();
      bVar3 = *(int *)puVar11 == 1;
      if (bVar3) {
        *(undefined4 *)puVar11 = 1;
      }
      UNLOCK();
      if (bVar3) break;
      LOCK();
      lVar6._0_4_ = (pOVar4->_1).initializationExceptionGCHandle;
      lVar6._4_4_ = (pOVar4->_1).cctor_started;
      if (lVar6 == 0) {
        (pOVar4->_1).initializationExceptionGCHandle = 0;
        (pOVar4->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar6 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar14._0_4_ = (pOVar4->_1).initializationExceptionGCHandle;
    lVar14._4_4_ = (pOVar4->_1).cctor_started;
    if (lVar14 == 0) {
      return;
    }
  }
  else {
    uVar8 = GetCurrentThreadId();
    LOCK();
    (pOVar4->_1).cctor_thread = (ulonglong)uVar8;
    UNLOCK();
    LOCK();
    (pOVar4->_1).cctor_finished_or_no_cctor = 1;
    uVar8 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar8 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar4->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar4);
      ppMVar7 = ppMVar5;
      pIVar15 = (Il2CppClass *)pOVar4;
code_?:
      do {
        if (ppMVar7 == (MethodInfo **)0x0) {
          FUN_?(pIVar15);
          if (pIVar15->field_count != 0) {
            ppMVar7 = pIVar15->methods;
            pMVar16 = *ppMVar7;
code_?:
            if (pMVar16 != (MethodInfo *)0x0) {
              if ((*pMVar16->name == '.') && ((pMVar16->flags & 0x800) != 0)) {
                ppMVar17 = ppMVar5;
                while (ppMVar18 = ppMVar17 + 0x3052af36,
                      ppMVar17 = (MethodInfo **)((longlong)ppMVar17 + 1),
                      *(char *)ppMVar18 == (pMVar16->name + -1)[(longlong)ppMVar17]) {
                  if (ppMVar17 == (MethodInfo **)0x7) {
                    FUN_?(pMVar16,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar7 = ppMVar7 + 1;
          if (ppMVar7 < pIVar15->methods + pIVar15->field_count) {
            pMVar16 = *ppMVar7;
            goto code_?;
          }
        }
        pIVar15 = pIVar15->parent;
        ppMVar7 = ppMVar5;
      } while (pIVar15 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar4->_1).cctor_thread = 0;
    uVar19 = _UNK_?;
    uVar20 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar4->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_21 = 0;
    uStack_22 = _UNK_?;
    uStack_23 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar4->_0).byval_arg,0,0);
    pppppppuVar18 = &pppppppuStack_78;
    if (0xf < uStack_23) {
      pppppppuVar18 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar18);
    if (uStack_23 < 0x10) {
code_?:
      lVar6 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar18 = apppppppuStack_58;
      if (0xf < uStack_24) {
        pppppppuVar18 = apppppppuStack_58[0];
      }
      uStack_22 = uVar20;
      uStack_23 = uVar19;
      lVar14 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar18);
      if (lVar6 != 0) {
        *(longlong *)(lVar14 + 0x28U) = lVar6;
        if (iRam_? != 0) {
          uVar8 = (uint)(lVar14 + 0x28U >> 0xc);
          puVar25 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar26 = *puVar25;
            LOCK();
            uVar19 = *puVar25;
            if (uVar26 == uVar19) {
              *puVar25 = uVar26 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar26 != uVar19);
        }
      }
      FUN_?(pOVar4,lVar14);
      if (0xf < uStack_24) {
        pppppppuVar18 = apppppppuStack_58[0];
        if ((0xfff < uStack_24 + 1) &&
           (pppppppuVar18 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar18))))
        goto code_?;
        func_?(pppppppuVar18);
      }
      goto code_?;
    }
    pppppppuVar18 = pppppppuStack_78;
    if ((uStack_23 + 1 < 0x1000) ||
       (pppppppuVar18 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar18)) < 0x20)) {
      func_?(pppppppuVar18);
      uVar20 = _UNK_?;
      uVar19 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar20._0_4_ = (pOVar4->_1).initializationExceptionGCHandle;
  uVar20._4_4_ = (pOVar4->_1).cctor_started;
  uVar20 = FUN_?(uVar20);
  FUN_?(uVar20,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}

