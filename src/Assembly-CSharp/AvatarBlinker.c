
/* Void Awake() */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_Awake(AvatarBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Blinker);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__)
  ;
  pMVar1 = (this->fields)._.blinkMaterial;
  uVar2._0_4_ = (this->fields).blinkDamageColor.r;
  uVar2._4_4_ = (this->fields).blinkDamageColor.g;
  uVar3._0_4_ = (this->fields).blinkDamageColor.b;
  uVar3._4_4_ = (this->fields).blinkDamageColor.a;
  pBVar4 = (Blinker *)FUN_?(TypeInfo__Blinker);
  pCVar5 = aCStack_6;
  aCStack_6[0]._0_8_ = uVar2;
  aCStack_6[0]._8_8_ = uVar3;
  Blinker::Blinker__ctor(pBVar4,_UNK_?,pMVar1,pCVar5,(MethodInfo *)0x0);
  if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,(Object *)pBVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  pMVar1 = (this->fields)._.blinkMaterial;
  uVar8._0_4_ = (this->fields).blinkHealthBoostColor.r;
  uVar8._4_4_ = (this->fields).blinkHealthBoostColor.g;
  uVar9._0_4_ = (this->fields).blinkHealthBoostColor.b;
  uVar9._4_4_ = (this->fields).blinkHealthBoostColor.a;
  pBVar4 = (Blinker *)FUN_?(TypeInfo__Blinker);
  pCVar5 = aCStack_6;
  aCStack_6[0]._0_8_ = uVar8;
  aCStack_6[0]._8_8_ = uVar9;
  Blinker::Blinker__ctor(pBVar4,_UNK_?,pMVar1,pCVar5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,(Object *)pBVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  pMVar1 = (this->fields)._.blinkMaterial;
  uVar10._0_4_ = (this->fields).blinkPoisonColor.r;
  uVar10._4_4_ = (this->fields).blinkPoisonColor.g;
  uVar11._0_4_ = (this->fields).blinkPoisonColor.b;
  uVar11._4_4_ = (this->fields).blinkPoisonColor.a;
  pBVar4 = (Blinker *)FUN_?(TypeInfo__Blinker);
  interval = TypeRef__System__Activator__T._0_4_;
  pCVar5 = aCStack_6;
  aCStack_6[0]._0_8_ = uVar10;
  aCStack_6[0]._8_8_ = uVar11;
  Blinker::Blinker__ctor
            (pBVar4,TypeRef__System__Activator__T._0_4_,pMVar1,pCVar5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,(Object *)pBVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  pMVar1 = (this->fields)._.blinkMaterial;
  uVar12._0_4_ = (this->fields).blinkFrozenColor.r;
  uVar12._4_4_ = (this->fields).blinkFrozenColor.g;
  uVar13._0_4_ = (this->fields).blinkFrozenColor.b;
  uVar13._4_4_ = (this->fields).blinkFrozenColor.a;
  pBVar4 = (Blinker *)FUN_?(TypeInfo__Blinker);
  pCVar5 = aCStack_6;
  aCStack_6[0]._0_8_ = uVar12;
  aCStack_6[0]._8_8_ = uVar13;
  Blinker::Blinker__ctor(pBVar4,_UNK_?,pMVar1,pCVar5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,4,(Object *)pBVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  pMVar1 = (this->fields)._.blinkMaterial;
  uVar14._0_4_ = (this->fields).blinkHealingColor.r;
  uVar14._4_4_ = (this->fields).blinkHealingColor.g;
  uVar15._0_4_ = (this->fields).blinkHealingColor.b;
  uVar15._4_4_ = (this->fields).blinkHealingColor.a;
  pBVar4 = (Blinker *)FUN_?(TypeInfo__Blinker);
  pCVar5 = aCStack_6;
  aCStack_6[0]._0_8_ = uVar14;
  aCStack_6[0]._8_8_ = uVar15;
  Blinker::Blinker__ctor(pBVar4,interval,pMVar1,pCVar5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,8,(Object *)pBVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  pMVar1 = (this->fields)._.blinkMaterial;
  uVar16._0_4_ = (this->fields).blinkShieldColor.r;
  uVar16._4_4_ = (this->fields).blinkShieldColor.g;
  uVar17._0_4_ = (this->fields).blinkShieldColor.b;
  uVar17._4_4_ = (this->fields).blinkShieldColor.a;
  pBVar4 = (Blinker *)FUN_?(TypeInfo__Blinker);
  pCVar5 = aCStack_6;
  aCStack_6[0]._0_8_ = uVar16;
  aCStack_6[0]._8_8_ = uVar17;
  Blinker::Blinker__ctor(pBVar4,interval,pMVar1,pCVar5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,9,(Object *)pBVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  pMVar1 = (this->fields)._.blinkMaterial;
  uVar18._0_4_ = (this->fields).blinkLethalColor.r;
  uVar18._4_4_ = (this->fields).blinkLethalColor.g;
  uVar19._0_4_ = (this->fields).blinkLethalColor.b;
  uVar19._4_4_ = (this->fields).blinkLethalColor.a;
  pBVar4 = (Blinker *)FUN_?(TypeInfo__Blinker);
  pCVar5 = aCStack_6;
  aCStack_6[0]._0_8_ = uVar18;
  aCStack_6[0]._8_8_ = uVar19;
  Blinker::Blinker__ctor(pBVar4,interval,pMVar1,pCVar5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,10,(Object *)pBVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  pMVar1 = (this->fields)._.blinkMaterial;
  uVar20._0_4_ = (this->fields).blinkHealingColor.r;
  uVar20._4_4_ = (this->fields).blinkHealingColor.g;
  uVar21._0_4_ = (this->fields).blinkHealingColor.b;
  uVar21._4_4_ = (this->fields).blinkHealingColor.a;
  pBVar4 = (Blinker *)FUN_?(TypeInfo__Blinker);
  pCVar5 = aCStack_6;
  aCStack_6[0]._0_8_ = uVar20;
  aCStack_6[0]._8_8_ = uVar21;
  Blinker::Blinker__ctor(pBVar4,interval,pMVar1,pCVar5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0xb,(Object *)pBVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  bVar22 = iRam_? != 0;
  (this->fields)._.blinkers = (Dictionary_2_BlinkType_Blinker_ *)this_00;
  if (bVar22) {
    uVar23 = (uint)((ulonglong)&(this->fields)._.blinkers >> 0xc);
    uVar24 = (ulonglong)((uVar23 & 0x1fffff) >> 6);
    do {
      uVar25 = *(ulonglong *)(uVar24 * 8 + 0xADDR);
      puVar26 = (ulonglong *)(uVar24 * 8 + 0xADDR);
      LOCK();
      bVar22 = uVar25 == *puVar26;
      if (bVar22) {
        *puVar26 = uVar25 | 1L << (uVar23 & 0x3f);
      }
      UNLOCK();
    } while (!bVar22);
  }
  return;
}


/* Void DisableBlinking() */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_DisableBlinking
               (AvatarBlinker *this,MethodInfo *method)

{
  (this->fields)._.visible = 0;
  return;
}


/* Void EnableBlinking() */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_EnableBlinking
               (AvatarBlinker *this,MethodInfo *method)

{
  (this->fields)._.visible = 1;
  return;
}


/* Void HandleDamageBlinking(Single, Single, BlinkType) */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_HandleDamageBlinking
               (AvatarBlinker *this,float previousValue,float currentValue,BlinkType__Enum blinkType
               ,MethodInfo *method)

{
  uVar1 = _UNK_?;
  if (previousValue <= currentValue) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                  ,blinkType,_UNK_?,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.blinkers;
  if ((this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,blinkType,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                         ), pOVar2 != (Object *)0x0)) {
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
    uVar5 = (*pcRam_?)();
    *(undefined4 *)((longlong)&pOVar2[1].monitor + 4) = uVar1;
    *(undefined4 *)&pOVar2[1].monitor = uVar5;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HealthChangeHandler(Object) */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_HealthChangeHandler
               (AvatarBlinker *this,Object *v,MethodInfo *method)

{
  if (v == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((v->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
    fVar2 = *(float *)&v[1].klass;
    if (fVar2 < (this->fields).previousBlinkHealth) {
      BlinkerBase::BlinkerBase_StartBlinking
                ((BlinkerBase *)this,BlinkType__Enum_Damage,_UNK_?,(MethodInfo *)0x0);
    }
    (this->fields).previousBlinkHealth = fVar2;
    return;
  }
  FUN_?(v);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShieldChangeHandler(Object) */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_ShieldChangeHandler
               (AvatarBlinker *this,Object *v,MethodInfo *method)

{
  if (v == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((v->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
    fVar2 = *(float *)&v[1].klass;
    if (fVar2 < (this->fields).previousBlinkShield) {
      BlinkerBase::BlinkerBase_StartBlinking
                ((BlinkerBase *)this,BlinkType__Enum_ShieldDamage,_UNK_?,(MethodInfo *)0x0);
    }
    (this->fields).previousBlinkShield = fVar2;
    return;
  }
  FUN_?(v);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateBlinking() */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_UpdateBlinking
               (AvatarBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((this->fields)._.visible == 0) ||
      ((this->fields)._.blinkers == (Dictionary_2_BlinkType_Blinker_ *)0x0)) ||
     (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               TypeConverterRegistry+ConverterKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                         ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)(this->fields)._.blinkers,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                         ),
     pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0)) {
    return;
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields)._.blinkers;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pDStack_3 = (pDVar1->fields)._dictionary;
  ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 **)0x0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  if (pDStack_3 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDStack_7 = pDStack_3;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_11 = (pDStack_3->fields)._version;
  uStack_5 = 0;
  uStack_12 = 0;
  pBStack_13 = (Blinker *)0x0;
  pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  ppDStack_4 = &pDStack_3;
code_?:
  if (pDStack_3 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    if (iStack_11 == (pDStack_3->fields)._version) {
      do {
        if (pDStack_3 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        if ((uint)(pDStack_3->fields)._count <= uStack_12) {
          return;
        }
        pDVar14 = (pDStack_3->fields)._entries;
        lVar15 = (longlong)(int)uStack_12;
        uVar6 = uStack_12 + 1;
        if (pDVar14 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar14->max_length <= uStack_12) {
          uStack_12 = uVar6;
          FUN_?();
          goto code_?;
        }
        uStack_12 = uVar6;
      } while ((&pDVar14->vector[0].hashCode)[lVar15 * 6] < 0);
      pBStack_13 = *(Blinker **)((longlong)&pDVar14->vector[0].key + lVar15 * 0x18 + 8);
      func_?();
      this_02 = pBStack_13;
      if (pBStack_13 != (Blinker *)0x0) goto code_?;
      goto code_?;
    }
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_?:
  bVar16 = Blinker::Blinker_get_IsExpired(pBStack_13,(MethodInfo *)0x0);
  if ((bVar16 == 0) &&
     ((*(this->klass->vtable).BeforeDraw.methodPtr)(),
     (this->fields)._.meshFilters != (MeshFilter__Array *)0x0)) {
    pMVar17 = (this->fields)._.meshFilters;
    for (uVar6 = 0; uVar18 = (uint)pMVar17->max_length, (int)uVar6 < (int)uVar18; uVar6 = uVar6 + 1
        ) {
      if (uVar18 <= uVar6) goto code_?;
      this_01 = pMVar17->vector[(int)uVar6];
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
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_01 != (MeshFilter *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_01->fields)._._.m_CachedPtr != (void *)0x0) {
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_01,(MethodInfo *)0x0);
          if (this_03 == (GameObject *)0x0) goto code_?;
          bVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_get_activeInHierarchy(this_03,(MethodInfo *)0x0);
          if (bVar16 != 0) {
            tfm = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_01,(MethodInfo *)0x0);
            mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                             (this_01,(MethodInfo *)0x0);
            if (this_02 == (Blinker *)0x0) goto code_?;
            Blinker::Blinker_Draw
                      (this_02,mesh,tfm,(this->fields)._.targetCamera,(this->fields)._.layerMask,
                       (MethodInfo *)0x0);
          }
        }
      }
    }
  }
  goto code_?;
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar6 = uStack_12;
code_?:
  uStack_12 = uVar6;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
  goto code_?;
}


/* AvatarBlinker() */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker__ctor(AvatarBlinker *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  bVar6 = cRam_? == '\0';
  uVar7 = _UNK_?;
  (this->fields).blinkDamageColor.r = (float)_UNK_?;
  uVar8 = _UNK_?;
  (this->fields).blinkDamageColor.g = (float)uVar7;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar7 = _UNK_?;
  (this->fields).blinkDamageColor.b = (float)_UNK_?;
  _UNK_? = uVar8;
  (this->fields).blinkDamageColor.a = (float)uVar7;
  (this->fields).previousBlinkHealth = 100.0;
  uVar5 = _UNK_?;
  uVar7 = _UNK_?;
  (this->fields).blinkPoisonColor.r = (float)_UNK_?;
  uVar8 = _UNK_?;
  (this->fields).blinkPoisonColor.g = (float)uVar7;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar7 = _UNK_?;
  (this->fields).blinkPoisonColor.b = (float)_UNK_?;
  _UNK_? = uVar8;
  uVar5 = _UNK_?;
  uVar9 = _UNK_?;
  uVar8 = _UNK_?;
  (this->fields).blinkPoisonColor.a = (float)uVar7;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar7 = _UNK_?;
  (this->fields).blinkFrozenColor.r = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar5 = _UNK_?;
  (this->fields).blinkFrozenColor.g = (float)uVar7;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar7 = _UNK_?;
  (this->fields).blinkFrozenColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar5 = _UNK_?;
  (this->fields).blinkFrozenColor.a = (float)uVar7;
  _UNK_? = (undefined4)uVar8;
  _UNK_? = SUB84(uVar8,4);
  uVar7 = _UNK_?;
  (this->fields).blinkShieldColor.r = (float)_UNK_?;
  _UNK_? = uVar1;
  uVar8 = _UNK_?;
  (this->fields).blinkShieldColor.g = (float)uVar7;
  _UNK_? = (undefined4)uVar9;
  _UNK_? = SUB84(uVar9,4);
  uVar7 = _UNK_?;
  (this->fields).blinkShieldColor.b = (float)_UNK_?;
  _UNK_? = uVar8;
  uVar8 = _UNK_?;
  (this->fields).blinkShieldColor.a = (float)uVar7;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar7 = _UNK_?;
  (this->fields).blinkHealthBoostColor.r = (float)_UNK_?;
  _UNK_? = uVar8;
  uVar8 = _UNK_?;
  (this->fields).blinkHealthBoostColor.g = (float)uVar7;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar7 = _UNK_?;
  (this->fields).blinkHealthBoostColor.b = (float)_UNK_?;
  _UNK_? = uVar8;
  uVar8 = _UNK_?;
  (this->fields).blinkHealthBoostColor.a = (float)uVar7;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar7 = _UNK_?;
  (this->fields).blinkHealingColor.r = (float)_UNK_?;
  _UNK_? = uVar8;
  uVar8 = _UNK_?;
  (this->fields).blinkHealingColor.g = (float)uVar7;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar7 = _UNK_?;
  (this->fields).blinkHealingColor.b = (float)_UNK_?;
  _UNK_? = uVar8;
  uVar8 = _UNK_?;
  (this->fields).blinkHealingColor.a = (float)uVar7;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar7 = _UNK_?;
  (this->fields).blinkLethalColor.r = (float)_UNK_?;
  _UNK_? = uVar8;
  uVar5 = _UNK_?;
  (this->fields).blinkLethalColor.g = (float)uVar7;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar7 = _UNK_?;
  (this->fields).blinkLethalColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  (this->fields).blinkLethalColor.a = (float)uVar7;
  if (bVar6) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar10 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar11 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar12 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar13 = ppMVar11;
  if (lVar12 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar12 = lRam_?;
  }
  else {
    do {
      uVar14 = (uint)ppMVar13;
      LOCK();
      bVar6 = uVar14 != uRam_?;
      uVar15 = uVar14;
      uVar16 = uVar14 + 1;
      if (bVar6) {
        uVar15 = uRam_?;
        uVar16 = uRam_?;
      }
      uRam_? = uVar16;
      UNLOCK();
    } while ((bVar6) && (ppMVar13 = (MethodInfo **)(ulonglong)uVar15, uVar14 = uVar15, uVar15 != 2)
            );
    while (uVar14 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar14 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar12;
  puVar17 = &(pOVar10->_1).field_0x1c;
  LOCK();
  bVar6 = *(int *)puVar17 == 1;
  if (bVar6) {
    *(undefined4 *)puVar17 = 1;
  }
  uVar14 = uRam_?;
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
    if (uVar14 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar18 = &(pOVar10->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar6 = *puVar18 == 1;
  if (bVar6) {
    *puVar18 = 1;
  }
  uVar14 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar14 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar14 = GetCurrentThreadId();
    psVar19 = &(pOVar10->_1).cctor_thread;
    LOCK();
    bVar6 = (ulonglong)uVar14 == *psVar19;
    if (bVar6) {
      *psVar19 = (ulonglong)uVar14;
    }
    UNLOCK();
    if (bVar6) {
      return;
    }
    while( true ) {
      puVar17 = &(pOVar10->_1).field_0x1c;
      LOCK();
      bVar6 = *(int *)puVar17 == 1;
      if (bVar6) {
        *(undefined4 *)puVar17 = 1;
      }
      UNLOCK();
      if (bVar6) break;
      LOCK();
      lVar12._0_4_ = (pOVar10->_1).initializationExceptionGCHandle;
      lVar12._4_4_ = (pOVar10->_1).cctor_started;
      if (lVar12 == 0) {
        (pOVar10->_1).initializationExceptionGCHandle = 0;
        (pOVar10->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar12 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar20._0_4_ = (pOVar10->_1).initializationExceptionGCHandle;
    lVar20._4_4_ = (pOVar10->_1).cctor_started;
    if (lVar20 == 0) {
      return;
    }
  }
  else {
    uVar14 = GetCurrentThreadId();
    LOCK();
    (pOVar10->_1).cctor_thread = (ulonglong)uVar14;
    UNLOCK();
    LOCK();
    (pOVar10->_1).cctor_finished_or_no_cctor = 1;
    uVar14 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar14 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar10->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar10);
      ppMVar13 = ppMVar11;
      pIVar21 = (Il2CppClass *)pOVar10;
code_?:
      do {
        if (ppMVar13 == (MethodInfo **)0x0) {
          FUN_?(pIVar21);
          if (pIVar21->field_count != 0) {
            ppMVar13 = pIVar21->methods;
            pMVar22 = *ppMVar13;
code_?:
            if (pMVar22 != (MethodInfo *)0x0) {
              if ((*pMVar22->name == '.') && ((pMVar22->flags & 0x800) != 0)) {
                ppMVar23 = ppMVar11;
                while (ppMVar24 = ppMVar23 + 0x3052a1b1,
                      ppMVar23 = (MethodInfo **)((longlong)ppMVar23 + 1),
                      *(char *)ppMVar24 == (pMVar22->name + -1)[(longlong)ppMVar23]) {
                  if (ppMVar23 == (MethodInfo **)0x7) {
                    FUN_?(pMVar22,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar13 = ppMVar13 + 1;
          if (ppMVar13 < pIVar21->methods + pIVar21->field_count) {
            pMVar22 = *ppMVar13;
            goto code_?;
          }
        }
        pIVar21 = pIVar21->parent;
        ppMVar13 = ppMVar11;
      } while (pIVar21 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar10->_1).cctor_thread = 0;
    uVar25 = _UNK_?;
    uVar5 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar10->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_26 = 0;
    uStack_27 = _UNK_?;
    uStack_28 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar10->_0).byval_arg,0,0);
    pppppppuVar23 = &pppppppuStack_78;
    if (0xf < uStack_28) {
      pppppppuVar23 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar23);
    if (uStack_28 < 0x10) {
code_?:
      lVar12 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar23 = apppppppuStack_58;
      if (0xf < uStack_29) {
        pppppppuVar23 = apppppppuStack_58[0];
      }
      uStack_27 = uVar5;
      uStack_28 = uVar25;
      lVar20 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar23);
      if (lVar12 != 0) {
        *(longlong *)(lVar20 + 0x28U) = lVar12;
        if (iRam_? != 0) {
          uVar14 = (uint)(lVar20 + 0x28U >> 0xc);
          puVar30 = (ulonglong *)((ulonglong)((uVar14 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar31 = *puVar30;
            LOCK();
            uVar25 = *puVar30;
            if (uVar31 == uVar25) {
              *puVar30 = uVar31 | 1L << (uVar14 & 0x3f);
            }
            UNLOCK();
          } while (uVar31 != uVar25);
        }
      }
      FUN_?(pOVar10,lVar20);
      if (0xf < uStack_29) {
        pppppppuVar23 = apppppppuStack_58[0];
        if ((0xfff < uStack_29 + 1) &&
           (pppppppuVar23 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar23))))
        goto code_?;
        func_?(pppppppuVar23);
      }
      goto code_?;
    }
    pppppppuVar23 = pppppppuStack_78;
    if ((uStack_28 + 1 < 0x1000) ||
       (pppppppuVar23 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar23)) < 0x20)) {
      func_?(pppppppuVar23);
      uVar5 = _UNK_?;
      uVar25 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar5._0_4_ = (pOVar10->_1).initializationExceptionGCHandle;
  uVar5._4_4_ = (pOVar10->_1).cctor_started;
  uVar5 = FUN_?(uVar5);
  FUN_?(uVar5,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}

