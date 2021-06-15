
/* Void Awake() */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_Awake(AvatarBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_BlinkType_System_Object_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
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
  if (this_00 != (Dictionary_2_BlinkType_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
    Dictionary_2_BlinkType_System_Object__Add
              (this_00,BlinkType__Enum_Damage,(Object *)pBVar6,
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
    Dictionary_2_BlinkType_System_Object__Add
              ((Dictionary_2_BlinkType_System_Object_ *)this_01,BlinkType__Enum_Health,
               (Object *)pBVar6,
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
    Dictionary_2_BlinkType_System_Object__Add
              ((Dictionary_2_BlinkType_System_Object_ *)this_01,BlinkType__Enum_Poison,
               (Object *)pBVar6,
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
    Dictionary_2_BlinkType_System_Object__Add
              ((Dictionary_2_BlinkType_System_Object_ *)this_01,BlinkType__Enum_Frozen,
               (Object *)pBVar6,
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
    Dictionary_2_BlinkType_System_Object__Add
              ((Dictionary_2_BlinkType_System_Object_ *)this_01,BlinkType__Enum_Healing,
               (Object *)pBVar6,
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
    Dictionary_2_BlinkType_System_Object__Add
              ((Dictionary_2_BlinkType_System_Object_ *)this_01,BlinkType__Enum_ShieldDamage,
               (Object *)pBVar6,
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
    Dictionary_2_BlinkType_System_Object__Add
              ((Dictionary_2_BlinkType_System_Object_ *)this_01,BlinkType__Enum_Lethal,
               (Object *)pBVar6,
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
    Dictionary_2_BlinkType_System_Object__Add
              ((Dictionary_2_BlinkType_System_Object_ *)this_01,BlinkType__Enum_HealingMat,
               (Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    (this->fields)._.blinkers = this_01;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (v == (Object *)0x0) {
    func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (v == (Object *)0x0) {
    func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((this->fields)._.visible != 0) &&
      (this_05 = (this->fields)._.blinkers, this_05 != (Dictionary_2_BlinkType_Blinker_ *)0x0)) &&
     (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_05,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                         ),
     pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0))
  {
    this_00 = (this->fields)._.blinkers;
    if ((this_00 == (Dictionary_2_BlinkType_Blinker_ *)0x0) ||
       (this_01 = (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Values
                            ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                            ),
       this_01 == (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)0x0)) {
code_?:
      func_?();
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    method_00 = (MethodInfo *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_ChatCommand_System_Object_
                *)&stack0xffffffac,this_01,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
              );
    uStack_1 = 0;
    while (cVar6 = func_?(), cVar6 != '\0') {
      this_02 = (Blinker *)func_?();
      if (this_02 == (Blinker *)0x0) goto code_?;
      fVar7 = (this_02->fields).blinkStartTime;
      fVar8 = (this_02->fields).blinkDuration;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (fVar9 <= fVar8 + fVar7) {
        func_?();
        pMVar10 = (this->fields)._.meshFilters;
        if (pMVar10 != (MeshFilter__Array *)0x0) {
          iVar11 = 0;
          while( true ) {
            if (pMVar10 == (MeshFilter__Array *)0x0) goto code_?;
            if ((int)pMVar10->max_length <= iVar11) break;
            this_03 = (MeshFilter *)func_?();
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar12 == 0) {
              if ((this_03 == (MeshFilter *)0x0) ||
                 (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)this_03,(MethodInfo *)this_05)
                 , this_04 == (GameObject *)0x0)) goto code_?;
              this_05 = (Dictionary_2_BlinkType_Blinker_ *)&UNK_?;
              bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_get_activeInHierarchy(this_04,method_00);
              if (bVar12 != 0) {
                tfm = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)this_03,(MethodInfo *)0x0);
                mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                       MeshFilter_get_sharedMesh(this_03,(MethodInfo *)0x0);
                if (this_02 == (Blinker *)0x0) goto code_?;
                method_00 = (MethodInfo *)&UNK_?;
                Blinker::Blinker_Draw
                          (this_02,mesh,tfm,(this->fields)._.targetCamera,(this->fields)._.layerMask
                           ,(MethodInfo *)0x0);
              }
            }
            iVar11 = iVar11 + 1;
          }
        }
      }
    }
    uStack_1 = 0xffffffff;
    func_?();
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* AvatarBlinker() */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker__ctor(AvatarBlinker *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  func_?(&fStack_1,0x437b0000,0,0,0);
  (this->fields).blinkDamageColor.r = fStack_1;
  (this->fields).blinkDamageColor.g = fStack_2;
  (this->fields).blinkDamageColor.b = fStack_3;
  (this->fields).blinkDamageColor.a = fStack_4;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  func_?(&fStack_5,0x43690000,0x43790000,0x41100000,0);
  (this->fields).blinkHealthBoostColor.r = fStack_5;
  (this->fields).blinkHealthBoostColor.g = fStack_6;
  (this->fields).blinkHealthBoostColor.b = fStack_7;
  (this->fields).blinkHealthBoostColor.a = fStack_8;
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  fStack_11 = 0.0;
  fStack_12 = 0.0;
  func_?(&fStack_9,0,0x437f0000,0x41a00000,0);
  (this->fields).blinkPoisonColor.r = fStack_9;
  (this->fields).blinkPoisonColor.g = fStack_10;
  (this->fields).blinkPoisonColor.b = fStack_11;
  (this->fields).blinkPoisonColor.a = fStack_12;
  fStack_13 = 0.0;
  fStack_14 = 0.0;
  fStack_15 = 0.0;
  fStack_16 = 0.0;
  func_?(&fStack_13,0x43480000,0x43660000,0x437f0000,0);
  (this->fields).blinkFrozenColor.r = fStack_13;
  (this->fields).blinkFrozenColor.g = fStack_14;
  (this->fields).blinkFrozenColor.b = fStack_15;
  (this->fields).blinkFrozenColor.a = fStack_16;
  fStack_17 = 0.0;
  fStack_18 = 0.0;
  fStack_19 = 0.0;
  fStack_20 = 0.0;
  func_?(&fStack_17,0x43690000,0x43790000,0x41100000,0);
  (this->fields).blinkHealingColor.r = fStack_17;
  (this->fields).blinkHealingColor.g = fStack_18;
  (this->fields).blinkHealingColor.b = fStack_19;
  (this->fields).blinkHealingColor.a = fStack_20;
  fStack_21 = 0.0;
  fStack_22 = 0.0;
  fStack_23 = 0.0;
  fStack_24 = 0.0;
  func_?(&fStack_21,0x41c80000,0x41c80000,0x42e00000,0);
  (this->fields).blinkShieldColor.r = fStack_21;
  (this->fields).blinkShieldColor.g = fStack_22;
  (this->fields).blinkShieldColor.b = fStack_23;
  (this->fields).blinkShieldColor.a = fStack_24;
  fStack_25 = 0.0;
  fStack_26 = 0.0;
  fStack_27 = 0.0;
  fStack_28 = 0.0;
  func_?(&fStack_25,0,0,0,0);
  (this->fields).blinkLethalColor.r = fStack_25;
  (this->fields).blinkLethalColor.g = fStack_26;
  (this->fields).blinkLethalColor.b = fStack_27;
  (this->fields).blinkLethalColor.a = fStack_28;
  (this->fields).previousBlinkHealth = 100.0;
  LockCursorManager3DMode::LockCursorManager3DMode__ctor
            ((LockCursorManager3DMode *)this,(MethodInfo *)0x0);
  return;
}

