
/* AvatarPackages() */

void Assembly-CSharp.dll::AvatarPackages::AvatarPackages__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdvancedGhostBodyRotateWeaponPackage);
    func_?(&TypeInfo__AvatarPackages);
    func_?(&TypeInfo__CenterGunHitPackage);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>
                   );
    func_?(&TypeInfo__DoubleSixShooterHitPackage);
    func_?(&TypeInfo__FlamethrowerHitPackage);
    func_?(&TypeInfo__GrowthGunHitPackage);
    func_?(&TypeInfo__HealRayHitPackage);
    func_?(&TypeInfo__ImpulseHitPackage);
    func_?(&TypeInfo__MeleeWeaponHitPackage);
    func_?(&TypeInfo__MouseGunHitPackage);
    func_?(&TypeInfo__MultiThrowingStarHitPackage);
    func_?(&TypeInfo__MutantHitPackage);
    func_?(&TypeInfo__ProximityDamageAndImpulse);
    func_?(&TypeInfo__RailgunHitPackage);
    func_?(&TypeInfo__SentryTowerFirePackage);
    func_?(&TypeInfo__SentryTowerIcePackage);
    func_?(&TypeInfo__ShotgunHitPackage);
    func_?(&TypeInfo__SixShooterHitPackage);
    func_?(&TypeInfo__SlapGunHitPackage);
    func_?(&TypeInfo__ThrowingStarHitPackage);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>
                        );
  if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Dictionary__
              );
    pOVar1 = (Object *)func_?(TypeInfo__ImpulseHitPackage);
    if (pOVar1 != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this,(Object *)0x2,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                );
      pOVar1 = (Object *)func_?(TypeInfo__MeleeWeaponHitPackage);
      if (pOVar1 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this,(Object *)0x5,pOVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                  );
        pOVar1 = (Object *)func_?(TypeInfo__RailgunHitPackage);
        if (pOVar1 != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this,(Object *)0x4,pOVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                    );
          pOVar1 = (Object *)func_?(TypeInfo__MutantHitPackage);
          if (pOVar1 != (Object *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this,(Object *)0x6,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                      );
            pOVar1 = (Object *)func_?(TypeInfo__ShotgunHitPackage);
            if (pOVar1 != (Object *)0x0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (this,(Object *)0x7,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                        );
              pOVar1 = (Object *)func_?(TypeInfo__FlamethrowerHitPackage);
              if (pOVar1 != (Object *)0x0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (this,(Object *)0x8,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                          );
                pOVar1 = (Object *)func_?(TypeInfo__CenterGunHitPackage);
                if (pOVar1 != (Object *)0x0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (this,(Object *)0x9,pOVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                            );
                  pOVar1 = (Object *)func_?(TypeInfo__SentryTowerFirePackage);
                  if (pOVar1 != (Object *)0x0) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                              (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__Add
                              (this,(Object *)0xa,pOVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                              );
                    pOVar1 = (Object *)func_?(TypeInfo__SentryTowerIcePackage);
                    if (pOVar1 != (Object *)0x0) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (this,(Object *)0xb,pOVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                                );
                      pOVar1 = (Object *)
                               func_?(TypeInfo__AdvancedGhostBodyRotateWeaponPackage);
                      if (pOVar1 != (Object *)0x0) {
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                  (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                  (this,(Object *)0xc,pOVar1,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                                  );
                        pOVar1 = (Object *)func_?(TypeInfo__ProximityDamageAndImpulse);
                        if (pOVar1 != (Object *)0x0) {
                          mscorlib.dll::System::ThrowHelper::
                          ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                    (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                    (this,(Object *)0xd,pOVar1,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                                    );
                          pOVar1 = (Object *)func_?(TypeInfo__SixShooterHitPackage);
                          if (pOVar1 != (Object *)0x0) {
                            mscorlib.dll::System::ThrowHelper::
                            ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                      (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                      (this,(Object *)0xe,pOVar1,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                                      );
                            pOVar1 = (Object *)func_?(TypeInfo__ThrowingStarHitPackage);
                            if (pOVar1 != (Object *)0x0) {
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                        (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                        (this,(Object *)0xf,pOVar1,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                                        );
                              pOVar1 = (Object *)func_?(TypeInfo__MouseGunHitPackage);
                              if (pOVar1 != (Object *)0x0) {
                                mscorlib.dll::System::ThrowHelper::
                                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                          (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,System::Object]::
                                Dictionary_2_System_Object_System_Object__Add
                                          (this,(Object *)0x10,pOVar1,
                                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                                          );
                                pOVar1 = (Object *)func_?(TypeInfo__GrowthGunHitPackage);
                                if (pOVar1 != (Object *)0x0) {
                                  mscorlib.dll::System::ThrowHelper::
                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                            (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__Add
                                            (this,(Object *)0x11,pOVar1,
                                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                                            );
                                  pOVar1 = (Object *)
                                           func_?(TypeInfo__MultiThrowingStarHitPackage);
                                  if (pOVar1 != (Object *)0x0) {
                                    mscorlib.dll::System::ThrowHelper::
                                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                              (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Object,System::Object]::
                                    Dictionary_2_System_Object_System_Object__Add
                                              (this,(Object *)0x18,pOVar1,
                                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                                              );
                                    pOVar1 = (Object *)
                                             func_?(TypeInfo__DoubleSixShooterHitPackage);
                                    if (pOVar1 != (Object *)0x0) {
                                      mscorlib.dll::System::ThrowHelper::
                                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Object,System::Object]::
                                      Dictionary_2_System_Object_System_Object__Add
                                                (this,(Object *)0x19,pOVar1,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                                                );
                                      pOVar1 = (Object *)
                                               func_?(TypeInfo__SlapGunHitPackage);
                                      if (pOVar1 != (Object *)0x0) {
                                        mscorlib.dll::System::ThrowHelper::
                                        ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                  (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Object,System::Object]::
                                        Dictionary_2_System_Object_System_Object__Add
                                                  (this,(Object *)0x1a,pOVar1,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                                                  );
                                        pOVar1 = (Object *)
                                                 func_?(TypeInfo__HealRayHitPackage);
                                        if (pOVar1 != (Object *)0x0) {
                                          mscorlib.dll::System::ThrowHelper::
                                          ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                                    (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
                                          mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Object,System::Object]::
                                          Dictionary_2_System_Object_System_Object__Add
                                                    (this,(Object *)0x1b,pOVar1,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                                                  );
                                          TypeInfo__AvatarPackages->static_fields->packages =
                                               (Dictionary_2_MV_WorldObject_InteractionPackageType_InteractionPackage_
                                                *)this;
                                          func_?(TypeInfo__AvatarPackages->static_fields,
                                                          this);
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
                      }
                    }
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

