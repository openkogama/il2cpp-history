
/* InteractionData Create(Vector3) */

InteractionData *
Assembly-CSharp.dll::ImpulseHitPackage::ImpulseHitPackage_Create
          (InteractionData *__return_storage_ptr__,Vector3 impulse,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  func_?(__return_storage_ptr__,2,impulse._0_8_,impulse.z,0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::ImpulseHitPackage::ImpulseHitPackage_ParseAndHandlePackage
               (ImpulseHitPackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter,
               InteractionData interactionStruct,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(auStack_2,&interactionStruct,0);
  uStack_3 = *puVar1;
  fStack_4 = *(float *)(puVar1 + 1);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (worldObjectClient != (MVWorldObjectClient *)0x0) {
    pCVar5 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)worldObjectClient,(MethodInfo *)0x0);
    if (pCVar5 != (CelestialParam *)0x0) {
      targetInteractable =
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                     ((GameObject *)pCVar5,
                      MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                     );
      bVar6 = InteractionPackage::InteractionPackage_IsSpawnProtected
                        ((InteractionPackage *)this,(MVInteractableBase *)targetInteractable,
                         (MethodInfo *)0x0);
      if (bVar6 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          uStack_3 = CONCAT44(uStack_3._4_4_,TypeInfo__UnityEngine__Object);
          func_?();
        }
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)targetInteractable,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          if (shooter == (MVPlayer *)0x0) goto code_?;
          pSVar7 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)shooter,(MethodInfo *)0x0)
          ;
          if (targetInteractable == (UseInteractorHandler *)0x0) goto code_?;
          (*(code *)targetInteractable->klass[1]._0.namespaze)
                    (targetInteractable,7,pSVar7,0,
                     targetInteractable->klass[1]._0.byval_arg.data.dummy);
        }
        pCVar5 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)worldObjectClient,(MethodInfo *)0x0);
        if (pCVar5 == (CelestialParam *)0x0) goto code_?;
        this_00 = (MVRigidBody *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            ((GameObject *)pCVar5,
                             MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                            );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          if (this_00 == (MVRigidBody *)0x0) goto code_?;
          impulse.z = fStack_4;
          impulse.x = (float)(undefined4)uStack_3;
          impulse.y = (float)uStack_3._4_4_;
          MVRigidBody::MVRigidBody_AddImpulse(this_00,shooter,impulse,1,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

