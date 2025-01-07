
/* InteractionData Create() */

InteractionData *
Assembly-CSharp.dll::HealRayHitPackage::HealRayHitPackage_Create
          (InteractionData *__return_storage_ptr__,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor
            (__return_storage_ptr__,InteractionPackageType__Enum_HealRayHit,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::HealRayHitPackage::HealRayHitPackage_ParseAndHandlePackage
               (HealRayHitPackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter,
               InteractionData interactionStruct,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((worldObjectClient != (MVWorldObjectClient *)0x0) &&
     (this_00 = (worldObjectClient->fields).gameObject, this_00 != (GameObject *)0x0)) {
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (this_00,
                   MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                  );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      cVar2 = (*(code *)x->klass[1]._0.typeMetadataHandle)(x);
      if (cVar2 != '\0') {
        return;
      }
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (this_01 = (pMVar3->fields).teamManager, this_01 != (MVTeamManager *)0x0)) {
      iVar4 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0);
      if (1 < iVar4) {
        if (shooter == (MVPlayer *)0x0) goto code_?;
        bVar1 = MVPlayer::MVPlayer_IsOnSameTeam_1(shooter,worldObjectClient,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          if (x != (Object_1 *)0x0) {
            (**(code **)&x->klass[1]._0.byval_arg.attrs)(x,0x19,shooter);
            return;
          }
          goto code_?;
        }
      }
      if (x != (Object_1 *)0x0) {
        (*(code *)x->klass[1]._0.castClass)(x,0x12);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

