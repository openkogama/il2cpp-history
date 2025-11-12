
/* Void CreateActiveBoosts() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_CreateActiveBoosts
               (BoostHUDController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  uStack_2 = 0;
  iStack_3 = 0;
  alStack_4[0] = 0;
  pLVar5 = (this->fields).currentBoosts;
  if (pLVar5 != (List_1_UnityEngine_GameObject_ *)0x0) {
    uVar6 = (pLVar5->fields)._size - 1;
    obj_00._.m_CachedPtr = (Object_1__Fields)(longlong)(int)uVar6;
    if (-1 < (int)uVar6) {
      lVar7 = (longlong)obj_00._.m_CachedPtr * 8 + 0x20;
      do {
        this_02 = (HorizontalLayoutGroup *)(ulonglong)uVar6;
        pLVar5 = (this->fields).currentBoosts;
        if (pLVar5 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        if ((uint)(pLVar5->fields)._size <= uVar6) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          goto code_?;
        }
        pGVar8 = (pLVar5->fields)._items;
        if (pGVar8 == (GameObject__Array *)0x0) goto code_?;
        if ((uint)pGVar8->max_length <= uVar6) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        obj = *(Object_1 **)((longlong)pGVar8->vector + lVar7 + -0x20);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj,0.0,(MethodInfo *)0x0)
        ;
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -8;
        obj_00._.m_CachedPtr =
             (Object_1__Fields)
             ((longlong)
              ((Object__Array *)((longlong)obj_00._.m_CachedPtr + 0xfffffffffffffee0))->vector +
             0xff);
      } while (-1 < (longlong)obj_00._.m_CachedPtr);
    }
    pLVar5 = (this->fields).currentBoosts;
    if (pLVar5 != (List_1_UnityEngine_GameObject_ *)0x0) {
      piVar10 = &(pLVar5->fields)._version;
      *piVar10 = *piVar10 + 1;
      length = (pLVar5->fields)._size;
      (pLVar5->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar5->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar11 != (MVGameControllerBase *)0x0) &&
           (pMVar12 = (pMVar11->fields).game, pMVar12 != (MVNetworkGame *)0x0)) &&
          (this_00 = (pMVar12->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
         ((pMVar13 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0)
          , pMVar13 != (MVLocalPlayer *)0x0 &&
          (pBVar14 = (pMVar13->fields).boostController, pBVar14 != (BoostController *)0x0)))) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)(pBVar14->fields).activeBoosts;
        if ((pDVar15 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)0x0) &&
           (pDVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                (pDVar15,
                                 MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                                ),
           pDVar16 !=
           (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
            *)0x0)) {
          pDVar15 = (pDVar16->fields)._dictionary;
          ppDStack_17 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         **)0x0;
          uStack_18 = 0;
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)&pDStack_19 >> 0xc);
            uVar20 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
            do {
              uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
              puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
              LOCK();
              bVar23 = uVar21 == *puVar22;
              if (bVar23) {
                *puVar22 = uVar21 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar23);
          }
          if (pDVar15 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0) {
            pDStack_19 = pDVar15;
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iStack_3 = (pDVar15->fields)._version;
          uStack_18 = 0;
          uStack_2 = 0;
          alStack_4[0] = 0;
          pDStack_19 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)0x0;
          ppDStack_17 = &pDStack_1;
          pDStack_1 = pDVar15;
          while (pDStack_1 !=
                 (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0) {
            if (iStack_3 != (pDStack_1->fields)._version) goto code_?;
            do {
              if (pDStack_1 ==
                  (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) goto code_?;
              if ((uint)(pDStack_1->fields)._count <= uStack_2) {
                return;
              }
              pDVar24 = (pDStack_1->fields)._entries;
              lVar7 = (longlong)(int)uStack_2;
              uVar6 = uStack_2 + 1;
              if (pDVar24 ==
                  (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                   *)0x0) goto code_?;
              if ((uint)pDVar24->max_length <= uStack_2) {
                uStack_2 = uVar6;
                FUN_?();
                goto code_?;
              }
              uStack_2 = uVar6;
            } while ((&pDVar24->vector[0].hashCode)[lVar7 * 6] < 0);
            alStack_4[0] = *(longlong *)((longlong)&pDVar24->vector[0].key + lVar7 * 0x18 + 8);
            func_?(alStack_4);
            this_01 = (this->fields).boostImageController;
            if (alStack_4[0] == 0) goto code_?;
            if (this_01 == (BoostImageController *)0x0) goto code_?;
            original = BoostImageController::BoostImageController_GetBoostVisualization
                                 (this_01,*(BoostType__Enum *)(alStack_4[0] + 0x10),
                                  (MethodInfo *)0x0);
            this_02 = (this->fields).content;
            if (this_02 == (HorizontalLayoutGroup *)0x0) goto code_?;
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
            obj_00._.m_CachedPtr = (this_02->fields)._._._._._._._;
            if (obj_00._.m_CachedPtr == (void *)0x0) goto code_?;
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0))
            goto code_?;
            pcRam_? = pcVar9;
            pvVar25 = (void *)(*pcRam_?)(obj_00._.m_CachedPtr);
            parent = (Transform *)
                     UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                     Unmarshal_UnmarshalUnityObject
                               (pvVar25,
                                UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                               );
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            obj_00._.m_CachedPtr =
                 (Object_1__Fields)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                           ((Object *)original,parent,0,
                            UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image__UnityEngine__Transform__bool_
                           );
            this_02 = (HorizontalLayoutGroup *)(this->fields).currentBoosts;
            if (obj_00._.m_CachedPtr == (void *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pIVar26 = ((Object__Array *)obj_00._.m_CachedPtr)->bounds;
            if (pIVar26 == (Il2CppArrayBounds *)0x0) goto code_?;
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0))
            goto code_?;
            pcRam_? = pcVar9;
            pvVar25 = (void *)(*pcRam_?)(pIVar26);
            item = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                   Unmarshal_UnmarshalUnityObject
                             (pvVar25,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
            pMVar27 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
            ;
            if (this_02 == (HorizontalLayoutGroup *)0x0) goto code_?;
            piVar10 = (int32_t *)((longlong)&(this_02->fields)._._._._.m_CancellationTokenSource + 4)
            ;
            *piVar10 = *piVar10 + 1;
            CVar28._.m_CachedPtr = (this_02->fields)._._._._._._._;
            uVar6 = *(uint *)&(this_02->fields)._._._._.m_CancellationTokenSource;
            if (CVar28._.m_CachedPtr == (void *)0x0) goto code_?;
            if (uVar6 < *(uint *)((longlong)CVar28._.m_CachedPtr + 0x18)) {
              *(uint *)&(this_02->fields)._._._._.m_CancellationTokenSource = uVar6 + 1;
              FUN_?(CVar28._.m_CachedPtr,(longlong)(int)uVar6,item);
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__AddWithResize
                        ((List_1_System_Object_ *)this_02,item,
                         pMVar27->klass->rgctx_data[0xe].method);
            }
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
code_?:
  uVar29 = func_?(&UNK_?);
  FUN_?(uVar29);
code_?:
  uVar29 = func_?(&UNK_?);
  FUN_?(uVar29);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00._.m_CachedPtr,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)this_02,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar6 = uStack_2;
code_?:
  uStack_2 = uVar6;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_OnDestroy
               (BoostHUDController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
    if ((extraout_RAX == 0) || (lVar2 = *(longlong *)(extraout_RAX + 0xa0), lVar2 == 0)) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pDVar4 = *(Delegate **)(lVar2 + 0x10);
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__BoostHUDController__CreateActiveBoosts__,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    else {
      pDVar5 = (Delegate *)0x0;
      if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
        pDVar5 = pDVar4;
      }
      if (pDVar5 == (Delegate *)0x0) {
        FUN_?(pDVar4,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(Delegate **)(lVar2 + 0x10) = pDVar5;
      pDVar5 = (Delegate *)0x0;
      if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
        pDVar5 = pDVar4;
      }
      if (pDVar5 == (Delegate *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)(lVar2 + 0x10U >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
  }
  return;
}


/* Void SetupHUD() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_SetupHUD
               (BoostHUDController *this,MethodInfo *method)

{
  player = (MVPlayer *)0x0;
  BoostHUDController_CreateActiveBoosts(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
  if ((extraout_RAX != 0) && (lVar1 = *(longlong *)(extraout_RAX + 0xa0), lVar1 != 0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = *(Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               **)(lVar1 + 0x28);
    if (pDVar2 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) {
      pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               TypeConverterRegistry+ConverterKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                         (pDVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                         );
      if ((pDVar3 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      *)0x0) &&
         (pDVar2 = (pDVar3->fields)._dictionary,
         pDVar2 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0)) {
        iVar4 = (pDVar2->fields)._count - (pDVar2->fields)._freeCount;
        pSVar5 = (this->fields).slideOnClick;
        if (pSVar5 != (SlideOnClick *)0x0) {
          uVar6 = (pSVar5->fields)._StartPos_k__BackingField.x;
          fVar7 = (pSVar5->fields)._StartPos_k__BackingField.y;
          (pSVar5->fields).targetPos.x = (float)(iVar4 * (this->fields).boosterWidth) + (float)uVar6
          ;
          (pSVar5->fields).targetPos.y = fVar7;
          (pSVar5->fields).targetPos.z = 0.0;
          pCVar8 = (this->fields).canvasGroup;
          if (pCVar8 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (pCVar8,0.0,(MethodInfo *)0x0);
            if (0 < iVar4) {
              pCVar8 = (this->fields).canvasGroup;
              if (pCVar8 == (CanvasGroup *)0x0) goto code_?;
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (pCVar8,_UNK_?,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetupTransform() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_SetupTransform
               (BoostHUDController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if ((extraout_RAX != 0) && (lVar1 = *(longlong *)(extraout_RAX + 0xa0), lVar1 != 0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = *(Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               **)(lVar1 + 0x28);
    if (pDVar2 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) {
      pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               TypeConverterRegistry+ConverterKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                         (pDVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                         );
      if ((pDVar3 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      *)0x0) &&
         (pDVar2 = (pDVar3->fields)._dictionary,
         pDVar2 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0)) {
        iVar4 = (pDVar2->fields)._count - (pDVar2->fields)._freeCount;
        pSVar5 = (this->fields).slideOnClick;
        if (pSVar5 != (SlideOnClick *)0x0) {
          uVar6 = (pSVar5->fields)._StartPos_k__BackingField.x;
          fVar7 = (pSVar5->fields)._StartPos_k__BackingField.y;
          (pSVar5->fields).targetPos.x = (float)(iVar4 * (this->fields).boosterWidth) + (float)uVar6
          ;
          (pSVar5->fields).targetPos.y = fVar7;
          (pSVar5->fields).targetPos.z = 0.0;
          pCVar8 = (this->fields).canvasGroup;
          if (pCVar8 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (pCVar8,0.0,(MethodInfo *)0x0);
            if (0 < iVar4) {
              pCVar8 = (this->fields).canvasGroup;
              if (pCVar8 == (CanvasGroup *)0x0) goto code_?;
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (pCVar8,_UNK_?,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_Start
               (BoostHUDController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if ((extraout_RAX != 0) && (lVar1 = *(longlong *)(extraout_RAX + 0xa0), lVar1 != 0)) {
    pDVar2 = *(Delegate **)(lVar1 + 0x10);
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__BoostHUDController__SetupHUD__,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    method_00 = TypeInfo__System__Action;
    if (pDVar2 == (Delegate *)0x0) {
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else {
      pDVar3 = (Delegate *)0x0;
      if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        FUN_?(pDVar2,TypeInfo__System__Action);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(Delegate **)(lVar1 + 0x10) = pDVar3;
      pDVar3 = (Delegate *)0x0;
      if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      method_00 = (Action__Class *)(ulonglong)(uVar5 & 0x3f);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (longlong)method_00;
        }
        UNLOCK();
      } while (!bVar9);
    }
    player = (MVPlayer *)0x0;
    BoostHUDController_CreateActiveBoosts(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)method_00);
    if ((extraout_RAX_00 != 0) && (lVar1 = *(longlong *)(extraout_RAX_00 + 0xa0), lVar1 != 0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar10 = *(Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 **)(lVar1 + 0x28);
      if (((pDVar10 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       *)0x0) &&
          (pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                     UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                     Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                               (pDVar10,
                                MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                               ),
          pDVar11 !=
          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
           *)0x0)) &&
         (pDVar10 = (pDVar11->fields)._dictionary,
         pDVar10 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0)) {
        iVar12 = (pDVar10->fields)._count - (pDVar10->fields)._freeCount;
        pSVar13 = (this->fields).slideOnClick;
        if (pSVar13 != (SlideOnClick *)0x0) {
          uVar14 = (pSVar13->fields)._StartPos_k__BackingField.x;
          fVar15 = (pSVar13->fields)._StartPos_k__BackingField.y;
          (pSVar13->fields).targetPos.x =
               (float)(iVar12 * (this->fields).boosterWidth) + (float)uVar14;
          (pSVar13->fields).targetPos.y = fVar15;
          (pSVar13->fields).targetPos.z = 0.0;
          pCVar16 = (this->fields).canvasGroup;
          if (pCVar16 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (pCVar16,0.0,(MethodInfo *)0x0);
            if (0 < iVar12) {
              pCVar16 = (this->fields).canvasGroup;
              if (pCVar16 == (CanvasGroup *)0x0) goto code_?;
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (pCVar16,_UNK_?,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* BoostHUDController() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController__ctor
               (BoostHUDController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).boosterWidth = 100;
  this_00 = (List_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).currentBoosts = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).currentBoosts >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

