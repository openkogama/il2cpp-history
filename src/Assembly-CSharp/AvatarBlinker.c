
/* Void Awake() */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_Awake(AvatarBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__)
  ;
  uVar1 = (this->fields).blinkDamageColor.r;
  uVar2 = (this->fields).blinkDamageColor.g;
  uVar3 = (this->fields).blinkDamageColor.b;
  color_06.b = (float)uVar3;
  color_06.g = (float)uVar2;
  color_06.r = (float)uVar1;
  fVar4 = (this->fields).blinkDamageColor.a;
  pMVar5 = (this->fields)._.blinkMaterial;
  pBVar6 = (Blinker *)func_?();
  color_06.a = fVar4;
  Blinker::Blinker__ctor(pBVar6,4.0,pMVar5,color_06,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    uVar7 = (this->fields).blinkHealthBoostColor.r;
    uVar8 = (this->fields).blinkHealthBoostColor.g;
    uVar9 = (this->fields).blinkHealthBoostColor.b;
    color.b = (float)uVar9;
    color.g = (float)uVar8;
    color.r = (float)uVar7;
    fVar4 = (this->fields).blinkHealthBoostColor.a;
    pMVar5 = (this->fields)._.blinkMaterial;
    pBVar6 = (Blinker *)func_?();
    this_01 = (Dictionary_2_BlinkType_Blinker_ *)0x40a00000;
    color.a = fVar4;
    Blinker::Blinker__ctor(pBVar6,5.0,pMVar5,color,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,1,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    uVar10 = (this->fields).blinkPoisonColor.r;
    uVar11 = (this->fields).blinkPoisonColor.g;
    uVar12 = (this->fields).blinkPoisonColor.b;
    color_00.b = (float)uVar12;
    color_00.g = (float)uVar11;
    color_00.r = (float)uVar10;
    fVar4 = (this->fields).blinkPoisonColor.a;
    pMVar5 = (this->fields)._.blinkMaterial;
    pBVar6 = (Blinker *)func_?();
    color_00.a = fVar4;
    Blinker::Blinker__ctor(pBVar6,2.0,pMVar5,color_00,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,3,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    uVar13 = (this->fields).blinkFrozenColor.r;
    uVar14 = (this->fields).blinkFrozenColor.g;
    uVar15 = (this->fields).blinkFrozenColor.b;
    color_01.b = (float)uVar15;
    color_01.g = (float)uVar14;
    color_01.r = (float)uVar13;
    fVar4 = (this->fields).blinkFrozenColor.a;
    pMVar5 = (this->fields)._.blinkMaterial;
    pBVar6 = (Blinker *)func_?();
    color_01.a = fVar4;
    Blinker::Blinker__ctor(pBVar6,3.0,pMVar5,color_01,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,4,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    uVar16 = (this->fields).blinkHealingColor.r;
    uVar17 = (this->fields).blinkHealingColor.g;
    uVar18 = (this->fields).blinkHealingColor.b;
    color_02.b = (float)uVar18;
    color_02.g = (float)uVar17;
    color_02.r = (float)uVar16;
    fVar4 = (this->fields).blinkHealingColor.a;
    pMVar5 = (this->fields)._.blinkMaterial;
    pBVar6 = (Blinker *)func_?();
    color_02.a = fVar4;
    Blinker::Blinker__ctor(pBVar6,2.0,pMVar5,color_02,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,8,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    uVar19 = (this->fields).blinkShieldColor.r;
    uVar20 = (this->fields).blinkShieldColor.g;
    uVar21 = (this->fields).blinkShieldColor.b;
    color_03.b = (float)uVar21;
    color_03.g = (float)uVar20;
    color_03.r = (float)uVar19;
    fVar4 = (this->fields).blinkShieldColor.a;
    pMVar5 = (this->fields)._.blinkMaterial;
    pBVar6 = (Blinker *)func_?();
    color_03.a = fVar4;
    Blinker::Blinker__ctor(pBVar6,2.0,pMVar5,color_03,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,9,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    uVar22 = (this->fields).blinkLethalColor.r;
    uVar23 = (this->fields).blinkLethalColor.g;
    uVar24 = (this->fields).blinkLethalColor.b;
    color_04.b = (float)uVar24;
    color_04.g = (float)uVar23;
    color_04.r = (float)uVar22;
    fVar4 = (this->fields).blinkLethalColor.a;
    pMVar5 = (this->fields)._.blinkMaterial;
    pBVar6 = (Blinker *)func_?();
    color_04.a = fVar4;
    Blinker::Blinker__ctor(pBVar6,2.0,pMVar5,color_04,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,10,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    uVar25 = (this->fields).blinkHealingColor.r;
    uVar26 = (this->fields).blinkHealingColor.g;
    uVar27 = (this->fields).blinkHealingColor.b;
    color_05.b = (float)uVar27;
    color_05.g = (float)uVar26;
    color_05.r = (float)uVar25;
    fVar4 = (this->fields).blinkHealingColor.a;
    pMVar5 = (this->fields)._.blinkMaterial;
    pBVar6 = (Blinker *)func_?();
    color_05.a = fVar4;
    Blinker::Blinker__ctor(pBVar6,2.0,pMVar5,color_05,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0xb,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    (this->fields)._.blinkers = this_01;
    func_?();
    return;
  }
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void HandleDamageBlinking(Single, Single, BlinkType) */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_HandleDamageBlinking
               (AvatarBlinker *this,float previousValue,float currentValue,BlinkType__Enum blinkType
               ,MethodInfo *method)

{
  if (currentValue < previousValue) {
    BlinkerBase::BlinkerBase_StartBlinking((BlinkerBase *)this,blinkType,0.5,(MethodInfo *)0x0);
  }
  return;
}


/* Void HealthChangeHandler(Object) */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_HealthChangeHandler
               (AvatarBlinker *this,Object *v,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (v == (Object *)0x0) {
    func_?();
    v = extraout_ECX;
    pSVar1 = extraout_EDX;
  }
  else {
    pSVar1 = TypeInfo__System__Single;
    if ((v->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar2 = (float *)func_?(v);
      fVar3 = *pfVar2;
      if (fVar3 < (this->fields).previousBlinkHealth) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this,BlinkType__Enum_Damage,0.5,(MethodInfo *)0x0);
      }
      (this->fields).previousBlinkHealth = fVar3;
      return;
    }
  }
  func_?(v,pSVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetPreviousHealth(Single) */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_SetPreviousHealth
               (AvatarBlinker *this,float health,MethodInfo *method)

{
  (this->fields).previousBlinkHealth = health;
  return;
}


/* Void SetPreviousShield(Single) */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_SetPreviousShield
               (AvatarBlinker *this,float shield,MethodInfo *method)

{
  (this->fields).previousBlinkShield = shield;
  return;
}


/* Void ShieldChangeHandler(Object) */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_ShieldChangeHandler
               (AvatarBlinker *this,Object *v,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (v == (Object *)0x0) {
    func_?();
    v = extraout_ECX;
    pSVar1 = extraout_EDX;
  }
  else {
    pSVar1 = TypeInfo__System__Single;
    if ((v->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar2 = (float *)func_?(v);
      fVar3 = *pfVar2;
      if (fVar3 < (this->fields).previousBlinkShield) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this,BlinkType__Enum_ShieldDamage,0.5,(MethodInfo *)0x0);
      }
      (this->fields).previousBlinkShield = fVar3;
      return;
    }
  }
  func_?(v,pSVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateBlinking() */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_UpdateBlinking
               (AvatarBlinker *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__get_Current__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  if (((this->fields)._.visible != 0) &&
     ((this->fields)._.blinkers != (Dictionary_2_BlinkType_Blinker_ *)0x0)) {
    pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                       ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)(this->fields)._.blinkers,
                        MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                       );
    if (pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) {
      this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(this->fields)._.blinkers;
      if (this_00 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                           (this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                           );
        if (pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
          StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                      *)&stack0xffffffc8,pDVar4,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
                    );
          method_00 = (AvatarBlinker *)0x0;
          uStack_1 = 1;
code_?:
          this_03 = 
          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
          ;
          bVar5 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&stack0xffffffb8,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                            );
          if (bVar5 != 0) {
            if (this_03 == (MethodInfo *)0x0) goto code_?;
            pcVar6 = this_03->name;
            pIVar7 = this_03->klass;
            fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            if (fVar8 <= (float)pIVar7 + (float)pcVar6) {
              method_00 = this;
              func_?();
              if ((this->fields)._.meshFilters != (MeshFilter__Array *)0x0) {
                pMVar9 = (this->fields)._.meshFilters;
                uVar10 = 0;
code_?:
                do {
                  uVar11 = pMVar9->max_length;
                  if ((int)uVar11 <= (int)uVar10) break;
                  if (uVar11 <= uVar10) {
                    func_?();
                    goto code_?;
                  }
                  this_01 = pMVar9->vector[uVar10];
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                    ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar5 == 0) {
                    if (this_01 == (MeshFilter *)0x0) goto code_?;
                    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0);
                    if (this_02 == (GameObject *)0x0) goto code_?;
                    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_activeInHierarchy(this_02,(MethodInfo *)0x0);
                    if (bVar5 != 0) {
                      tfm = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
                      mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                             MeshFilter_get_sharedMesh(this_01,(MethodInfo *)0x0);
                      if (this_03 == (MethodInfo *)0x0) goto code_?;
                      Blinker::Blinker_Draw
                                ((Blinker *)this_03,mesh,tfm,(this->fields)._.targetCamera,
                                 (this->fields)._.layerMask,(MethodInfo *)0x0);
                      uVar10 = uVar10 + 1;
                      goto code_?;
                    }
                  }
                  uVar10 = uVar10 + 1;
                } while( true );
              }
            }
            goto code_?;
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffb8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                     ,(MethodInfo *)method_00);
          goto code_?;
        }
      }
code_?:
      func_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* AvatarBlinker() */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker__ctor(AvatarBlinker *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  fVar5 = _UNK_?;
  fVar6 = _UNK_?;
  fVar7 = _UNK_?;
  (this->fields).blinkDamageColor.r = _UNK_?;
  (this->fields).blinkDamageColor.g = fVar7;
  (this->fields).blinkDamageColor.b = fVar6;
  (this->fields).blinkDamageColor.a = fVar5;
  (this->fields).previousBlinkHealth = 100.0;
  fVar5 = _UNK_?;
  fVar6 = _UNK_?;
  fVar7 = _UNK_?;
  (this->fields).blinkPoisonColor.r = _UNK_?;
  (this->fields).blinkPoisonColor.g = fVar7;
  (this->fields).blinkPoisonColor.b = fVar6;
  (this->fields).blinkPoisonColor.a = fVar5;
  fVar5 = _UNK_?;
  fVar6 = _UNK_?;
  fVar7 = _UNK_?;
  (this->fields).blinkFrozenColor.r = _UNK_?;
  (this->fields).blinkFrozenColor.g = fVar7;
  (this->fields).blinkFrozenColor.b = fVar6;
  (this->fields).blinkFrozenColor.a = fVar5;
  fVar5 = _UNK_?;
  fVar6 = _UNK_?;
  fVar7 = _UNK_?;
  (this->fields).blinkShieldColor.r = _UNK_?;
  (this->fields).blinkShieldColor.g = fVar7;
  (this->fields).blinkShieldColor.b = fVar6;
  (this->fields).blinkShieldColor.a = fVar5;
  fVar8 = _UNK_?;
  fVar5 = _UNK_?;
  fVar6 = _UNK_?;
  fVar7 = _UNK_?;
  (this->fields).blinkHealthBoostColor.r = fVar4;
  (this->fields).blinkHealthBoostColor.g = fVar3;
  (this->fields).blinkHealthBoostColor.b = fVar2;
  (this->fields).blinkHealthBoostColor.a = fVar1;
  (this->fields).blinkHealingColor.r = fVar4;
  (this->fields).blinkHealingColor.g = fVar3;
  (this->fields).blinkHealingColor.b = fVar2;
  (this->fields).blinkHealingColor.a = fVar1;
  (this->fields).blinkLethalColor.r = fVar7;
  (this->fields).blinkLethalColor.g = fVar6;
  (this->fields).blinkLethalColor.b = fVar5;
  (this->fields).blinkLethalColor.a = fVar8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

