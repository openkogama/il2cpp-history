
/* InteractionData Create(Vector3) */

InteractionData *
Assembly-CSharp.dll::SixShooterHitPackage::SixShooterHitPackage_Create
          (InteractionData *__return_storage_ptr__,Vector3 impulse,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  func_?(__return_storage_ptr__,0xe,impulse._0_8_,impulse.z,0x11,0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::SixShooterHitPackage::SixShooterHitPackage_ParseAndHandlePackage
               (SixShooterHitPackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter,
               InteractionData interactionStruct,MethodInfo *method)

{
  fVar1 = (float10)func_?();
  fStack_2 = (float)fVar1;
  pVVar3 = (Vector3 *)func_?(auStack_4);
  InteractionPackage::InteractionPackage_HandlePackage_1
            ((InteractionPackage *)this,worldObjectClient,shooter,fStack_2,
             PlayerKilledByType__Enum_SixShooter,*pVVar3,(MethodInfo *)0x0);
  return;
}

