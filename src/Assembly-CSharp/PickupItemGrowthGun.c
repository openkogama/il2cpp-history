
/* InteractionData GetPackageData() */

InteractionData *
Assembly-CSharp.dll::PickupItemGrowthGun::PickupItemGrowthGun_GetPackageData
          (InteractionData *__return_storage_ptr__,PickupItemGrowthGun *this,MethodInfo *method)

{
  uVar1 = SUB84(this,0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3,uVar1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  IStack_2.interactionType = 0;
  IStack_2.playerKilledByType = 0;
  IStack_2._18_2_ = 0;
  IStack_2.damage = 0.0;
  IStack_2.impulse.x = 0.0;
  IStack_2.impulse.y = 0.0;
  IStack_2.impulse.z = 0.0;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
            (&IStack_2,CONCAT31((int3)((uint)uVar1 >> 8),0x11),0.0,&VStack_4,
             in_stack_5 & 0xffffff00,(MethodInfo *)0x0);
  __return_storage_ptr__->damage = IStack_2.damage;
  (__return_storage_ptr__->impulse).x = IStack_2.impulse.x;
  (__return_storage_ptr__->impulse).y = IStack_2.impulse.y;
  (__return_storage_ptr__->impulse).z = IStack_2.impulse.z;
  __return_storage_ptr__->interactionType = IStack_2.interactionType;
  __return_storage_ptr__->playerKilledByType = IStack_2.playerKilledByType;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = IStack_2._18_2_;
  return __return_storage_ptr__;
}

