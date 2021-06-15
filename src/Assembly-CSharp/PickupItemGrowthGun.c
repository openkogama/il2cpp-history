
/* InteractionData GetPackageData() */

InteractionData *
Assembly-CSharp.dll::PickupItemGrowthGun::PickupItemGrowthGun_GetPackageData
          (InteractionData *__return_storage_ptr__,PickupItemGrowthGun *this,MethodInfo *method)

{
  pIVar1 = GrowthGunHitPackage::GrowthGunHitPackage_Create(&IStack_2,(MethodInfo *)0x0);
  fVar3 = (pIVar1->impulse).x;
  fVar4 = (pIVar1->impulse).y;
  fVar5 = (pIVar1->impulse).z;
  uVar6 = pIVar1->interactionType;
  uVar7 = pIVar1->playerKilledByType;
  uVar8 = *(undefined2 *)&pIVar1->field_0x12;
  __return_storage_ptr__->damage = pIVar1->damage;
  (__return_storage_ptr__->impulse).x = fVar3;
  (__return_storage_ptr__->impulse).y = fVar4;
  (__return_storage_ptr__->impulse).z = fVar5;
  __return_storage_ptr__->interactionType = uVar6;
  __return_storage_ptr__->playerKilledByType = uVar7;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar8;
  return __return_storage_ptr__;
}

