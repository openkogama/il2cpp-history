
/* Void CreateVirtualAxes() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_CreateVirtualAxes(TouchPadAbsolute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).horizontalAxisName;
  pCVar2 = (CrossPlatformInputManager_VirtualAxis *)
           FUN_?(
                        TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                        );
  iVar3 = iRam_?;
  (pCVar2->fields)._name_k__BackingField = pSVar1;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&pCVar2->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  (pCVar2->fields)._matchWithInputManager_k__BackingField = 1;
  (this->fields).horizontalVirtualAxis = pCVar2;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).horizontalVirtualAxis >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pSVar1 = (this->fields).verticalAxisName;
  pCVar2 = (CrossPlatformInputManager_VirtualAxis *)
           FUN_?(
                        TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis
                        );
  iVar3 = iRam_?;
  (pCVar2->fields)._name_k__BackingField = pSVar1;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&pCVar2->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  (pCVar2->fields)._matchWithInputManager_k__BackingField = 1;
  (this->fields).verticalVirtualAxis = pCVar2;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).verticalVirtualAxis >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_OnDisable(TouchPadAbsolute *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).dragging = 0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  uVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  if (((this->fields).state & 1) != 0) {
    pCVar4 = (this->fields).horizontalVirtualAxis;
    if (pCVar4 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
    (pCVar4->fields).m_Value = (float)uVar2;
  }
  if (((this->fields).state & 2) != 0) {
    pCVar4 = (this->fields).verticalVirtualAxis;
    if (pCVar4 == (CrossPlatformInputManager_VirtualAxis *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (pCVar4->fields).m_Value = (float)uVar3;
  }
  (this->fields).state = 3;
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_OnPointerDown
               (TouchPadAbsolute *this,PointerEventData *data,MethodInfo *method)

{
  if ((this->fields).dragging == 0) {
    (this->fields).dragging = 1;
    TouchPadAbsolute_SetOnPointButton(this,1,(MethodInfo *)0x0);
    if (data == (PointerEventData *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->fields).fingerId = (data->fields)._pointerId_k__BackingField;
    fVar2 = (data->fields)._position_k__BackingField.y;
    (this->fields).previousInputPosition.x = (data->fields)._position_k__BackingField.x;
    (this->fields).previousInputPosition.y = fVar2;
  }
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_OnPointerUp(TouchPadAbsolute *this,PointerEventData *data,MethodInfo *method)

{
  (this->fields).state = 3;
  (this->fields).dragging = 0;
  TouchPadAbsolute_SetOnPointButton(this,0,(MethodInfo *)0x0);
  bVar1 = cRam_? == '\0';
  (this->fields).fingerId = -1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  uVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  if (((this->fields).state & 1) != 0) {
    pCVar4 = (this->fields).horizontalVirtualAxis;
    if (pCVar4 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
    (pCVar4->fields).m_Value = (float)uVar2;
  }
  if (((this->fields).state & 2) != 0) {
    pCVar4 = (this->fields).verticalVirtualAxis;
    if (pCVar4 == (CrossPlatformInputManager_VirtualAxis *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (pCVar4->fields).m_Value = (float)uVar3;
  }
  return;
}


/* Void RegisterAxes() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_RegisterAxes(TouchPadAbsolute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).horizontalVirtualAxis;
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  CrossPlatformInputManager::CrossPlatformInputManager_RegisterVirtualAxis(pCVar1,(MethodInfo *)0x0)
  ;
  pCVar1 = (this->fields).verticalVirtualAxis;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar2 != (VirtualInput *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pCVar1 != (CrossPlatformInputManager_VirtualAxis *)0x0) &&
       (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)(pVVar2->fields).m_VirtualAxes,
       this_00 !=
       (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
       0x0)) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::StyleComplexSelector+PseudoStateData]::
               Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                         (this_00,(Object *)(pCVar1->fields)._name_k__BackingField,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__ContainsKey_System__String_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar3) {
        pDVar4 = (pVVar2->fields).m_VirtualAxes;
        if (pDVar4 == (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                   (Object *)(pCVar1->fields)._name_k__BackingField,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Remove_System__String_
                  );
      }
      pDVar4 = (pVVar2->fields).m_VirtualAxes;
      if (pDVar4 != (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                   (Object *)(pCVar1->fields)._name_k__BackingField,(Object *)pCVar1,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Add_System__String__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager__VirtualAxis_
                   ->klass->rgctx_data[0x22].method);
        pMVar5 = 
        MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
        if ((pCVar1->fields)._matchWithInputManager_k__BackingField != 0) {
          return;
        }
        this_01 = (pVVar2->fields).m_AlwaysUseVirtual;
        item = (pCVar1->fields)._name_k__BackingField;
        if (this_01 != (List_1_System_String_ *)0x0) {
          piVar6 = &(this_01->fields)._version;
          *piVar6 = *piVar6 + 1;
          pSVar7 = (this_01->fields)._items;
          if (pSVar7 != (String__Array *)0x0) {
            uVar8 = (this_01->fields)._size;
            if ((uint)pSVar7->max_length <= uVar8) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__AddWithResize
                        ((List_1_System_Object_ *)this_01,(Object *)item,
                         pMVar5->klass->rgctx_data[0xe].method);
              return;
            }
            (this_01->fields)._size = uVar8 + 1;
            if (uVar8 < (uint)pSVar7->max_length) {
              bVar9 = iRam_? != 0;
              pSVar7->vector[(int)uVar8] = item;
              if (bVar9) {
                uVar8 = (uint)((ulonglong)(pSVar7->vector + (int)uVar8) >> 0xc);
                puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar11 = *puVar10;
                  LOCK();
                  uVar12 = *puVar10;
                  if (uVar11 == uVar12) {
                    *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar11 != uVar12);
              }
              return;
            }
            FUN_?();
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_Reset(TouchPadAbsolute *this,MethodInfo *method)

{
  (this->fields).fingerId = -1;
  (this->fields).dragging = 0;
  TouchPadAbsolute_SetOnPointButton(this,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  uVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  if (((this->fields).state & 1) != 0) {
    pCVar3 = (this->fields).horizontalVirtualAxis;
    if (pCVar3 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
    (pCVar3->fields).m_Value = (float)uVar1;
  }
  if (((this->fields).state & 2) != 0) {
    pCVar3 = (this->fields).verticalVirtualAxis;
    if (pCVar3 == (CrossPlatformInputManager_VirtualAxis *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pCVar3->fields).m_Value = (float)uVar2;
  }
  return;
}


/* Void SetOnPointButton(Boolean) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_SetOnPointButton(TouchPadAbsolute *this,bool isDown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).onTouchButtonName;
  if (pSVar1 != ::StringLiteral__) {
    if ((((pSVar1 != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
        ((pSVar1->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) &&
       (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar1->fields)._firstChar,
                           (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                           (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar2 != 0)) {
      return;
    }
    pSVar1 = (this->fields).onTouchButtonName;
    if (isDown == 0) {
      if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1
                   ).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager,
                      0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1
                   ).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
      }
      pVVar3 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
               static_fields->activeInput;
      if (pVVar3 == (VirtualInput *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pVVar3->klass->vtable).__unknown_5.methodPtr)
                (pVVar3,pSVar1,(pVVar3->klass->vtable).__unknown_5.method);
      return;
    }
    if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    CrossPlatformInputManager::CrossPlatformInputManager_SetButtonDown(pSVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean TryGetTouch(Touch ByRef, Int32) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_TryGetTouch
               (TouchPadAbsolute *this,Touch *touch,int32_t fingerId,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  touch->m_FingerId = 0;
  (touch->m_Position).x = 0.0;
  *(undefined8 *)&(touch->m_Position).y = 0;
  *(undefined8 *)&(touch->m_RawPosition).y = 0;
  *(undefined8 *)&(touch->m_PositionDelta).y = 0;
  touch->m_TapCount = 0;
  touch->m_Phase = 0;
  touch->m_Type = 0;
  touch->m_Pressure = 0.0;
  touch->m_maximumPossiblePressure = 0.0;
  touch->m_Radius = 0.0;
  touch->m_RadiusVariance = 0.0;
  touch->m_AltitudeAngle = 0.0;
  touch->m_AzimuthAngle = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Touch);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    bVar4 = (*pcVar2)();
    return bVar4;
  }
  pcRam_? = pcVar2;
  iVar5 = (*pcRam_?)();
  lVar6 = FUN_?(TypeInfo__UnityEngine__Touch,iVar5);
  uVar7 = 0;
  uVar8 = 0;
  if (iVar5 < 1) {
    if (lVar6 == 0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar4 = (*pcVar2)();
      return bVar4;
    }
  }
  else {
    lVar9 = 0;
    puVar10 = (undefined8 *)(lVar6 + 0x20);
    do {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        bVar4 = (*pcVar2)();
        return bVar4;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(uVar8);
      if (lVar6 == 0) goto code_?;
      if (*(uint *)(lVar6 + 0x18) <= uVar8) goto code_?;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *(undefined4 *)(puVar10 + 4) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x24) = 0;
      *(undefined4 *)(puVar10 + 5) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x2c) = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      *(undefined4 *)(puVar10 + 8) = 0;
      puVar10 = (undefined8 *)((longlong)puVar10 + 0x44);
    } while (lVar9 < iVar5);
  }
  piVar11 = (int *)(lVar6 + 0x20);
  while( true ) {
    if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar7) {
      return 0;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar7) break;
    fVar12 = (float)piVar11[1];
    fVar13 = (float)piVar11[2];
    fVar14 = (float)piVar11[3];
    fVar15 = (float)piVar11[0x10];
    uVar3 = *(undefined8 *)(piVar11 + 4);
    uVar16 = *(undefined8 *)(piVar11 + 6);
    iVar5 = piVar11[8];
    iVar17 = piVar11[9];
    iVar18 = piVar11[10];
    iVar19 = piVar11[0xb];
    iVar20 = piVar11[0xc];
    iVar21 = piVar11[0xd];
    iVar22 = piVar11[0xe];
    iVar23 = piVar11[0xf];
    if (*piVar11 == fingerId) {
      touch->m_FingerId = *piVar11;
      (touch->m_Position).x = fVar12;
      (touch->m_Position).y = fVar13;
      (touch->m_RawPosition).x = fVar14;
      *(undefined8 *)&(touch->m_RawPosition).y = uVar3;
      *(undefined8 *)&(touch->m_PositionDelta).y = uVar16;
      touch->m_TapCount = iVar5;
      touch->m_Phase = iVar17;
      touch->m_Type = iVar18;
      touch->m_Pressure = (float)iVar19;
      touch->m_maximumPossiblePressure = (float)iVar20;
      touch->m_Radius = (float)iVar21;
      touch->m_RadiusVariance = (float)iVar22;
      touch->m_AltitudeAngle = (float)iVar23;
      touch->m_AzimuthAngle = fVar15;
      return 1;
    }
    uVar7 = uVar7 + 1;
    piVar11 = piVar11 + 0x11;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar4 = (*pcVar2)();
  return bVar4;
}


/* Void Update() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_Update(TouchPadAbsolute *this,MethodInfo *method)

{
  if ((this->fields).dragging == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TStack_1.m_AzimuthAngle = 0.0;
  TStack_1.m_FingerId = 0;
  TStack_1.m_Position.x = 0.0;
  TStack_1.m_Position.y = 0.0;
  TStack_1.m_RawPosition.x = 0.0;
  TStack_1.m_RawPosition.y = 0.0;
  TStack_1.m_PositionDelta.x = 0.0;
  TStack_1.m_PositionDelta.y = 0.0;
  TStack_1.m_TimeDelta = 0.0;
  TStack_1.m_TapCount = 0;
  TStack_1.m_Phase = 0;
  TStack_1.m_Type = 0;
  TStack_1.m_Pressure = 0.0;
  TStack_1.m_maximumPossiblePressure = 0.0;
  TStack_1.m_Radius = 0.0;
  TStack_1.m_RadiusVariance = 0.0;
  TStack_1.m_AltitudeAngle = 0.0;
  bVar2 = TouchPadAbsolute_TryGetTouch(this,&TStack_1,(this->fields).fingerId,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    (this->fields).fingerId = -1;
    (this->fields).dragging = 0;
    TouchPadAbsolute_SetOnPointButton(this,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    if (((this->fields).state & 1) != 0) {
      pCVar5 = (this->fields).horizontalVirtualAxis;
      if (pCVar5 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
      (pCVar5->fields).m_Value = (float)uVar3;
    }
    if (((this->fields).state & 2) != 0) {
      pCVar5 = (this->fields).verticalVirtualAxis;
      if (pCVar5 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
      (pCVar5->fields).m_Value = (float)uVar4;
    }
  }
  else {
    if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ResolutionManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    VVar6 = ResolutionManager::ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    iVar9 = (*pcRam_?)();
    fVar10 = TypeInfo__ResolutionManager->static_fields->dpiScale;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ResolutionManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ResolutionManager);
    }
    pCVar11 = TypeInfo__ResolutionManager->static_fields->canvasScaler;
    if (pCVar11 == (CanvasScaler *)0x0) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar12 = (pCVar11->fields).m_ReferenceResolution.y;
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    iVar13 = (*pcRam_?)();
    fStackX_8 = VVar6.x;
    fVar14 = (this->fields).previousInputPosition.y;
    fVar15 = TypeInfo__ResolutionManager->static_fields->dpiScale;
    fVar10 = (float)((uint)((fStackX_8 / (float)iVar9) * fVar10 *
                           ((this->fields).previousInputPosition.x - TStack_1.m_Position.x)) ^
                    _UNK_?);
    (this->fields).previousInputPosition.x = TStack_1.m_Position.x;
    iVar16 = (this->fields).state;
    (this->fields).previousInputPosition.y = TStack_1.m_Position.y;
    if ((iVar16 & 1) != 0) {
      pCVar5 = (this->fields).horizontalVirtualAxis;
      if (pCVar5 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
      (pCVar5->fields).m_Value = fVar10;
    }
    if (((this->fields).state & 2) != 0) {
      pCVar5 = (this->fields).verticalVirtualAxis;
      if (pCVar5 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
      (pCVar5->fields).m_Value = (fVar12 / (float)iVar13) * fVar15 * (fVar14 - TStack_1.m_Position.y);
    }
  }
  return;
}


/* Void UpdateAxis() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_UpdateAxis(TouchPadAbsolute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TStack_1.m_AzimuthAngle = 0.0;
  TStack_1.m_FingerId = 0;
  TStack_1.m_Position.x = 0.0;
  TStack_1.m_Position.y = 0.0;
  TStack_1.m_RawPosition.x = 0.0;
  TStack_1.m_RawPosition.y = 0.0;
  TStack_1.m_PositionDelta.x = 0.0;
  TStack_1.m_PositionDelta.y = 0.0;
  TStack_1.m_TimeDelta = 0.0;
  TStack_1.m_TapCount = 0;
  TStack_1.m_Phase = 0;
  TStack_1.m_Type = 0;
  TStack_1.m_Pressure = 0.0;
  TStack_1.m_maximumPossiblePressure = 0.0;
  TStack_1.m_Radius = 0.0;
  TStack_1.m_RadiusVariance = 0.0;
  TStack_1.m_AltitudeAngle = 0.0;
  bVar2 = TouchPadAbsolute_TryGetTouch(this,&TStack_1,(this->fields).fingerId,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    (this->fields).fingerId = -1;
    (this->fields).dragging = 0;
    TouchPadAbsolute_SetOnPointButton(this,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
    uVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
    if (((this->fields).state & 1) != 0) {
      pCVar5 = (this->fields).horizontalVirtualAxis;
      if (pCVar5 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
      (pCVar5->fields).m_Value = (float)uVar3;
    }
    if (((this->fields).state & 2) != 0) {
      pCVar5 = (this->fields).verticalVirtualAxis;
      if (pCVar5 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
      (pCVar5->fields).m_Value = (float)uVar4;
    }
  }
  else {
    if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ResolutionManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    VVar6 = ResolutionManager::ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    iVar9 = (*pcRam_?)();
    fVar10 = TypeInfo__ResolutionManager->static_fields->dpiScale;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ResolutionManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ResolutionManager);
    }
    pCVar11 = TypeInfo__ResolutionManager->static_fields->canvasScaler;
    if (pCVar11 == (CanvasScaler *)0x0) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar12 = (pCVar11->fields).m_ReferenceResolution.y;
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    iVar13 = (*pcRam_?)();
    fStackX_8 = VVar6.x;
    fVar14 = (this->fields).previousInputPosition.y;
    fVar15 = TypeInfo__ResolutionManager->static_fields->dpiScale;
    fVar10 = (float)((uint)((fStackX_8 / (float)iVar9) * fVar10 *
                           ((this->fields).previousInputPosition.x - TStack_1.m_Position.x)) ^
                    _UNK_?);
    (this->fields).previousInputPosition.x = TStack_1.m_Position.x;
    iVar16 = (this->fields).state;
    (this->fields).previousInputPosition.y = TStack_1.m_Position.y;
    if ((iVar16 & 1) != 0) {
      pCVar5 = (this->fields).horizontalVirtualAxis;
      if (pCVar5 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
      (pCVar5->fields).m_Value = fVar10;
    }
    if (((this->fields).state & 2) != 0) {
      pCVar5 = (this->fields).verticalVirtualAxis;
      if (pCVar5 == (CrossPlatformInputManager_VirtualAxis *)0x0) goto code_?;
      (pCVar5->fields).m_Value = (fVar12 / (float)iVar13) * fVar15 * (fVar14 - TStack_1.m_Position.y);
    }
  }
  return;
}


/* Void UpdateVirtualAxes(Vector3) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute_UpdateVirtualAxes(TouchPadAbsolute *this,Vector3 *value,MethodInfo *method)

{
  if (((this->fields).state & 1) != 0) {
    method = (MethodInfo *)(this->fields).horizontalVirtualAxis;
    pVVar1 = value;
    if (method == (MethodInfo *)0x0) goto code_?;
    *(float *)&method->name = value->x;
  }
  if (((this->fields).state & 2) != 0) {
    pCVar2 = (this->fields).verticalVirtualAxis;
    pVVar1 = (Vector3 *)0x0;
    if (pCVar2 == (CrossPlatformInputManager_VirtualAxis *)0x0) {
code_?:
      FUN_?(this,pVVar1,method);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pCVar2->fields).m_Value = value->y;
  }
  return;
}


/* TouchPadAbsolute() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::TouchPadAbsolute::
     TouchPadAbsolute__ctor(TouchPadAbsolute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Vertical);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Horizontal);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).state = 3;
  (this->fields).horizontalAxisName = StringLiteral_Horizontal;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).horizontalAxisName >> 0xc);
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
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).verticalAxisName = StringLiteral_Vertical;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).verticalAxisName >> 0xc);
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
  (this->fields).onTouchButtonName = ::StringLiteral__;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).onTouchButtonName >> 0xc);
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
  bVar6 = cRam_? == '\0';
  (this->fields).fingerId = -1;
  if (bVar6) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar8 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar9 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar3 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar10 = ppMVar9;
  if (lVar3 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar3 = lRam_?;
  }
  else {
    do {
      uVar2 = (uint)ppMVar10;
      LOCK();
      bVar6 = uVar2 != uRam_?;
      uVar11 = uVar2;
      uVar12 = uVar2 + 1;
      if (bVar6) {
        uVar11 = uRam_?;
        uVar12 = uRam_?;
      }
      uRam_? = uVar12;
      UNLOCK();
    } while ((bVar6) && (ppMVar10 = (MethodInfo **)(ulonglong)uVar11, uVar2 = uVar11, uVar11 != 2)
            );
    while (uVar2 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar2 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar3;
  puVar13 = &(pOVar8->_1).field_0x1c;
  LOCK();
  bVar6 = *(int *)puVar13 == 1;
  if (bVar6) {
    *(undefined4 *)puVar13 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar2 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar14 = &(pOVar8->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar6 = *puVar14 == 1;
  if (bVar6) {
    *puVar14 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar2 = GetCurrentThreadId();
    psVar15 = &(pOVar8->_1).cctor_thread;
    LOCK();
    bVar6 = (ulonglong)uVar2 == *psVar15;
    if (bVar6) {
      *psVar15 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (bVar6) {
      return;
    }
    while( true ) {
      puVar13 = &(pOVar8->_1).field_0x1c;
      LOCK();
      bVar6 = *(int *)puVar13 == 1;
      if (bVar6) {
        *(undefined4 *)puVar13 = 1;
      }
      UNLOCK();
      if (bVar6) break;
      LOCK();
      lVar3._0_4_ = (pOVar8->_1).initializationExceptionGCHandle;
      lVar3._4_4_ = (pOVar8->_1).cctor_started;
      if (lVar3 == 0) {
        (pOVar8->_1).initializationExceptionGCHandle = 0;
        (pOVar8->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar3 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar16._0_4_ = (pOVar8->_1).initializationExceptionGCHandle;
    lVar16._4_4_ = (pOVar8->_1).cctor_started;
    if (lVar16 == 0) {
      return;
    }
  }
  else {
    uVar2 = GetCurrentThreadId();
    LOCK();
    (pOVar8->_1).cctor_thread = (ulonglong)uVar2;
    UNLOCK();
    LOCK();
    (pOVar8->_1).cctor_finished_or_no_cctor = 1;
    uVar2 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar8->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar8);
      ppMVar10 = ppMVar9;
      pIVar17 = (Il2CppClass *)pOVar8;
code_?:
      do {
        if (ppMVar10 == (MethodInfo **)0x0) {
          FUN_?(pIVar17);
          if (pIVar17->field_count != 0) {
            ppMVar10 = pIVar17->methods;
            pMVar18 = *ppMVar10;
code_?:
            if (pMVar18 != (MethodInfo *)0x0) {
              if ((*pMVar18->name == '.') && ((pMVar18->flags & 0x800) != 0)) {
                ppMVar19 = ppMVar9;
                while (ppMVar20 = ppMVar19 + 0x30528cee,
                      ppMVar19 = (MethodInfo **)((longlong)ppMVar19 + 1),
                      *(char *)ppMVar20 == (pMVar18->name + -1)[(longlong)ppMVar19]) {
                  if (ppMVar19 == (MethodInfo **)0x7) {
                    FUN_?(pMVar18,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar10 = ppMVar10 + 1;
          if (ppMVar10 < pIVar17->methods + pIVar17->field_count) {
            pMVar18 = *ppMVar10;
            goto code_?;
          }
        }
        pIVar17 = pIVar17->parent;
        ppMVar10 = ppMVar9;
      } while (pIVar17 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar8->_1).cctor_thread = 0;
    uVar4 = _UNK_?;
    uVar21 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar8->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_22 = 0;
    uStack_23 = _UNK_?;
    uStack_24 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar8->_0).byval_arg,0,0);
    pppppppuVar18 = &pppppppuStack_78;
    if (0xf < uStack_24) {
      pppppppuVar18 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar18);
    if (uStack_24 < 0x10) {
code_?:
      lVar3 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar18 = apppppppuStack_58;
      if (0xf < uStack_25) {
        pppppppuVar18 = apppppppuStack_58[0];
      }
      uStack_23 = uVar21;
      uStack_24 = uVar4;
      lVar16 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar18);
      if (lVar3 != 0) {
        *(longlong *)(lVar16 + 0x28U) = lVar3;
        if (iRam_? != 0) {
          uVar2 = (uint)(lVar16 + 0x28U >> 0xc);
          puVar5 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar26 = *puVar5;
            LOCK();
            uVar4 = *puVar5;
            if (uVar26 == uVar4) {
              *puVar5 = uVar26 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (uVar26 != uVar4);
        }
      }
      FUN_?(pOVar8,lVar16);
      if (0xf < uStack_25) {
        pppppppuVar18 = apppppppuStack_58[0];
        if ((0xfff < uStack_25 + 1) &&
           (pppppppuVar18 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar18))))
        goto code_?;
        func_?(pppppppuVar18);
      }
      goto code_?;
    }
    pppppppuVar18 = pppppppuStack_78;
    if ((uStack_24 + 1 < 0x1000) ||
       (pppppppuVar18 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar18)) < 0x20)) {
      func_?(pppppppuVar18);
      uVar21 = _UNK_?;
      uVar4 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar21._0_4_ = (pOVar8->_1).initializationExceptionGCHandle;
  uVar21._4_4_ = (pOVar8->_1).cctor_started;
  uVar21 = FUN_?(uVar21);
  FUN_?(uVar21,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}

