
/* AvatarPackages() */

void Assembly-CSharp.dll::AvatarPackages::AvatarPackages__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdvancedGhostBodyRotateWeaponPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarPackages);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CenterGunHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CustomGunHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DoubleSixShooterHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FlamethrowerHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GrowthGunHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HealRayHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ImpulseHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MeleeWeaponHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MouseGunHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MultiThrowingStarHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MutantHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ProximityDamageAndImpulse);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RailgunHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SentryTowerFirePackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SentryTowerIcePackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ShotgunHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SixShooterHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SlapGunHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThrowingStarHitPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__VehicleHitPackage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Dictionary__
            );
  pOVar1 = (Object *)FUN_?(TypeInfo__ImpulseHitPackage);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = (Object__Class *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
  FUN_?(pOVar2);
  bVar3 = iRam_? != 0;
  pOVar1[1].klass = pOVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if (this == (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  IVar9 = CONCAT31((int3)((uint)in_R9D >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,2,pOVar1,IVar9,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)FUN_?(TypeInfo__MeleeWeaponHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),5),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__RailgunHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),4),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__MutantHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),6),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__ShotgunHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),7),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__FlamethrowerHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),8),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__CenterGunHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),9),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__SentryTowerFirePackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),10),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__SentryTowerIcePackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),0xb),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__AdvancedGhostBodyRotateWeaponPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),0xc),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__ProximityDamageAndImpulse);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),0xd),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__SixShooterHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),0xe),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__ThrowingStarHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),0xf),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__MouseGunHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),0x10),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__GrowthGunHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),0x11),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__MultiThrowingStarHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),0x18),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__DoubleSixShooterHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),0x19),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__SlapGunHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),0x1a),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__HealRayHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),0x1b),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__VehicleHitPackage);
  IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),0x1c),pOVar1,IVar9,pMVar10);
  pOVar1 = (Object *)FUN_?(TypeInfo__CustomGunHitPackage);
  pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__Add_MV__WorldObject__InteractionPackageType__InteractionPackage_
           ->klass->rgctx_data[0x22].method;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__TryInsert
            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,
             (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),0x13),pOVar1,
             CONCAT31((int3)(IVar9 >> 8),2),pMVar10);
  TypeInfo__AvatarPackages->static_fields->packages =
       (Dictionary_2_MV_WorldObject_InteractionPackageType_InteractionPackage_ *)this;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__AvatarPackages->static_fields >> 0xc);
    uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar11 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar11 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}

