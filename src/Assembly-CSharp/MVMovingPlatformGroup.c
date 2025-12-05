
/* Void AddPreviewBoxesToChildren() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_AddPreviewBoxesToChildren
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).platform;
  if ((pMVar1 != (MVMovingPlatform *)0x0) &&
     (pMVar2 = (pMVar1->fields)._._CubeModel_k__BackingField, pMVar2 != (MVCubeModelInstance *)0x0))
  {
    (*(pMVar2->klass->vtable).AddPreviewBox.methodPtr)
              (pMVar2,(pMVar2->klass->vtable).AddPreviewBox.method);
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields).nodeIdToWoMap;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) && (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                           UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                           Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                     (this_00,
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                                     ),
                 pDVar3 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                            *)0x0)) {
      uStack_4 = (pDVar3->fields)._dictionary;
      puStack_5 = (undefined4 *)0x0;
      uStack_6 = 0;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&uStack_4 >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      if (uStack_4 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iStack_12 = (uStack_4->fields)._version;
      uStack_6 = 0;
      uStack_4._4_4_ = (undefined4)((ulonglong)uStack_4 >> 0x20);
      uStack_13 = (undefined4)uStack_4;
      uStack_14 = uStack_4._4_4_;
      uStack_15 = 0;
      aplStack_16[0] = (longlong *)0x0;
      uStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
      puStack_5 = &uStack_13;
      do {
        lVar17 = CONCAT44(uStack_14,uStack_13);
        if (lVar17 == 0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (iStack_12 != *(int *)(lVar17 + 0x2c)) {
code_?:
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                    ((MethodInfo *)0x0);
          goto code_?;
        }
        do {
          if (lVar17 == 0) goto code_?;
          if (*(uint *)(lVar17 + 0x20) <= uStack_15) {
            return;
          }
          lVar18 = *(longlong *)(lVar17 + 0x18);
          lVar19 = (longlong)(int)uStack_15;
          uVar7 = uStack_15 + 1;
          if (lVar18 == 0) goto code_?;
          if (*(uint *)(lVar18 + 0x18) <= uStack_15) {
            uStack_15 = uVar7;
            FUN_?();
            goto code_?;
          }
          uStack_15 = uVar7;
        } while (*(int *)(lVar18 + 0x20 + lVar19 * 0x18) < 0);
        aplStack_16[0] = *(longlong **)(lVar18 + (lVar19 + 2) * 0x18);
        func_?(aplStack_16);
        if (aplStack_16[0] == (longlong *)0x0) {
code_?:
          FUN_?();
          uVar7 = uStack_15;
code_?:
          uStack_15 = uVar7;
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
        (**(code **)(*aplStack_16[0] + 0x5b8))
                  (aplStack_16[0],*(undefined8 *)(*aplStack_16[0] + 0x5c0));
      } while( true );
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_Initialize
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVMovingPlatformGroup__WorldObjectClient_PositionChangedHandler_System__Object__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVMovingPlatformGroup__WorldObjectClient_RotationChangedHandler_System__Object__RotationChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVMovingPlatformGroup__WorldObjectClient_SelectedChangedHandler_System__Object__SelectedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  MVMovingPlatformGroup_InitializeCommon(this,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           (this->fields).nodeIdToWoMap;
  if ((pDVar1 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0) ||
     (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                TypeConverterRegistry+ConverterKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                          (pDVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                          ),
     pDVar2 ==
     (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
      *)0x0)) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pDStack_4 = (pDVar2->fields)._dictionary;
  ppDStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 **)0x0;
  uStack_6 = 0;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
    lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar12 = uVar10 == *puVar11;
      if (bVar12) {
        *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  if (pDStack_4 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDStack_8 = pDStack_4;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppDStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 **)((ulonglong)(uint)(pDStack_4->fields)._version << 0x20);
  uStack_6 = 0;
  uStack_13 = (ulonglong)ppDStack_5;
  pDStack_14 = (Delegate *)0x0;
  pDStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  ppDStack_5 = &pDStack_4;
code_?:
  if (pDStack_4 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    if (uStack_13._4_4_ == (pDStack_4->fields)._version) {
      uVar10 = uStack_13 & 0xffffffff;
code_?:
      if (pDStack_4 !=
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        uVar7 = (uint)uVar10;
        if (uVar7 < (uint)(pDStack_4->fields)._count) {
          pDVar15 = (pDStack_4->fields)._entries;
          uVar10 = (ulonglong)(uVar7 + 1);
          uStack_13 = CONCAT44(uStack_13._4_4_,uVar7 + 1);
          if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)0x0) goto code_?;
          if (uVar7 < (uint)pDVar15->max_length) goto code_?;
          FUN_?();
          goto code_?;
        }
        uStack_13 = CONCAT44(uStack_13._4_4_,(pDStack_4->fields)._count + 1);
        pDStack_14 = (Delegate *)0x0;
        pUVar16 = (this->fields)._._._.RotationChanged;
        pUVar17 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar17,(Object *)this,
                   MethodInfo__MVMovingPlatformGroup__WorldObjectClient_RotationChangedHandler_System__Object__RotationChangedEventArgs_
                   ,(MethodInfo *)0x0);
        unaff_RBX = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pUVar16,(Delegate *)pUVar17,(MethodInfo *)0x0);
        unaff_RDI = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
        if (unaff_RBX == (Delegate *)0x0) {
          (this->fields)._._._.RotationChanged =
               (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0;
        }
        else {
          pUVar16 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)
                    FUN_?(unaff_RBX,
                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                                 );
          if (pUVar16 == (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
            FUN_?(unaff_RBX,unaff_RDI);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this->fields)._._._.RotationChanged = pUVar16;
          unaff_RDI = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
          lVar9 = FUN_?();
          if (lVar9 == 0) goto code_?;
        }
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&(this->fields)._._._.RotationChanged >> 0xc);
          lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
        uVar10 = (this->fields)._._._.interactionFlags;
        (this->fields)._._._.interactionFlags = uVar10 | 0x40;
        if ((uVar10 & 0x20000) == 0) {
          return;
        }
        MVMovingPlatformGroup_AddPreviewBoxesToChildren(this,(MethodInfo *)0x0);
        pMVar18 = (this->fields).platform;
        if (pMVar18 == (MVMovingPlatform *)0x0) goto code_?;
        pMVar19 = (pMVar18->fields)._._CubeModel_k__BackingField;
        if (pMVar19 == (MVCubeModelInstance *)0x0) goto code_?;
        (pMVar19->fields)._._._.previewOwnerProfileId = (this->fields)._._._._.previewOwnerProfileId;
        pMVar18 = (this->fields).platform;
        if ((pMVar18 == (MVMovingPlatform *)0x0) ||
           (pMVar19 = (pMVar18->fields)._._CubeModel_k__BackingField,
           pMVar19 == (MVCubeModelInstance *)0x0)) goto code_?;
        piVar20 = &(pMVar19->fields)._._.interactionFlags;
        *piVar20 = *piVar20 | 0x20000;
        pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)(this->fields).nodeIdToWoMap;
        if ((pDVar1 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)0x0) ||
           (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                (pDVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                                ),
           pDVar2 ==
           (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
            *)0x0)) goto code_?;
        pDVar1 = (pDVar2->fields)._dictionary;
        ppDStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       **)0x0;
        uStack_6 = 0;
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
          lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
        if (pDVar1 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       *)0x0) {
          pDStack_8 = pDVar1;
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uStack_6 = 0;
        uStack_13 = (ulonglong)(uint)(pDVar1->fields)._version << 0x20;
        pDStack_14 = (Delegate *)0x0;
        pDStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      *)0x0;
        ppDStack_5 = &pDStack_4;
        pDStack_4 = pDVar1;
        while( true ) {
          if (pDStack_4 ==
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) goto code_?;
          if (uStack_13._4_4_ != (pDStack_4->fields)._version) break;
          uVar10 = uStack_13 & 0xffffffff;
          do {
            if (pDStack_4 ==
                (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) goto code_?;
            uVar7 = (uint)uVar10;
            if ((uint)(pDStack_4->fields)._count <= uVar7) {
              return;
            }
            pDVar15 = (pDStack_4->fields)._entries;
            uVar10 = (ulonglong)(uVar7 + 1);
            uStack_13 = CONCAT44(uStack_13._4_4_,uVar7 + 1);
            if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                           *)0x0) goto code_?;
            if ((uint)pDVar15->max_length <= uVar7) goto code_?;
          } while ((&pDVar15->vector[0].hashCode)[(longlong)(int)uVar7 * 6] < 0);
          pDStack_14 = *(Delegate **)
                        ((longlong)&pDVar15->vector[0].key + (longlong)(int)uVar7 * 0x18 + 8);
          func_?(&pDStack_14);
          if (pDStack_14 == (Delegate *)0x0) goto code_?;
          *(int32_t *)((longlong)&(pDStack_14->fields).extra_arg + 4) =
               (this->fields)._._._._.previewOwnerProfileId;
          ppvVar21 = &pDStack_14[2].fields.method;
          *ppvVar21 = (void *)((ulonglong)*ppvVar21 | 0x20000);
        }
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(unaff_RBX,unaff_RDI);
code_?:
  FUN_?();
code_?:
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_?:
  if (-1 < (&pDVar15->vector[0].hashCode)[(longlong)(int)uVar7 * 6]) goto code_?;
  goto code_?;
code_?:
  pDStack_14 = *(Delegate **)((longlong)&pDVar15->vector[0].key + (longlong)(int)uVar7 * 0x18 + 8);
  func_?();
  unaff_RBX = pDStack_14;
  if (pDStack_14 == (Delegate *)0x0) goto code_?;
  pDVar22 = (Delegate *)pDStack_14[1].fields.m_target;
  pUVar17 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar17,(Object *)this,
             MethodInfo__MVMovingPlatformGroup__WorldObjectClient_PositionChangedHandler_System__Object__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  unaff_RDI = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar22,(Delegate *)pUVar17,(MethodInfo *)0x0);
  unaff_RSI = 
  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
  if (unaff_RDI == (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)0x0) {
    unaff_RBX[1].fields.m_target = (Object *)0x0;
code_?:
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&unaff_RBX[1].fields.m_target >> 0xc);
      lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    if (unaff_RBX != (Delegate *)0x0) {
      pDVar22 = unaff_RBX[1].fields.extra_arg;
      pUVar17 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar17,(Object *)this,
                 MethodInfo__MVMovingPlatformGroup__WorldObjectClient_SelectedChangedHandler_System__Object__SelectedEventArgs_
                 ,(MethodInfo *)0x0);
      unaff_RDI = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar22,(Delegate *)pUVar17,(MethodInfo *)0x0);
      unaff_RSI = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>
      ;
      if (unaff_RDI == (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)0x0) {
        unaff_RBX[1].fields.extra_arg = (void *)0x0;
code_?:
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&unaff_RBX[1].fields.extra_arg >> 0xc);
          lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
        goto code_?;
      }
      pvVar23 = (void *)FUN_?(unaff_RDI,
                                      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>
                                     );
      uVar24 = extraout_XMM0_Da_00;
      if (pvVar23 != (void *)0x0) {
        unaff_RBX[1].fields.extra_arg = pvVar23;
        unaff_RSI = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>
        ;
        lVar9 = FUN_?(unaff_RDI,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>
                              );
        if (lVar9 != 0) goto code_?;
        goto code_?;
      }
code_?:
      FUN_?(uVar24,unaff_RSI);
    }
    uVar24 = FUN_?();
  }
  else {
    pOVar25 = (Object *)
              FUN_?(unaff_RDI,
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           );
    uVar24 = extraout_XMM0_Da;
    if (pOVar25 != (Object *)0x0) {
      unaff_RBX[1].fields.m_target = pOVar25;
      unaff_RSI = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      lVar9 = FUN_?(unaff_RDI,
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
      if (lVar9 != 0) goto code_?;
code_?:
      FUN_?(unaff_RDI,unaff_RSI);
code_?:
      uVar24 = FUN_?(unaff_RDI,unaff_RSI);
      goto code_?;
    }
  }
  FUN_?(uVar24,unaff_RSI);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
  goto code_?;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_InitializeCommon
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  pMStackX_20 = this;
  pMStack_1 = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovingPlatformNode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovingPlatform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__init___Could_not_find_child_nod);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Platform);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_StartNode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___If_this_is_a_new_platform_grou);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Platform_group_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__init___Could_not_find_child_pla);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.childIdMap;
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pDStack_4 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      in_R8 = (MVWorldObjectClient__Class *)(ulonglong)(uVar3 & 0x3f);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (longlong)in_R8;
        }
        UNLOCK();
      } while (!bVar8);
    }
    iVar9 = 0;
    uStack_10 = (ulonglong)(uint)(pDVar2->fields)._version;
    uStack_11 = 2;
    uStack_12 = 0;
    uStack_13 = 0;
    DStack_14._version = (undefined4)uStack_10;
    DStack_14._index = uStack_10._4_4_;
    DStack_14._current.key = (Object *)0x0;
    DStack_14._current.value = (Object *)0x0;
    DStack_14._getEnumeratorRetType = 2;
    DStack_14._36_4_ = 0;
    uStack_15 = 0;
    pDStack_16 = &DStack_14;
    pDStack_4 = pDVar2;
    DStack_14._dictionary = pDVar2;
code_?:
    do {
      bVar17 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
               Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                         (&DStack_14,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                         );
      pMVar18 = (MVWorldObjectClient__Class *)DStack_14._current.value;
      pOVar19 = DStack_14._current.key;
      if (bVar17 == 0) goto code_?;
      if (DStack_14._current.key == (Object *)0x0) goto code_?;
      pSVar20 = (String *)
                (*((DStack_14._current.key)->klass->vtable).ToString.methodPtr)
                          (DStack_14._current.key,
                           ((DStack_14._current.key)->klass->vtable).ToString.method);
      if (pSVar20 == (String *)0x0) goto code_?;
      if (pSVar20 != StringLiteral_Platform) {
        if ((StringLiteral_Platform != (String *)0x0) &&
           ((pSVar20->fields)._stringLength == (StringLiteral_Platform->fields)._stringLength)) {
          in_R8 = (MVWorldObjectClient__Class *)((longlong)(pSVar20->fields)._stringLength * 2);
          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)0x0;
          bVar17 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar20->fields)._firstChar,
                              (uint8_t *)&(StringLiteral_Platform->fields)._firstChar,
                              (uint64_t)in_R8,(MethodInfo *)0x0);
          if (bVar17 != 0) goto code_?;
        }
        if (pOVar19 == (Object *)0x0) goto code_?;
        pSVar20 = (String *)(*(pOVar19->klass->vtable).ToString.methodPtr)();
        if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar3 = mscorlib.dll::System::Convert::Convert_ToInt32_14(pSVar20,(MethodInfo *)0x0);
        pDVar2 = pDRam0000000182dbbc18;
        if (pMVar18 == (MVWorldObjectClient__Class *)0x0) goto code_?;
        if ((((MVWorldObjectClient__Class *)((Il2CppClass_0 *)&((Object *)pMVar18)->klass)->image)->
            _0).element_class != (Il2CppClass *)(pDRam0000000182dbbc18->fields)._values)
        goto code_?;
        aIStackX_18[0].m_value =
             (((MVWorldObjectClient__Fields *)&((Il2CppClass_0 *)&((Object *)pMVar18)->klass)->name)
             ->_).id;
        pMVar18 = (MVWorldObjectClient__Class *)0x0;
        unaff_RBX = (MVWorldObjectClient__Class *)
                    MVGroup::MVGroup_GetChild
                              ((MVGroup *)this,aIStackX_18[0].m_value,(MethodInfo *)0x0);
        if (unaff_RBX == (MVWorldObjectClient__Class *)0x0) {
          values = (String__Array *)FUN_?(TypeInfo__System__String);
          unaff_RBX = (MVWorldObjectClient__Class *)0x0;
          if (values != (String__Array *)0x0) {
            FUN_?(values,0,StringLiteral_Platform_group_);
            pSVar20 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&this->fields,(MethodInfo *)0x0);
            FUN_?(values,1,pSVar20);
            FUN_?(values,2,StringLiteral__init___Could_not_find_child_nod);
            pSVar20 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
            FUN_?(values,3,pSVar20);
            FUN_?(values,4,StringLiteral___If_this_is_a_new_platform_grou);
            pSVar20 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)pSVar20,(MethodInfo *)0x0);
            (this->fields).initializeFailed = 1;
            return;
          }
          goto code_?;
        }
        pMVar18 = *(MVWorldObjectClient__Class **)&unaff_RBX->_0;
        bVar21 = (TypeInfo__MVMovingPlatformNode->_1).naturalAligment;
        if (((pMVar18->_1).naturalAligment < bVar21) ||
           (*(MVMovingPlatformNode__Class **)
             ((longlong)(pMVar18->_1).typeHierarchy + (ulonglong)bVar21 * 8 + -8) !=
            TypeInfo__MVMovingPlatformNode)) goto code_?;
        pDVar22 = (this->fields).nodeIdToWoMap;
        if (pDVar22 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0)
        goto code_?;
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                  CONCAT71((int7)((ulonglong)pDVar2 >> 8),1);
        pMVar18 = unaff_RBX;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar22,uVar3,(Object *)unaff_RBX,
                   (InsertionBehavior__Enum)pDVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
                   ->klass->rgctx_data[0x22].method);
        this_00 = (this->fields).woIdToNodeIdMap;
        if (this_00 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                  CONCAT71((int7)((ulonglong)pDVar2 >> 8),1);
        in_R8 = (MVWorldObjectClient__Class *)(ulonglong)uVar3;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
        Dictionary_2_System_Int32_System_Int32__TryInsert
                  (this_00,*(int32_t *)&(unaff_RBX->_0).name,uVar3,(InsertionBehavior__Enum)pDVar2
                   ,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                    ->klass->rgctx_data[0x22].method);
      }
    } while( true );
  }
  goto code_?;
code_?:
  pDVar2 = (this->fields).nextNodeMap;
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pDStack_4 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      in_R8 = (MVWorldObjectClient__Class *)(ulonglong)(uVar3 & 0x3f);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (longlong)in_R8;
        }
        UNLOCK();
      } while (!bVar8);
    }
    uStack_10 = (ulonglong)(uint)(pDVar2->fields)._version;
    uStack_11 = 2;
    uStack_12 = 0;
    uStack_13 = 0;
    DStack_14._version = (undefined4)uStack_10;
    DStack_14._index = uStack_10._4_4_;
    DStack_14._current.key = (Object *)0x0;
    DStack_14._current.value = (Object *)0x0;
    DStack_14._getEnumeratorRetType = 2;
    DStack_14._36_4_ = 0;
    uStack_15 = 0;
    pDStack_16 = &DStack_14;
    pDStack_4 = pDVar2;
    DStack_14._dictionary = pDVar2;
    while (bVar17 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_14,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              ), pMVar18 = (MVWorldObjectClient__Class *)DStack_14._current.value,
          bVar17 != 0) {
      if (DStack_14._current.key == (Object *)0x0) goto code_?;
      pSVar20 = (String *)(*((DStack_14._current.key)->klass->vtable).ToString.methodPtr)();
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Globalization__CultureInfo);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      key_00 = 0;
      if (pSVar20 != (String *)0x0) {
        if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_02 = mscorlib.dll::System::Threading::Thread::Thread_get_CurrentThread
                            ((MethodInfo *)0x0);
        if (this_02 == (Thread *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Globalization__CultureInfo);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        provider = mscorlib.dll::System::Threading::Thread::Thread_GetCurrentCultureNoAppX
                             (this_02,(MethodInfo *)0x0);
        key_00 = mscorlib.dll::System::Int32::Int32_Parse_2
                           (pSVar20,(IFormatProvider *)provider,(MethodInfo *)0x0);
      }
      if (pMVar18 == (MVWorldObjectClient__Class *)0x0) goto code_?;
      pDVar2 = pDRam0000000182dbbc18;
      if ((((MVWorldObjectClient__Class *)((Il2CppClass_0 *)&((Object *)pMVar18)->klass)->image)->_0
          ).element_class != (Il2CppClass *)(pDRam0000000182dbbc18->fields)._values)
      goto code_?;
      key = (((MVWorldObjectClient__Fields *)&((Il2CppClass_0 *)&((Object *)pMVar18)->klass)->name)
            ->_).id;
      pDVar22 = (this->fields).nodeIdToWoMap;
      if (pDVar22 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0)
      goto code_?;
      in_R8 = (MVWorldObjectClient__Class *)
              MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
      ;
      unaff_RBX = (MVWorldObjectClient__Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar22,key_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                            );
      pDVar22 = (this->fields).nodeIdToWoMap;
      if (pDVar22 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0)
      goto code_?;
      in_R8 = (MVWorldObjectClient__Class *)
              MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
      ;
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar22,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                          );
      if (unaff_RBX == (MVWorldObjectClient__Class *)0x0) goto code_?;
      (((Dictionary_2_System_Object_System_Object___Class *)unaff_RBX)->vtable).Finalize.methodPtr =
           (Il2CppMethodPointer)pDVar2;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)
                        &(((Dictionary_2_System_Object_System_Object___Class *)unaff_RBX)->vtable).
                         Finalize >> 0xc);
        uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        in_R8 = (MVWorldObjectClient__Class *)(ulonglong)(uVar3 & 0x3f);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (longlong)in_R8;
          }
          UNLOCK();
        } while (!bVar8);
      }
      iVar23 = iRam_?;
      if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pDVar2[4].klass = (Dictionary_2_System_Object_System_Object___Class *)unaff_RBX;
      if (iVar23 != 0) {
        uVar3 = (uint)((ulonglong)(pDVar2 + 4) >> 0xc);
        uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        in_R8 = (MVWorldObjectClient__Class *)(ulonglong)(uVar3 & 0x3f);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (longlong)in_R8;
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    this_01 = (this->fields)._.blueprintData;
    if ((this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pMVar18 = (MVWorldObjectClient__Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this_01,(Object *)StringLiteral_StartNode,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pMVar18 != (MVWorldObjectClient__Class *)0x0)) {
      if ((((MVWorldObjectClient__Class *)(pMVar18->_0).image)->_0).element_class !=
          (Il2CppClass *)(pDRam0000000182dbbc18->fields)._values) {
        FUN_?(pMVar18);
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?(unaff_RBX);
code_?:
        FUN_?(pMVar18,pDVar2);
code_?:
        FUN_?();
        in_R8 = pMVar18;
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
        pMVar18 = in_R8;
code_?:
        FUN_?();
code_?:
        FUN_?(pMVar18,pDVar2);
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar24 = (code *)swi(3);
        (*pcVar24)();
        return;
      }
      pDVar22 = (this->fields).nodeIdToWoMap;
      if (pDVar22 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) {
        pMVar25 = (MVMovingPlatformNode *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar22,
                             (((MVWorldObjectClient__Fields *)&(pMVar18->_0).name)->_).id,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                            );
        (this->fields).startNode = pMVar25;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields).startNode >> 0xc);
          uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        pMVar26 = (MVMovingPlatform *)
                  MVBlueprintBase::MVBlueprintBase_GetChild
                            ((MVBlueprintBase *)this,StringLiteral_Platform,(MethodInfo *)0x0);
        if (pMVar26 == (MVMovingPlatform *)0x0) {
          (this->fields).platform = (MVMovingPlatform *)0x0;
        }
        else {
          bVar21 = (TypeInfo__MVMovingPlatform->_1).naturalAligment;
          if (((pMVar26->klass->_1).naturalAligment < bVar21) ||
             ((MVMovingPlatform__Class *)(pMVar26->klass->_1).typeHierarchy[(ulonglong)bVar21 - 1] !=
              TypeInfo__MVMovingPlatform)) {
            FUN_?(pMVar26);
            pcVar24 = (code *)swi(3);
            (*pcVar24)();
            return;
          }
          (this->fields).platform = pMVar26;
          bVar21 = (TypeInfo__MVMovingPlatform->_1).naturalAligment;
          if (((pMVar26->klass->_1).naturalAligment < bVar21) ||
             ((MVMovingPlatform__Class *)(pMVar26->klass->_1).typeHierarchy[(ulonglong)bVar21 - 1] !=
              TypeInfo__MVMovingPlatform)) {
            FUN_?(pMVar26);
            pcVar24 = (code *)swi(3);
            (*pcVar24)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields).platform >> 0xc);
          uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        iVar23 = iRam_?;
        if ((this->fields).platform == (MVMovingPlatform *)0x0) {
          pSVar20 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&this->fields,(MethodInfo *)0x0);
          pSVar20 = mscorlib.dll::System::String::String_Concat_5
                              (StringLiteral_Platform_group_,pSVar20,
                               StringLiteral__init___Could_not_find_child_pla,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar20,(MethodInfo *)0x0);
          (this->fields).initializeFailed = 1;
          return;
        }
        pMVar26 = (this->fields).platform;
        pMVar25 = (this->fields).startNode;
        if ((pMVar25 != (MVMovingPlatformNode *)0x0) &&
           (pMVar27 = (pMVar25->fields)._Next_k__BackingField, pMVar26 != (MVMovingPlatform *)0x0)) {
          (pMVar26->fields).start = pMVar25;
          if (iVar23 != 0) {
            uVar3 = (uint)((ulonglong)&(pMVar26->fields).start >> 0xc);
            uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
              iVar23 = iRam_?;
            } while (!bVar8);
          }
          (pMVar26->fields).end = pMVar27;
          if (iVar23 != 0) {
            uVar3 = (uint)((ulonglong)&(pMVar26->fields).end >> 0xc);
            uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          MVMovingPlatform::MVMovingPlatform_RecalculateMovement(pMVar26,(MethodInfo *)0x0);
          pUVar28 = (this->fields)._._._.ScaleChanged;
          this_03 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_03,(Object *)this,
                     MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar29 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pUVar28,(Delegate *)this_03,(MethodInfo *)0x0);
          pUVar30 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
          if (pDVar29 == (Delegate *)0x0) {
            (this->fields)._._._.ScaleChanged =
                 (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
          }
          else {
            pUVar28 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                      FUN_?(pDVar29,
                                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                   );
            if (pUVar28 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
              FUN_?(pDVar29,pUVar30);
              pcVar24 = (code *)swi(3);
              (*pcVar24)();
              return;
            }
            (this->fields)._._._.ScaleChanged = pUVar28;
            pUVar30 = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
            lVar31 = FUN_?();
            if (lVar31 == 0) {
              FUN_?(pDVar29,pUVar30);
              pcVar24 = (code *)swi(3);
              (*pcVar24)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&(this->fields)._._._.ScaleChanged >> 0xc);
            uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((this->fields).initializeFailed != 0) {
            return;
          }
          pLVar32 = (this->fields).lineRenderer;
          if (pLVar32 != (LineRenderer *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar33 = (pLVar32->fields)._._._.m_CachedPtr;
            if (pvVar33 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar32,(MethodInfo *)0x0);
              pcVar24 = (code *)swi(3);
              (*pcVar24)();
              return;
            }
            pcVar24 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
              uVar34 = func_?(&UNK_?);
              FUN_?(uVar34,0);
              pcVar24 = (code *)swi(3);
              (*pcVar24)();
              return;
            }
            pcRam_? = pcVar24;
            (*pcRam_?)(pvVar33,0);
            pLVar32 = (this->fields).lineRenderer;
            pDVar22 = (this->fields).nodeIdToWoMap;
            if ((pDVar22 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) &&
               (pLVar32 != (LineRenderer *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                        (pLVar32,(pDVar22->fields)._count - (pDVar22->fields)._freeCount,
                         (MethodInfo *)0x0);
              puVar35 = (undefined8 *)
                        (*(pMStack_1->klass->vtable).get_Scale.methodPtr)(&pMStack_1,this);
              pMStack_1 = (MVMovingPlatformGroup *)*puVar35;
              uStack_36 = *(undefined4 *)(puVar35 + 1);
              value = SUB84(pMStack_1,0) * _UNK_?;
              pLVar32 = (this->fields).lineRenderer;
              if (pLVar32 != (LineRenderer *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                          (pLVar32,value,(MethodInfo *)0x0);
                pLVar32 = (this->fields).lineRenderer;
                if (pLVar32 != (LineRenderer *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                            (pLVar32,value,(MethodInfo *)0x0);
                  pMVar25 = (this->fields).startNode;
                  pLVar32 = (this->fields).lineRenderer;
                  if (pMVar25 != (MVMovingPlatformNode *)0x0) {
                    puVar35 = (undefined8 *)
                              (*(pMVar25->klass->vtable).get_Position.methodPtr)
                                        (&uStack_15,pMVar25,
                                         (pMVar25->klass->vtable).get_Position.method);
                    if (pLVar32 == (LineRenderer *)0x0) {
                      FUN_?();
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pMStack_1 = (MVMovingPlatformGroup *)*puVar35;
                    uStack_36 = *(undefined4 *)(puVar35 + 1);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar33 = (pLVar32->fields)._._._.m_CachedPtr;
                    if (pvVar33 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar32,(MethodInfo *)0x0);
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pcVar24 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
                      uVar34 = func_?(&UNK_?);
                      FUN_?(uVar34,0);
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pcRam_? = pcVar24;
                    (*pcRam_?)(pvVar33,0,&pMStack_1);
                    do {
                      if ((pMVar25->fields)._Next_k__BackingField == (MVMovingPlatformNode *)0x0) {
                        return;
                      }
                      if ((pMVar25->fields)._Next_k__BackingField == (this->fields).startNode) {
                        return;
                      }
                      iVar9 = iVar9 + 1;
                      pLVar32 = (this->fields).lineRenderer;
                      pMVar27 = (pMVar25->fields)._Next_k__BackingField;
                      pMVar37 = pMVar27->klass;
                      puVar35 = (undefined8 *)
                                (*(pMVar37->vtable).get_Position.methodPtr)
                                          (&uStack_15,pMVar27,(pMVar37->vtable).get_Position.method);
                      if (pLVar32 == (LineRenderer *)0x0) {
                        FUN_?();
                        pcVar24 = (code *)swi(3);
                        (*pcVar24)();
                        return;
                      }
                      pMStack_1 = (MVMovingPlatformGroup *)*puVar35;
                      uStack_36 = *(undefined4 *)(puVar35 + 1);
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar33 = (pLVar32->fields)._._._.m_CachedPtr;
                      if (pvVar33 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pLVar32,(MethodInfo *)0x0);
                        pcVar24 = (code *)swi(3);
                        (*pcVar24)();
                        return;
                      }
                      pcVar24 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0))
                      {
                        uVar34 = func_?(&UNK_?);
                        FUN_?(uVar34,0);
                        pcVar24 = (code *)swi(3);
                        (*pcVar24)();
                        return;
                      }
                      pcRam_? = pcVar24;
                      (*pcRam_?)(pvVar33,iVar9,&pMStack_1);
                      pMVar25 = (pMVar25->fields)._Next_k__BackingField;
                    } while (pMVar25 != (MVMovingPlatformNode *)0x0);
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
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_InitializeInventory
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  pMStackX_20 = this;
  pMStack_1 = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovingPlatformNode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovingPlatform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__init___Could_not_find_child_nod);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Platform);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_StartNode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___If_this_is_a_new_platform_grou);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Platform_group_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__init___Could_not_find_child_pla);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.childIdMap;
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pDStack_4 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      in_R8 = (MVWorldObjectClient__Class *)(ulonglong)(uVar3 & 0x3f);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (longlong)in_R8;
        }
        UNLOCK();
      } while (!bVar8);
    }
    iVar9 = 0;
    uStack_10 = (ulonglong)(uint)(pDVar2->fields)._version;
    uStack_11 = 2;
    uStack_12 = 0;
    uStack_13 = 0;
    DStack_14._version = (undefined4)uStack_10;
    DStack_14._index = uStack_10._4_4_;
    DStack_14._current.key = (Object *)0x0;
    DStack_14._current.value = (Object *)0x0;
    DStack_14._getEnumeratorRetType = 2;
    DStack_14._36_4_ = 0;
    uStack_15 = 0;
    pDStack_16 = &DStack_14;
    pDStack_4 = pDVar2;
    DStack_14._dictionary = pDVar2;
code_?:
    do {
      bVar17 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
               Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                         (&DStack_14,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                         );
      pMVar18 = (MVWorldObjectClient__Class *)DStack_14._current.value;
      pOVar19 = DStack_14._current.key;
      if (bVar17 == 0) goto code_?;
      if (DStack_14._current.key == (Object *)0x0) goto code_?;
      pSVar20 = (String *)
                (*((DStack_14._current.key)->klass->vtable).ToString.methodPtr)
                          (DStack_14._current.key,
                           ((DStack_14._current.key)->klass->vtable).ToString.method);
      if (pSVar20 == (String *)0x0) goto code_?;
      if (pSVar20 != StringLiteral_Platform) {
        if ((StringLiteral_Platform != (String *)0x0) &&
           ((pSVar20->fields)._stringLength == (StringLiteral_Platform->fields)._stringLength)) {
          in_R8 = (MVWorldObjectClient__Class *)((longlong)(pSVar20->fields)._stringLength * 2);
          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)0x0;
          bVar17 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar20->fields)._firstChar,
                              (uint8_t *)&(StringLiteral_Platform->fields)._firstChar,
                              (uint64_t)in_R8,(MethodInfo *)0x0);
          if (bVar17 != 0) goto code_?;
        }
        if (pOVar19 == (Object *)0x0) goto code_?;
        pSVar20 = (String *)(*(pOVar19->klass->vtable).ToString.methodPtr)();
        if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar3 = mscorlib.dll::System::Convert::Convert_ToInt32_14(pSVar20,(MethodInfo *)0x0);
        pDVar2 = pDRam0000000182dbbc18;
        if (pMVar18 == (MVWorldObjectClient__Class *)0x0) goto code_?;
        if ((((MVWorldObjectClient__Class *)((Il2CppClass_0 *)&((Object *)pMVar18)->klass)->image)->
            _0).element_class != (Il2CppClass *)(pDRam0000000182dbbc18->fields)._values)
        goto code_?;
        aIStackX_18[0].m_value =
             (((MVWorldObjectClient__Fields *)&((Il2CppClass_0 *)&((Object *)pMVar18)->klass)->name)
             ->_).id;
        pMVar18 = (MVWorldObjectClient__Class *)0x0;
        unaff_RBX = (MVWorldObjectClient__Class *)
                    MVGroup::MVGroup_GetChild
                              ((MVGroup *)this,aIStackX_18[0].m_value,(MethodInfo *)0x0);
        if (unaff_RBX == (MVWorldObjectClient__Class *)0x0) {
          values = (String__Array *)FUN_?(TypeInfo__System__String);
          unaff_RBX = (MVWorldObjectClient__Class *)0x0;
          if (values != (String__Array *)0x0) {
            FUN_?(values,0,StringLiteral_Platform_group_);
            pSVar20 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&this->fields,(MethodInfo *)0x0);
            FUN_?(values,1,pSVar20);
            FUN_?(values,2,StringLiteral__init___Could_not_find_child_nod);
            pSVar20 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
            FUN_?(values,3,pSVar20);
            FUN_?(values,4,StringLiteral___If_this_is_a_new_platform_grou);
            pSVar20 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)pSVar20,(MethodInfo *)0x0);
            (this->fields).initializeFailed = 1;
            return;
          }
          goto code_?;
        }
        pMVar18 = *(MVWorldObjectClient__Class **)&unaff_RBX->_0;
        bVar21 = (TypeInfo__MVMovingPlatformNode->_1).naturalAligment;
        if (((pMVar18->_1).naturalAligment < bVar21) ||
           (*(MVMovingPlatformNode__Class **)
             ((longlong)(pMVar18->_1).typeHierarchy + (ulonglong)bVar21 * 8 + -8) !=
            TypeInfo__MVMovingPlatformNode)) goto code_?;
        pDVar22 = (this->fields).nodeIdToWoMap;
        if (pDVar22 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0)
        goto code_?;
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                  CONCAT71((int7)((ulonglong)pDVar2 >> 8),1);
        pMVar18 = unaff_RBX;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar22,uVar3,(Object *)unaff_RBX,
                   (InsertionBehavior__Enum)pDVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
                   ->klass->rgctx_data[0x22].method);
        this_00 = (this->fields).woIdToNodeIdMap;
        if (this_00 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                  CONCAT71((int7)((ulonglong)pDVar2 >> 8),1);
        in_R8 = (MVWorldObjectClient__Class *)(ulonglong)uVar3;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
        Dictionary_2_System_Int32_System_Int32__TryInsert
                  (this_00,*(int32_t *)&(unaff_RBX->_0).name,uVar3,(InsertionBehavior__Enum)pDVar2
                   ,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                    ->klass->rgctx_data[0x22].method);
      }
    } while( true );
  }
  goto code_?;
code_?:
  pDVar2 = (this->fields).nextNodeMap;
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pDStack_4 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      in_R8 = (MVWorldObjectClient__Class *)(ulonglong)(uVar3 & 0x3f);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (longlong)in_R8;
        }
        UNLOCK();
      } while (!bVar8);
    }
    uStack_10 = (ulonglong)(uint)(pDVar2->fields)._version;
    uStack_11 = 2;
    uStack_12 = 0;
    uStack_13 = 0;
    DStack_14._version = (undefined4)uStack_10;
    DStack_14._index = uStack_10._4_4_;
    DStack_14._current.key = (Object *)0x0;
    DStack_14._current.value = (Object *)0x0;
    DStack_14._getEnumeratorRetType = 2;
    DStack_14._36_4_ = 0;
    uStack_15 = 0;
    pDStack_16 = &DStack_14;
    pDStack_4 = pDVar2;
    DStack_14._dictionary = pDVar2;
    while (bVar17 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_14,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              ), pMVar18 = (MVWorldObjectClient__Class *)DStack_14._current.value,
          bVar17 != 0) {
      if (DStack_14._current.key == (Object *)0x0) goto code_?;
      pSVar20 = (String *)(*((DStack_14._current.key)->klass->vtable).ToString.methodPtr)();
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Globalization__CultureInfo);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      key_00 = 0;
      if (pSVar20 != (String *)0x0) {
        if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_02 = mscorlib.dll::System::Threading::Thread::Thread_get_CurrentThread
                            ((MethodInfo *)0x0);
        if (this_02 == (Thread *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Globalization__CultureInfo);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        provider = mscorlib.dll::System::Threading::Thread::Thread_GetCurrentCultureNoAppX
                             (this_02,(MethodInfo *)0x0);
        key_00 = mscorlib.dll::System::Int32::Int32_Parse_2
                           (pSVar20,(IFormatProvider *)provider,(MethodInfo *)0x0);
      }
      if (pMVar18 == (MVWorldObjectClient__Class *)0x0) goto code_?;
      pDVar2 = pDRam0000000182dbbc18;
      if ((((MVWorldObjectClient__Class *)((Il2CppClass_0 *)&((Object *)pMVar18)->klass)->image)->_0
          ).element_class != (Il2CppClass *)(pDRam0000000182dbbc18->fields)._values)
      goto code_?;
      key = (((MVWorldObjectClient__Fields *)&((Il2CppClass_0 *)&((Object *)pMVar18)->klass)->name)
            ->_).id;
      pDVar22 = (this->fields).nodeIdToWoMap;
      if (pDVar22 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0)
      goto code_?;
      in_R8 = (MVWorldObjectClient__Class *)
              MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
      ;
      unaff_RBX = (MVWorldObjectClient__Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar22,key_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                            );
      pDVar22 = (this->fields).nodeIdToWoMap;
      if (pDVar22 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0)
      goto code_?;
      in_R8 = (MVWorldObjectClient__Class *)
              MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
      ;
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar22,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                          );
      if (unaff_RBX == (MVWorldObjectClient__Class *)0x0) goto code_?;
      (((Dictionary_2_System_Object_System_Object___Class *)unaff_RBX)->vtable).Finalize.methodPtr =
           (Il2CppMethodPointer)pDVar2;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)
                        &(((Dictionary_2_System_Object_System_Object___Class *)unaff_RBX)->vtable).
                         Finalize >> 0xc);
        uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        in_R8 = (MVWorldObjectClient__Class *)(ulonglong)(uVar3 & 0x3f);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (longlong)in_R8;
          }
          UNLOCK();
        } while (!bVar8);
      }
      iVar23 = iRam_?;
      if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pDVar2[4].klass = (Dictionary_2_System_Object_System_Object___Class *)unaff_RBX;
      if (iVar23 != 0) {
        uVar3 = (uint)((ulonglong)(pDVar2 + 4) >> 0xc);
        uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        in_R8 = (MVWorldObjectClient__Class *)(ulonglong)(uVar3 & 0x3f);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (longlong)in_R8;
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    this_01 = (this->fields)._.blueprintData;
    if ((this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pMVar18 = (MVWorldObjectClient__Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this_01,(Object *)StringLiteral_StartNode,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pMVar18 != (MVWorldObjectClient__Class *)0x0)) {
      if ((((MVWorldObjectClient__Class *)(pMVar18->_0).image)->_0).element_class !=
          (Il2CppClass *)(pDRam0000000182dbbc18->fields)._values) {
        FUN_?(pMVar18);
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?(unaff_RBX);
code_?:
        FUN_?(pMVar18,pDVar2);
code_?:
        FUN_?();
        in_R8 = pMVar18;
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
        pMVar18 = in_R8;
code_?:
        FUN_?();
code_?:
        FUN_?(pMVar18,pDVar2);
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar24 = (code *)swi(3);
        (*pcVar24)();
        return;
      }
      pDVar22 = (this->fields).nodeIdToWoMap;
      if (pDVar22 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) {
        pMVar25 = (MVMovingPlatformNode *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar22,
                             (((MVWorldObjectClient__Fields *)&(pMVar18->_0).name)->_).id,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                            );
        (this->fields).startNode = pMVar25;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields).startNode >> 0xc);
          uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        pMVar26 = (MVMovingPlatform *)
                  MVBlueprintBase::MVBlueprintBase_GetChild
                            ((MVBlueprintBase *)this,StringLiteral_Platform,(MethodInfo *)0x0);
        if (pMVar26 == (MVMovingPlatform *)0x0) {
          (this->fields).platform = (MVMovingPlatform *)0x0;
        }
        else {
          bVar21 = (TypeInfo__MVMovingPlatform->_1).naturalAligment;
          if (((pMVar26->klass->_1).naturalAligment < bVar21) ||
             ((MVMovingPlatform__Class *)(pMVar26->klass->_1).typeHierarchy[(ulonglong)bVar21 - 1] !=
              TypeInfo__MVMovingPlatform)) {
            FUN_?(pMVar26);
            pcVar24 = (code *)swi(3);
            (*pcVar24)();
            return;
          }
          (this->fields).platform = pMVar26;
          bVar21 = (TypeInfo__MVMovingPlatform->_1).naturalAligment;
          if (((pMVar26->klass->_1).naturalAligment < bVar21) ||
             ((MVMovingPlatform__Class *)(pMVar26->klass->_1).typeHierarchy[(ulonglong)bVar21 - 1] !=
              TypeInfo__MVMovingPlatform)) {
            FUN_?(pMVar26);
            pcVar24 = (code *)swi(3);
            (*pcVar24)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields).platform >> 0xc);
          uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        iVar23 = iRam_?;
        if ((this->fields).platform == (MVMovingPlatform *)0x0) {
          pSVar20 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&this->fields,(MethodInfo *)0x0);
          pSVar20 = mscorlib.dll::System::String::String_Concat_5
                              (StringLiteral_Platform_group_,pSVar20,
                               StringLiteral__init___Could_not_find_child_pla,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar20,(MethodInfo *)0x0);
          (this->fields).initializeFailed = 1;
          return;
        }
        pMVar26 = (this->fields).platform;
        pMVar25 = (this->fields).startNode;
        if ((pMVar25 != (MVMovingPlatformNode *)0x0) &&
           (pMVar27 = (pMVar25->fields)._Next_k__BackingField, pMVar26 != (MVMovingPlatform *)0x0)) {
          (pMVar26->fields).start = pMVar25;
          if (iVar23 != 0) {
            uVar3 = (uint)((ulonglong)&(pMVar26->fields).start >> 0xc);
            uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
              iVar23 = iRam_?;
            } while (!bVar8);
          }
          (pMVar26->fields).end = pMVar27;
          if (iVar23 != 0) {
            uVar3 = (uint)((ulonglong)&(pMVar26->fields).end >> 0xc);
            uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          MVMovingPlatform::MVMovingPlatform_RecalculateMovement(pMVar26,(MethodInfo *)0x0);
          pUVar28 = (this->fields)._._._.ScaleChanged;
          this_03 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_03,(Object *)this,
                     MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar29 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pUVar28,(Delegate *)this_03,(MethodInfo *)0x0);
          pUVar30 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
          if (pDVar29 == (Delegate *)0x0) {
            (this->fields)._._._.ScaleChanged =
                 (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
          }
          else {
            pUVar28 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                      FUN_?(pDVar29,
                                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                   );
            if (pUVar28 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
              FUN_?(pDVar29,pUVar30);
              pcVar24 = (code *)swi(3);
              (*pcVar24)();
              return;
            }
            (this->fields)._._._.ScaleChanged = pUVar28;
            pUVar30 = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
            lVar31 = FUN_?();
            if (lVar31 == 0) {
              FUN_?(pDVar29,pUVar30);
              pcVar24 = (code *)swi(3);
              (*pcVar24)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&(this->fields)._._._.ScaleChanged >> 0xc);
            uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((this->fields).initializeFailed != 0) {
            return;
          }
          pLVar32 = (this->fields).lineRenderer;
          if (pLVar32 != (LineRenderer *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar33 = (pLVar32->fields)._._._.m_CachedPtr;
            if (pvVar33 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar32,(MethodInfo *)0x0);
              pcVar24 = (code *)swi(3);
              (*pcVar24)();
              return;
            }
            pcVar24 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
              uVar34 = func_?(&UNK_?);
              FUN_?(uVar34,0);
              pcVar24 = (code *)swi(3);
              (*pcVar24)();
              return;
            }
            pcRam_? = pcVar24;
            (*pcRam_?)(pvVar33,0);
            pLVar32 = (this->fields).lineRenderer;
            pDVar22 = (this->fields).nodeIdToWoMap;
            if ((pDVar22 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) &&
               (pLVar32 != (LineRenderer *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                        (pLVar32,(pDVar22->fields)._count - (pDVar22->fields)._freeCount,
                         (MethodInfo *)0x0);
              puVar35 = (undefined8 *)
                        (*(pMStack_1->klass->vtable).get_Scale.methodPtr)(&pMStack_1,this);
              pMStack_1 = (MVMovingPlatformGroup *)*puVar35;
              uStack_36 = *(undefined4 *)(puVar35 + 1);
              value = SUB84(pMStack_1,0) * _UNK_?;
              pLVar32 = (this->fields).lineRenderer;
              if (pLVar32 != (LineRenderer *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                          (pLVar32,value,(MethodInfo *)0x0);
                pLVar32 = (this->fields).lineRenderer;
                if (pLVar32 != (LineRenderer *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                            (pLVar32,value,(MethodInfo *)0x0);
                  pMVar25 = (this->fields).startNode;
                  pLVar32 = (this->fields).lineRenderer;
                  if (pMVar25 != (MVMovingPlatformNode *)0x0) {
                    puVar35 = (undefined8 *)
                              (*(pMVar25->klass->vtable).get_Position.methodPtr)
                                        (&uStack_15,pMVar25,
                                         (pMVar25->klass->vtable).get_Position.method);
                    if (pLVar32 == (LineRenderer *)0x0) {
                      FUN_?();
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pMStack_1 = (MVMovingPlatformGroup *)*puVar35;
                    uStack_36 = *(undefined4 *)(puVar35 + 1);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar33 = (pLVar32->fields)._._._.m_CachedPtr;
                    if (pvVar33 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar32,(MethodInfo *)0x0);
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pcVar24 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
                      uVar34 = func_?(&UNK_?);
                      FUN_?(uVar34,0);
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pcRam_? = pcVar24;
                    (*pcRam_?)(pvVar33,0,&pMStack_1);
                    do {
                      if ((pMVar25->fields)._Next_k__BackingField == (MVMovingPlatformNode *)0x0) {
                        return;
                      }
                      if ((pMVar25->fields)._Next_k__BackingField == (this->fields).startNode) {
                        return;
                      }
                      iVar9 = iVar9 + 1;
                      pLVar32 = (this->fields).lineRenderer;
                      pMVar27 = (pMVar25->fields)._Next_k__BackingField;
                      pMVar37 = pMVar27->klass;
                      puVar35 = (undefined8 *)
                                (*(pMVar37->vtable).get_Position.methodPtr)
                                          (&uStack_15,pMVar27,(pMVar37->vtable).get_Position.method);
                      if (pLVar32 == (LineRenderer *)0x0) {
                        FUN_?();
                        pcVar24 = (code *)swi(3);
                        (*pcVar24)();
                        return;
                      }
                      pMStack_1 = (MVMovingPlatformGroup *)*puVar35;
                      uStack_36 = *(undefined4 *)(puVar35 + 1);
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar33 = (pLVar32->fields)._._._.m_CachedPtr;
                      if (pvVar33 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pLVar32,(MethodInfo *)0x0);
                        pcVar24 = (code *)swi(3);
                        (*pcVar24)();
                        return;
                      }
                      pcVar24 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0))
                      {
                        uVar34 = func_?(&UNK_?);
                        FUN_?(uVar34,0);
                        pcVar24 = (code *)swi(3);
                        (*pcVar24)();
                        return;
                      }
                      pcRam_? = pcVar24;
                      (*pcRam_?)(pvVar33,iVar9,&pMStack_1);
                      pMVar25 = (pMVar25->fields)._Next_k__BackingField;
                    } while (pMVar25 != (MVMovingPlatformNode *)0x0);
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
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_OnEnterObject
               (MVMovingPlatformGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  pMVar1 = (this->fields).platform;
  if (pMVar1 != (MVMovingPlatform *)0x0) {
    (*(pMVar1->klass->vtable).OnEnterObject.methodPtr)
              (pMVar1,e,(pMVar1->klass->vtable).OnEnterObject.method);
    return 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void SetWorldObjectToPurchased() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_SetWorldObjectToPurchased
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._._._._.previewOwnerProfileId = 0;
  piVar1 = &(this->fields)._._._.interactionFlags;
  *piVar1 = *piVar1 & 0xfffffffffffdffff;
  (*(this->klass->vtable).RemovePreviewBox.methodPtr)
            (this,(this->klass->vtable).RemovePreviewBox.method);
  pMVar2 = (this->fields).platform;
  if ((pMVar2 != (MVMovingPlatform *)0x0) &&
     (pMVar3 = (pMVar2->fields)._._CubeModel_k__BackingField, pMVar3 != (MVCubeModelInstance *)0x0))
  {
    (*(pMVar3->klass->vtable).SetWorldObjectToPurchased.methodPtr)
              (pMVar3,(pMVar3->klass->vtable).SetWorldObjectToPurchased.method);
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields).nodeIdToWoMap;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) && (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                            UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                      (this_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                                      ),
                 pDVar4 !=
                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
      uStack_5 = (pDVar4->fields)._dictionary;
      puStack_6 = (undefined4 *)0x0;
      uStack_7 = 0;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&uStack_5 >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
      if (uStack_5 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iStack_13 = (uStack_5->fields)._version;
      uStack_7 = 0;
      uStack_5._4_4_ = (undefined4)((ulonglong)uStack_5 >> 0x20);
      uStack_14 = (undefined4)uStack_5;
      uStack_15 = uStack_5._4_4_;
      uStack_16 = 0;
      aplStack_17[0] = (longlong *)0x0;
      uStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
      puStack_6 = &uStack_14;
      do {
        lVar18 = CONCAT44(uStack_15,uStack_14);
        if (lVar18 == 0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (iStack_13 != *(int *)(lVar18 + 0x2c)) {
code_?:
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                    ((MethodInfo *)0x0);
          goto code_?;
        }
        do {
          if (lVar18 == 0) goto code_?;
          if (*(uint *)(lVar18 + 0x20) <= uStack_16) {
            return;
          }
          lVar19 = *(longlong *)(lVar18 + 0x18);
          lVar20 = (longlong)(int)uStack_16;
          uVar8 = uStack_16 + 1;
          if (lVar19 == 0) goto code_?;
          if (*(uint *)(lVar19 + 0x18) <= uStack_16) {
            uStack_16 = uVar8;
            FUN_?();
            goto code_?;
          }
          uStack_16 = uVar8;
        } while (*(int *)(lVar19 + 0x20 + lVar20 * 0x18) < 0);
        aplStack_17[0] = *(longlong **)(lVar19 + (lVar20 + 2) * 0x18);
        func_?(aplStack_17);
        if (aplStack_17[0] == (longlong *)0x0) {
code_?:
          FUN_?();
          uVar8 = uStack_16;
code_?:
          uStack_16 = uVar8;
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
        (**(code **)(*aplStack_17[0] + 0x448))
                  (aplStack_17[0],*(undefined8 *)(*aplStack_17[0] + 0x450));
      } while( true );
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateLine() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_UpdateLine
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).initializeFailed != 0) {
    return;
  }
  pLVar1 = (this->fields).lineRenderer;
  if (pLVar1 != (LineRenderer *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pLVar1->fields)._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2,0);
    pDVar5 = (this->fields).nodeIdToWoMap;
    if ((pDVar5 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) &&
       (pLVar1 = (this->fields).lineRenderer, pLVar1 != (LineRenderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                (pLVar1,(pDVar5->fields)._count - (pDVar5->fields)._freeCount,(MethodInfo *)0x0);
      puVar6 = (undefined8 *)(*(this->klass->vtable).get_Scale.methodPtr)(&uStack_7,this);
      pLVar1 = (this->fields).lineRenderer;
      uStack_7 = *puVar6;
      uStack_8 = *(undefined4 *)(puVar6 + 1);
      value = (float)uStack_7 * _UNK_?;
      if (pLVar1 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                  (pLVar1,value,(MethodInfo *)0x0);
        pLVar1 = (this->fields).lineRenderer;
        if (pLVar1 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                    (pLVar1,value,(MethodInfo *)0x0);
          pMVar9 = (this->fields).startNode;
          iVar10 = 0;
          pLVar1 = (this->fields).lineRenderer;
          if (pMVar9 != (MVMovingPlatformNode *)0x0) {
            puVar6 = (undefined8 *)
                     (*(pMVar9->klass->vtable).get_Position.methodPtr)
                               (auStack_11,pMVar9,(pMVar9->klass->vtable).get_Position.method);
            if (pLVar1 == (LineRenderer *)0x0) {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uStack_7 = *puVar6;
            uStack_8 = *(undefined4 *)(puVar6 + 1);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar2 = (pLVar1->fields)._._._.m_CachedPtr;
            if (pvVar2 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar1,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar4 = func_?(&UNK_?);
              FUN_?(uVar4,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar2,0,&uStack_7);
            do {
              if ((pMVar9->fields)._Next_k__BackingField == (MVMovingPlatformNode *)0x0) {
                return;
              }
              if ((pMVar9->fields)._Next_k__BackingField == (this->fields).startNode) {
                return;
              }
              pMVar12 = (pMVar9->fields)._Next_k__BackingField;
              pLVar1 = (this->fields).lineRenderer;
              iVar10 = iVar10 + 1;
              pMVar13 = pMVar12->klass;
              puVar6 = (undefined8 *)
                       (*(pMVar13->vtable).get_Position.methodPtr)
                                 (auStack_11,pMVar12,(pMVar13->vtable).get_Position.method);
              if (pLVar1 == (LineRenderer *)0x0) {
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uStack_7 = *puVar6;
              uStack_8 = *(undefined4 *)(puVar6 + 1);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar2 = (pLVar1->fields)._._._.m_CachedPtr;
              if (pvVar2 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar1,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar4 = func_?(&UNK_?);
                FUN_?(uVar4,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
              (*pcRam_?)(pvVar2,iVar10,&uStack_7);
              pMVar9 = (pMVar9->fields)._Next_k__BackingField;
            } while (pMVar9 != (MVMovingPlatformNode *)0x0);
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void WorldObjectClient_PositionChangedHandler(Object, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::
     MVMovingPlatformGroup_WorldObjectClient_PositionChangedHandler
               (MVMovingPlatformGroup *this,Object *sender,PositionChangedEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMovingPlatformNode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sender != (Object *)0x0) {
    bVar1 = (TypeInfo__MVMovingPlatformNode->_1).naturalAligment;
    if ((bVar1 <= (sender->klass->_1).naturalAligment) &&
       ((MVMovingPlatformNode__Class *)(sender->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] ==
        TypeInfo__MVMovingPlatformNode)) {
      this_00 = (this->fields).platform;
      if (this_00 == (MVMovingPlatform *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this_00->fields).start == (MVMovingPlatformNode *)sender) ||
         ((this_00->fields).end == (MVMovingPlatformNode *)sender)) {
        MVMovingPlatform::MVMovingPlatform_RecalculateMovement(this_00,(MethodInfo *)0x0);
      }
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).initializeFailed != 0) {
    return;
  }
  pLVar3 = (this->fields).lineRenderer;
  if (pLVar3 != (LineRenderer *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar4,0);
    pDVar6 = (this->fields).nodeIdToWoMap;
    if ((pDVar6 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) &&
       (pLVar3 = (this->fields).lineRenderer, pLVar3 != (LineRenderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                (pLVar3,(pDVar6->fields)._count - (pDVar6->fields)._freeCount,(MethodInfo *)0x0);
      puVar7 = (undefined8 *)(*(this->klass->vtable).get_Scale.methodPtr)(&uStack_8,this);
      pLVar3 = (this->fields).lineRenderer;
      uStack_8 = *puVar7;
      value = (float)uStack_8 * _UNK_?;
      puStack_9 = (undefined *)CONCAT44(puStack_9._4_4_,*(undefined4 *)(puVar7 + 1));
      if (pLVar3 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                  (pLVar3,value,(MethodInfo *)0x0);
        pLVar3 = (this->fields).lineRenderer;
        if (pLVar3 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                    (pLVar3,value,(MethodInfo *)0x0);
          pMVar10 = (this->fields).startNode;
          iVar11 = 0;
          pLVar3 = (this->fields).lineRenderer;
          if (pMVar10 != (MVMovingPlatformNode *)0x0) {
            puVar7 = (undefined8 *)
                     (*(pMVar10->klass->vtable).get_Position.methodPtr)
                               (auStack_12,pMVar10,(pMVar10->klass->vtable).get_Position.method);
            if (pLVar3 == (LineRenderer *)0x0) {
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uStack_8 = *puVar7;
            puStack_9 = (undefined *)CONCAT44(puStack_9._4_4_,*(undefined4 *)(puVar7 + 1));
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
            if (pvVar4 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(pvVar4,0,&uStack_8);
            do {
              if ((pMVar10->fields)._Next_k__BackingField == (MVMovingPlatformNode *)0x0) {
                return;
              }
              if ((pMVar10->fields)._Next_k__BackingField == (this->fields).startNode) {
                return;
              }
              pMVar13 = (pMVar10->fields)._Next_k__BackingField;
              pLVar3 = (this->fields).lineRenderer;
              iVar11 = iVar11 + 1;
              pMVar14 = pMVar13->klass;
              puVar7 = (undefined8 *)
                       (*(pMVar14->vtable).get_Position.methodPtr)
                                 (auStack_12,pMVar13,(pMVar14->vtable).get_Position.method);
              if (pLVar3 == (LineRenderer *)0x0) {
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uStack_8 = *puVar7;
              puStack_9 = (undefined *)CONCAT44(puStack_9._4_4_,*(undefined4 *)(puVar7 + 1));
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              (*pcRam_?)(pvVar4,iVar11,&uStack_8);
              pMVar10 = (pMVar10->fields)._Next_k__BackingField;
            } while (pMVar10 != (MVMovingPlatformNode *)0x0);
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WorldObjectClient_RotationChangedHandler(Object, RotationChangedEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::
     MVMovingPlatformGroup_WorldObjectClient_RotationChangedHandler
               (MVMovingPlatformGroup *this,Object *sender,RotationChangedEventArgs *e,
               MethodInfo *method)

{
  this_00 = (this->fields).platform;
  if (this_00 == (MVMovingPlatform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2._0_4_ = 0x804b949c;
  uStack_2._4_4_ = 1;
  MVMovingPlatform::MVMovingPlatform_RecalculateMovement(this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).initializeFailed != 0) {
    return;
  }
  pLVar3 = (this->fields).lineRenderer;
  if (pLVar3 != (LineRenderer *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar4,0);
    pDVar6 = (this->fields).nodeIdToWoMap;
    if ((pDVar6 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) &&
       (pLVar3 = (this->fields).lineRenderer, pLVar3 != (LineRenderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                (pLVar3,(pDVar6->fields)._count - (pDVar6->fields)._freeCount,(MethodInfo *)0x0);
      puVar7 = (undefined8 *)(*(this->klass->vtable).get_Scale.methodPtr)(&uStack_8,this);
      pLVar3 = (this->fields).lineRenderer;
      uStack_8 = *puVar7;
      uStack_2._0_4_ = *(undefined4 *)(puVar7 + 1);
      value = (float)uStack_8 * _UNK_?;
      if (pLVar3 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                  (pLVar3,value,(MethodInfo *)0x0);
        pLVar3 = (this->fields).lineRenderer;
        if (pLVar3 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                    (pLVar3,value,(MethodInfo *)0x0);
          pMVar9 = (this->fields).startNode;
          iVar10 = 0;
          pLVar3 = (this->fields).lineRenderer;
          if (pMVar9 != (MVMovingPlatformNode *)0x0) {
            puVar7 = (undefined8 *)
                     (*(pMVar9->klass->vtable).get_Position.methodPtr)
                               (auStack_11,pMVar9,(pMVar9->klass->vtable).get_Position.method);
            if (pLVar3 == (LineRenderer *)0x0) {
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uStack_8 = *puVar7;
            uStack_2._0_4_ = *(undefined4 *)(puVar7 + 1);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
            if (pvVar4 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcRam_? = pcVar1;
            (*pcRam_?)(pvVar4,0,&uStack_8);
            do {
              if ((pMVar9->fields)._Next_k__BackingField == (MVMovingPlatformNode *)0x0) {
                return;
              }
              if ((pMVar9->fields)._Next_k__BackingField == (this->fields).startNode) {
                return;
              }
              pMVar12 = (pMVar9->fields)._Next_k__BackingField;
              pLVar3 = (this->fields).lineRenderer;
              iVar10 = iVar10 + 1;
              pMVar13 = pMVar12->klass;
              puVar7 = (undefined8 *)
                       (*(pMVar13->vtable).get_Position.methodPtr)
                                 (auStack_11,pMVar12,(pMVar13->vtable).get_Position.method);
              if (pLVar3 == (LineRenderer *)0x0) {
                FUN_?();
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uStack_8 = *puVar7;
              uStack_2._0_4_ = *(undefined4 *)(puVar7 + 1);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcVar1 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcRam_? = pcVar1;
              (*pcRam_?)(pvVar4,iVar10,&uStack_8);
              pMVar9 = (pMVar9->fields)._Next_k__BackingField;
            } while (pMVar9 != (MVMovingPlatformNode *)0x0);
          }
        }
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WorldObjectClient_ScaleChangedHandler(Object, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::
     MVMovingPlatformGroup_WorldObjectClient_ScaleChangedHandler
               (MVMovingPlatformGroup *this,Object *sender,ScaleChangedEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).initializeFailed != 0) {
    return;
  }
  pLVar1 = (this->fields).lineRenderer;
  if (pLVar1 != (LineRenderer *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pLVar1->fields)._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2,0);
    pDVar5 = (this->fields).nodeIdToWoMap;
    if ((pDVar5 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) &&
       (pLVar1 = (this->fields).lineRenderer, pLVar1 != (LineRenderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                (pLVar1,(pDVar5->fields)._count - (pDVar5->fields)._freeCount,(MethodInfo *)0x0);
      puVar6 = (undefined8 *)(*(this->klass->vtable).get_Scale.methodPtr)(&uStack_7,this);
      pLVar1 = (this->fields).lineRenderer;
      uStack_7 = *puVar6;
      uStack_8 = *(undefined4 *)(puVar6 + 1);
      value = (float)uStack_7 * _UNK_?;
      if (pLVar1 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                  (pLVar1,value,(MethodInfo *)0x0);
        pLVar1 = (this->fields).lineRenderer;
        if (pLVar1 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                    (pLVar1,value,(MethodInfo *)0x0);
          pMVar9 = (this->fields).startNode;
          iVar10 = 0;
          pLVar1 = (this->fields).lineRenderer;
          if (pMVar9 != (MVMovingPlatformNode *)0x0) {
            puVar6 = (undefined8 *)
                     (*(pMVar9->klass->vtable).get_Position.methodPtr)
                               (auStack_11,pMVar9,(pMVar9->klass->vtable).get_Position.method);
            if (pLVar1 == (LineRenderer *)0x0) {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uStack_7 = *puVar6;
            uStack_8 = *(undefined4 *)(puVar6 + 1);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar2 = (pLVar1->fields)._._._.m_CachedPtr;
            if (pvVar2 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar1,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar4 = func_?(&UNK_?);
              FUN_?(uVar4,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar2,0,&uStack_7);
            do {
              if ((pMVar9->fields)._Next_k__BackingField == (MVMovingPlatformNode *)0x0) {
                return;
              }
              if ((pMVar9->fields)._Next_k__BackingField == (this->fields).startNode) {
                return;
              }
              pMVar12 = (pMVar9->fields)._Next_k__BackingField;
              pLVar1 = (this->fields).lineRenderer;
              iVar10 = iVar10 + 1;
              pMVar13 = pMVar12->klass;
              puVar6 = (undefined8 *)
                       (*(pMVar13->vtable).get_Position.methodPtr)
                                 (auStack_11,pMVar12,(pMVar13->vtable).get_Position.method);
              if (pLVar1 == (LineRenderer *)0x0) {
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uStack_7 = *puVar6;
              uStack_8 = *(undefined4 *)(puVar6 + 1);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar2 = (pLVar1->fields)._._._.m_CachedPtr;
              if (pvVar2 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar1,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar4 = func_?(&UNK_?);
                FUN_?(uVar4,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
              (*pcRam_?)(pvVar2,iVar10,&uStack_7);
              pMVar9 = (pMVar9->fields)._Next_k__BackingField;
            } while (pMVar9 != (MVMovingPlatformNode *)0x0);
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void WorldObjectClient_SelectedChangedHandler(Object, SelectedEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::
     MVMovingPlatformGroup_WorldObjectClient_SelectedChangedHandler
               (MVMovingPlatformGroup *this,Object *sender,SelectedEventArgs *e,MethodInfo *method)

{
  if ((e != (SelectedEventArgs *)0x0) &&
     (pMVar1 = (this->fields).platform, pMVar1 != (MVMovingPlatform *)0x0)) {
    (pMVar1->fields)._.pausedMovement = (e->fields).Selected;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVMovingPlatformGroup(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup__ctor
               (MVMovingPlatformGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_NextNodeMap);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).nodeIdToWoMap = (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).nodeIdToWoMap >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pDVar6 = (Dictionary_2_System_Int32_System_Int32_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  FUN_?(pDVar6,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__
               );
  bVar1 = iRam_? != 0;
  (this->fields).woIdToNodeIdMap = pDVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).woIdToNodeIdMap >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar7 != (PrefabPool *)0x0) {
    MVBlueprintBase::MVBlueprintBase__ctor_2
              ((MVBlueprintBase *)this,data,(pPVar7->fields).mvMovingPlatformGroupPrefab,
               worldObjects,(MethodInfo *)0x0);
    pDVar8 = (this->fields)._.blueprintData;
    if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar8,(Object *)StringLiteral_NextNodeMap,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        (this->fields).nextNodeMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (this->fields).nextNodeMap = pDVar8;
        bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(this->fields).nextNodeMap >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pMVar11 = 
      UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
      ;
      this_00 = (this->fields)._._._.gameObject;
      if (this_00 != (GameObject *)0x0) {
        if ((
            UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                       );
        }
        pLVar12 = (LineRenderer *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentInChildren_3
                            (this_00,0,((pMVar11->field7_0x38).rgctx_data)->method);
        bVar1 = iRam_? != 0;
        (this->fields).lineRenderer = pLVar12;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(this->fields).lineRenderer >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        piVar13 = &(this->fields)._._._.interactionFlags;
        *piVar13 = *piVar13 | 0x9000;
        piVar14 = &(this->fields)._._._.previewLayerMask;
        *piVar14 = *piVar14 | 0x800;
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_get_Visible
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
  ;
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    if ((
        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    }
    p_Var5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (this_00,0,((pMVar1->field7_0x38).rgctx_data)->method);
    uVar2 = 0;
    if (p_Var5 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      pp_Var9 = p_Var5->vector;
      while( true ) {
        if ((int)p_Var5->max_length <= (int)uVar2) {
          return 0;
        }
        if ((uint)p_Var5->max_length <= uVar2) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        obj = (Object *)*pp_Var9;
        if (obj == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar5 = obj[1].klass;
        if (pOVar5 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        pcRam_? = pcVar3;
        cVar7 = (*pcRam_?)(pOVar5);
        if (cVar7 != '\0') {
          return 1;
        }
        uVar2 = uVar2 + 1;
        pp_Var9 = pp_Var9 + 1;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_set_Visible
               (MVMovingPlatformGroup *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MeshRenderer_s__not_found_on_att);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
  ;
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    if ((
        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    }
    p_Var5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (this_00,0,((pMVar1->field7_0x38).rgctx_data)->method);
    if (p_Var5 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      if (p_Var5->max_length == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_MeshRenderer_s__not_found_on_att,(MethodInfo *)0x0);
      }
      else {
        pp_Var9 = p_Var5->vector;
        for (uVar2 = 0; (int)uVar2 < (int)p_Var5->max_length; uVar2 = uVar2 + 1) {
          if ((uint)p_Var5->max_length <= uVar2) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          obj = (Object *)*pp_Var9;
          if (obj == (Object *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar4 = obj[1].klass;
          if (pOVar4 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pOVar4);
          pp_Var9 = pp_Var9 + 1;
        }
      }
      pMVar6 = (this->fields).platform;
      if ((pMVar6 != (MVMovingPlatform *)0x0) &&
         (pMVar7 = (pMVar6->fields)._._CubeModel_k__BackingField,
         pMVar7 != (MVCubeModelInstance *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pMVar7->klass->vtable).set_Visible.methodPtr)
                  (pMVar7,0,(pMVar7->klass->vtable).set_Visible.method);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

