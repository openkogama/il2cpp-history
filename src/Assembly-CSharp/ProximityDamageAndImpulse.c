
/* InteractionData Create(Single, Vector3, PlayerKilledByType) */

InteractionData *
Assembly-CSharp.dll::ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
          (InteractionData *__return_storage_ptr__,float damage,Vector3 impulse,
          PlayerKilledByType__Enum playerKilledByType,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  func_?(__return_storage_ptr__,0xd,damage,impulse._0_8_,impulse.z,playerKilledByType,0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::ProximityDamageAndImpulse::ProximityDamageAndImpulse_ParseAndHandlePackage
               (ProximityDamageAndImpulse *this,MVWorldObjectClient *worldObjectClient,
               MVPlayer *shooter,InteractionData interactionStruct,MethodInfo *method)

{
  fVar1 = (float10)func_?();
  bVar2 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_get_vertical
                    ((ScrollRect *)&interactionStruct,(MethodInfo *)0x0);
  PStack_3 = CONCAT31(PStack_3._1_3_,bVar2);
  pVVar4 = (Vector3 *)func_?(&stack0xffffffe8,&interactionStruct,0);
  InteractionPackage::InteractionPackage_HandlePackage_1
            ((InteractionPackage *)this,worldObjectClient,shooter,(float)fVar1,PStack_3,*pVVar4,
             (MethodInfo *)0x0);
  return;
}

