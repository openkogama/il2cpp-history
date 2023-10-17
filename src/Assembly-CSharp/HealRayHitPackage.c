
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
      cVar2 = (*(code *)x->klass[1]._0.element_class)(x,0x11,x->klass[1]._0.castClass);
      if (cVar2 != '\0') {
        return;
      }
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar3 != (MVNetworkGame *)0x0) &&
        (this_01 = (pMVar3->fields).teamManager, this_01 != (MVTeamManager *)0x0)) &&
       (iVar4 = MVTeamManager::MVTeamManager_TeamCount(this_01,(MethodInfo *)0x0),
       shooter != (MVPlayer *)0x0)) {
      if ((iVar4 < 2) ||
         (bVar1 = MVPlayer::MVPlayer_IsOnSameTeam_1(shooter,worldObjectClient,(MethodInfo *)0x0),
         bVar1 != 0)) {
        if (x != (Object_1 *)0x0) {
          pOVar5 = x->klass;
          uVar6._0_2_ = pOVar5[1]._0.this_arg.attrs;
          uVar6._2_1_ = pOVar5[1]._0.this_arg.type;
          uVar6._3_1_ = pOVar5[1]._0.this_arg.field_0x7;
          (*(code *)pOVar5[1]._0.this_arg.data)
                    (x,0x12,(shooter->fields)._ActorNr_k__BackingField,0,uVar6);
          return;
        }
      }
      else if (x != (Object_1 *)0x0) {
        pOVar5 = x->klass;
        uVar7._0_2_ = pOVar5[1]._0.byval_arg.attrs;
        uVar7._2_1_ = pOVar5[1]._0.byval_arg.type;
        uVar7._3_1_ = pOVar5[1]._0.byval_arg.field_0x7;
        (*(code *)pOVar5[1]._0.byval_arg.data)(x,0x19,shooter,0x16,uVar7);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

