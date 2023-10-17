
/* Void Awake() */

void Assembly-CSharp.dll::AvatarBlinker::AvatarBlinker_Awake(AvatarBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__
              );
    CVar1 = (this->fields).blinkDamageColor;
    pMVar2 = (this->fields)._.blinkMaterial;
    pBVar3 = (Blinker *)func_?();
    if (pBVar3 != (Blinker *)0x0) {
      Blinker::Blinker__ctor(pBVar3,4.0,pMVar2,CVar1,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0x0,(Object *)pBVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                );
      CVar1 = (this->fields).blinkHealthBoostColor;
      pMVar2 = (this->fields)._.blinkMaterial;
      pBVar3 = (Blinker *)func_?();
      if (pBVar3 != (Blinker *)0x0) {
        Blinker::Blinker__ctor(pBVar3,5.0,pMVar2,CVar1,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_00,(Object *)0x1,(Object *)pBVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                  );
        CVar1 = (this->fields).blinkPoisonColor;
        pMVar2 = (this->fields)._.blinkMaterial;
        pBVar3 = (Blinker *)func_?();
        if (pBVar3 != (Blinker *)0x0) {
          Blinker::Blinker__ctor(pBVar3,2.0,pMVar2,CVar1,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,(Object *)0x3,(Object *)pBVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                    );
          CVar1 = (this->fields).blinkFrozenColor;
          pMVar2 = (this->fields)._.blinkMaterial;
          pBVar3 = (Blinker *)func_?();
          if (pBVar3 != (Blinker *)0x0) {
            Blinker::Blinker__ctor(pBVar3,3.0,pMVar2,CVar1,(MethodInfo *)0x0);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this_00,(Object *)0x4,(Object *)pBVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                      );
            CVar1 = (this->fields).blinkHealingColor;
            pMVar2 = (this->fields)._.blinkMaterial;
            pBVar3 = (Blinker *)func_?();
            if (pBVar3 != (Blinker *)0x0) {
              Blinker::Blinker__ctor(pBVar3,2.0,pMVar2,CVar1,(MethodInfo *)0x0);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (this_00,(Object *)0x8,(Object *)pBVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                        );
              CVar1 = (this->fields).blinkShieldColor;
              pMVar2 = (this->fields)._.blinkMaterial;
              pBVar3 = (Blinker *)func_?();
              if (pBVar3 != (Blinker *)0x0) {
                Blinker::Blinker__ctor(pBVar3,2.0,pMVar2,CVar1,(MethodInfo *)0x0);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (this_00,(Object *)0x9,(Object *)pBVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                          );
                CVar1 = (this->fields).blinkLethalColor;
                pMVar2 = (this->fields)._.blinkMaterial;
                pBVar3 = (Blinker *)func_?();
                if (pBVar3 != (Blinker *)0x0) {
                  Blinker::Blinker__ctor(pBVar3,2.0,pMVar2,CVar1,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (this_00,(Object *)0xa,(Object *)pBVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                            );
                  CVar1 = (this->fields).blinkHealingColor;
                  pMVar2 = (this->fields)._.blinkMaterial;
                  pBVar3 = (Blinker *)func_?();
                  if (pBVar3 != (Blinker *)0x0) {
                    Blinker::Blinker__ctor(pBVar3,2.0,pMVar2,CVar1,(MethodInfo *)0x0);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__Add
                              (this_00,(Object *)0xb,(Object *)pBVar3,
                               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                              );
                    (this->fields)._.blinkers = (Dictionary_2_BlinkType_Blinker_ *)this_00;
                    func_?();
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                       ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)(this->fields)._.blinkers,
                        MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                       );
    if (pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) {
      this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(this->fields)._.blinkers;
      if (this_00 !=
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) {
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                 RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                           (this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                           );
        if (pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
          Regex+CachedCodeEntryKey,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
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
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  (this->fields).blinkDamageColor.r = _UNK_?;
  (this->fields).blinkDamageColor.g = fVar3;
  (this->fields).blinkDamageColor.b = fVar2;
  (this->fields).blinkDamageColor.a = fVar1;
  (this->fields).previousBlinkHealth = 100.0;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).blinkHealthBoostColor.r = _UNK_?;
  (this->fields).blinkHealthBoostColor.g = fVar3;
  (this->fields).blinkHealthBoostColor.b = fVar2;
  (this->fields).blinkHealthBoostColor.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).blinkPoisonColor.r = _UNK_?;
  (this->fields).blinkPoisonColor.g = fVar3;
  (this->fields).blinkPoisonColor.b = fVar2;
  (this->fields).blinkPoisonColor.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).blinkFrozenColor.r = _UNK_?;
  (this->fields).blinkFrozenColor.g = fVar3;
  (this->fields).blinkFrozenColor.b = fVar2;
  (this->fields).blinkFrozenColor.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).blinkHealingColor.r = _UNK_?;
  (this->fields).blinkHealingColor.g = fVar3;
  (this->fields).blinkHealingColor.b = fVar2;
  (this->fields).blinkHealingColor.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).blinkShieldColor.r = _UNK_?;
  (this->fields).blinkShieldColor.g = fVar3;
  (this->fields).blinkShieldColor.b = fVar2;
  (this->fields).blinkShieldColor.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).blinkLethalColor.r = _UNK_?;
  (this->fields).blinkLethalColor.g = fVar3;
  (this->fields).blinkLethalColor.b = fVar2;
  (this->fields).blinkLethalColor.a = fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

