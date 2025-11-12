
/* List`1[System.String] GetKeys() */

List_1_System_String_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData+Keys::
CustomGunData_Keys_GetKeys(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__AddRange_System__Collections__Generic__IEnumerable<System::String>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileTrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareOnFire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleDirection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectilesPerShot);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SmokeOnFire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzlePosition);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MovementSpeedWhileHeld);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomAmmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ThirdPersonCamera);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksOnHit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BurstCooldownBetweenShots);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ShotsPerBurst);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = EditablePickupItem::EditablePickupItemData+Keys::EditablePickupItemData_Keys_GetKeys
                     ((MethodInfo *)0x0);
  collection = (IEnumerable_1_System_Object_ *)FUN_?(TypeInfo__System__String,0x1d);
  if (collection != (IEnumerable_1_System_Object_ *)0x0) {
    FUN_?(collection,0,StringLiteral_MovementSpeedWhileHeld);
    FUN_?(collection,1,StringLiteral_FireMode);
    FUN_?(collection,2,StringLiteral_MuzzlePosition);
    FUN_?(collection,3,StringLiteral_MuzzleDirection);
    FUN_?(collection,4,StringLiteral_MuzzleFlareOnFire);
    FUN_?(collection,5,StringLiteral_MuzzleFlareSize);
    FUN_?(collection,6,StringLiteral_MuzzleFlareColor);
    FUN_?(collection,7,StringLiteral_ThirdPersonCamera);
    FUN_?(collection,8,StringLiteral_SmokeOnFire);
    FUN_?(collection,9,StringLiteral_ShotsPerBurst);
    FUN_?(collection,10,StringLiteral_BurstCooldownBetweenShots);
    FUN_?(collection,0xb,StringLiteral_ProjectilesPerShot);
    FUN_?(collection,0xc,StringLiteral_ChargeEnabled);
    FUN_?(collection,0xd,StringLiteral_ChargeTime);
    FUN_?(collection,0xe,StringLiteral_ChargeSoundEffect);
    FUN_?(collection,0xf,StringLiteral_ChargeSoundEffectVolume);
    FUN_?(collection,0x10,StringLiteral_ChargeParticlesEnabled);
    FUN_?(collection,0x11,StringLiteral_ChargeParticlesSize);
    FUN_?(collection,0x12,StringLiteral_ChargeParticlesColor);
    FUN_?(collection,0x13,StringLiteral_ChargeZoomEnabled);
    FUN_?(collection,0x14,StringLiteral_ChargeZoomAmmount);
    FUN_?(collection,0x15,StringLiteral_ChargeZoomTime);
    FUN_?(collection,0x16,StringLiteral_ProjectileSpeed);
    FUN_?(collection,0x17,StringLiteral_ProjectileSize);
    FUN_?(collection,0x18,StringLiteral_ProjectileColor);
    FUN_?(collection,0x19,StringLiteral_ProjectileTrailColor);
    FUN_?(collection,0x1a,StringLiteral_SparksOnHit);
    FUN_?(collection,0x1b,StringLiteral_SparksSize);
    FUN_?(collection,0x1c,StringLiteral_SparksColor);
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__InsertRange
                ((List_1_System_Object_ *)pLVar1,(pLVar1->fields)._size,collection,
                 MethodInfo__System__Collections__Generic__List<System::String>__AddRange_System__Collections__Generic__IEnumerable<System::String>_
                 ->klass->rgctx_data[0x12].method);
      return pLVar1;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (List_1_System_String_ *)(*pcVar2)();
  return pLVar1;
}

