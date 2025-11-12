
/* Void SetAllPlacements(String[]) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::
     LiftoffMonetizeMediationExtras::LiftoffMonetizeMediationExtras_SetAllPlacements
               (LiftoffMonetizeMediationExtras *this,String__Array *allPlacements,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_all_placements);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._Extras_k__BackingField;
  if (allPlacements != (String__Array *)0x0) {
    pSVar1 = ::StringLiteral__;
    if ((::StringLiteral__ != (String *)0x0) ||
       (pSVar1 = (String *)**(longlong **)(lRam_? + 0xb8), pSVar1 != (String *)0x0)) {
      uVar2 = 0;
      pSVar1 = mscorlib.dll::System::String::String_JoinCore
                         (&(pSVar1->fields)._firstChar,(pSVar1->fields)._stringLength,allPlacements,
                          0,(int32_t)allPlacements->max_length,(MethodInfo *)0x0);
      if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_all_placements,(Object *)pSVar1,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                   ->klass->rgctx_data[0x22].method);
        return;
      }
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this_01 = (ArgumentNullException *)func_?(uVar2);
  pSVar1 = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,pSVar1,(MethodInfo *)0x0);
  uVar2 = func_?(&
                              MethodInfo__System__String__Join_MethodInfo__System__String__System__String____
                             );
  FUN_?(this_01,uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetSoundEnabled(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::
     LiftoffMonetizeMediationExtras::LiftoffMonetizeMediationExtras_SetSoundEnabled
               (LiftoffMonetizeMediationExtras *this,bool soundEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sound_enabled);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._Extras_k__BackingField;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = StringLiteral_False;
  if (soundEnabled != 0) {
    value = StringLiteral_True;
  }
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_sound_enabled,(Object *)value,
               CONCAT31((int3)((uint)in_R9D >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetUserId(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::
     LiftoffMonetizeMediationExtras::LiftoffMonetizeMediationExtras_SetUserId
               (LiftoffMonetizeMediationExtras *this,String *userId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_user_id);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._Extras_k__BackingField;
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_user_id,
               (Object *)userId,CONCAT31((int3)((uint)in_R9D >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* LiftoffMonetizeMediationExtras() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::
     LiftoffMonetizeMediationExtras::LiftoffMonetizeMediationExtras__ctor
               (LiftoffMonetizeMediationExtras *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._._Extras_k__BackingField = (Dictionary_2_System_String_System_String_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  return;
}


/* String get_IOSMediationExtraBuilderClassName() */

String * Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::
         LiftoffMonetizeMediationExtras::
         LiftoffMonetizeMediationExtras_get_IOSMediationExtraBuilderClassName
                   (LiftoffMonetizeMediationExtras *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_LiftoffMonetizeExtrasBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral_LiftoffMonetizeExtrasBuilder;
}

