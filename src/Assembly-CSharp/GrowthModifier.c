
/* Void Destroy() */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier_Destroy
               (GrowthModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._._.owner;
  if ((pAVar1 != (Avatar_1 *)0x0) && (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0)
     ) {
    uVar3._0_4_ = (this->fields)._.defaultScale.x;
    uVar3._4_4_ = (this->fields)._.defaultScale.y;
    (*(code *)(pMVar2->klass->vtable).set_Scale.method)
              (pMVar2,uVar3,(this->fields)._.defaultScale.z,
               (pMVar2->klass->vtable).get_WorldPosition.methodPtr);
    pAVar1 = (this->fields)._._.owner;
    if (pAVar1 != (Avatar_1 *)0x0) {
      pMVar4 = (MVAvatarLocal *)(pAVar1->fields).mvAvatar;
      if (pMVar4 != (MVAvatarLocal *)0x0) {
        bVar5 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
        if (((pMVar4->klass->_1).naturalAligment < bVar5) ||
           ((MVAvatarLocal__Class *)(pMVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
            TypeInfo__MVAvatarLocal)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        this_00 = (MVAvatarLocal *)0x0;
        if (bVar6) {
          this_00 = pMVar4;
        }
        if (this_00 != (MVAvatarLocal *)0x0) {
          this_01 = MVAvatarLocal::MVAvatarLocal_get_RigidBody(this_00,(MethodInfo *)0x0);
          if (this_01 != (MVRigidBody *)0x0) {
            this_02 = (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::
                      Component_1_GetComponent_58
                                ((Component_1 *)this_01,
                                 AvatarMotor_MethodInfo__UnityEngine__Component__GetComponent<AvatarMotor>__
                                );
            if (this_02 != (ReviveScreenshotGenerator_GenerateTexture_c_Iterator0 *)0x0) {
              this_03 = (SizeState *)
                        ReviveScreenshotGenerator+<GenerateTexture>c__Iterator0::
                        ReviveScreenshotGenerator_GenerateTexture_c_Iterator0_System_Collections_IEnumerator_get_Current
                                  (this_02,(MethodInfo *)0x0);
              if (this_03 != (SizeState *)0x0) {
                SizeState::SizeState_ScaleChanged(this_03,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
          goto code_?;
        }
      }
code_?:
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier_OnDisable
               (GrowthModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  pAVar1 = (this->fields)._._.owner;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pAVar1 = (this->fields)._._.owner;
  if ((this->fields)._.isDeactivating == 0) {
    if (pAVar1 != (Avatar_1 *)0x0) {
      pMVar3 = (pAVar1->fields).mvAvatar;
      uStack_4._0_4_ = (this->fields)._.defaultScale.x;
      fStack_5 = (this->fields)._.defaultScale.y;
      d = (this->fields)._.sizeModifier;
      fVar6 = (this->fields)._.defaultScale.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        uStack_4._0_4_ = (float)TypeInfo__UnityEngine__Vector3;
        func_?();
      }
      a.z = fVar6;
      a.x = (float)uStack_4;
      a.y = SUB84(uStack_4,4);
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                ((Vector3 *)&stack0xfffffff0,a,d,(MethodInfo *)0x0);
      if (pMVar3 != (MVAvatar *)0x0) {
        pMVar7 = pMVar3->klass;
        pIStack8 = (pMVar7->vtable).get_WorldPosition.methodPtr;
        (*(code *)(pMVar7->vtable).set_Scale.method)();
        return;
      }
    }
  }
  else if ((pAVar1 != (Avatar_1 *)0x0) &&
          (pMVar3 = (pAVar1->fields).mvAvatar, pMVar3 != (MVAvatar *)0x0)) {
    uVar9 = (this->fields)._.defaultScale.x;
    uVar10 = (this->fields)._.defaultScale.y;
    (*(code *)(pMVar3->klass->vtable).set_Scale.method)(pMVar3,uVar9,uVar10);
    GrowthModifier_Destroy(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Scale() */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier_Scale
               (GrowthModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._._.owner;
  if ((pAVar1 != (Avatar_1 *)0x0) && (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0)
     ) {
    uVar3._0_4_ = (this->fields)._.defaultScale.x;
    uVar3._4_4_ = (this->fields)._.defaultScale.y;
    (*(code *)(pMVar2->klass->vtable).set_Scale.method)
              (pMVar2,uVar3,(this->fields)._.defaultScale.z,
               (pMVar2->klass->vtable).get_WorldPosition.methodPtr);
    pAVar1 = (this->fields)._._.owner;
    if (pAVar1 != (Avatar_1 *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pAVar1,(MethodInfo *)0x0);
      if (pGVar4 != (GameObject *)0x0) {
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_get_activeInHierarchy(pGVar4,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          pAVar1 = (this->fields)._._.owner;
          if (pAVar1 != (Avatar_1 *)0x0) {
            pMVar2 = (pAVar1->fields).mvAvatar;
            fVar6 = (this->fields)._.sizeModifier;
            a = (this->fields)._.defaultScale;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                ((Vector3 *)&stack0xfffffff0,a,fVar6,(MethodInfo *)0x0);
            if (pMVar2 != (MVAvatar *)0x0) {
              uVar8._0_4_ = pVVar7->x;
              uVar8._4_4_ = pVVar7->y;
              (*(code *)(pMVar2->klass->vtable).set_Scale.method)
                        (pMVar2,uVar8,pVVar7->z,(pMVar2->klass->vtable).get_WorldPosition.methodPtr
                        );
              return;
            }
          }
        }
        else {
          pAVar9 = (this->fields)._.audioSource;
          if (pAVar9 != (AudioSource *)0x0) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pAVar9,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_get_activeInHierarchy(pGVar4,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                pAVar9 = (this->fields)._.audioSource;
                if (pAVar9 == (AudioSource *)0x0) goto code_?;
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayOneShot
                          (pAVar9,(this->fields)._.growSound,(MethodInfo *)0x0);
              }
              fVar6 = (this->fields)._.timeToSize;
              this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(TypeInfo__SizeModifier__ActionDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_00,(Object *)this,MethodInfo__GrowthModifier___Scale_m__0_float_,
                         (MethodInfo *)0x0);
              routine = SizeModifier::SizeModifier_DoForSeconds
                                  ((SizeModifier *)this,fVar6,(SizeModifier_ActionDelegate *)this_00
                                   ,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UnScale() */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier_UnScale
               (GrowthModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._._.owner;
  if (pAVar1 != (Avatar_1 *)0x0) {
    pMVar2 = (pAVar1->fields).mvAvatar;
    fVar3 = (this->fields)._.sizeModifier;
    a = (this->fields)._.defaultScale;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xfffffff0,a,fVar3,(MethodInfo *)0x0);
    if (pMVar2 != (MVAvatar *)0x0) {
      uVar5._0_4_ = pVVar4->x;
      uVar5._4_4_ = pVVar4->y;
      (*(code *)(pMVar2->klass->vtable).set_Scale.method)(pMVar2,uVar5);
      pAVar1 = (this->fields)._._.owner;
      if (pAVar1 != (Avatar_1 *)0x0) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pAVar1,(MethodInfo *)0x0);
        if (pGVar6 != (GameObject *)0x0) {
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_get_activeInHierarchy(pGVar6,(MethodInfo *)0x0);
          if (bVar7 == 0) {
            GrowthModifier_Destroy(this,(MethodInfo *)0x0);
            return;
          }
          pAVar8 = (this->fields)._.audioSource;
          if (pAVar8 != (AudioSource *)0x0) {
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pAVar8,(MethodInfo *)0x0);
            if (pGVar6 != (GameObject *)0x0) {
              bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_get_activeInHierarchy(pGVar6,(MethodInfo *)0x0);
              if (bVar7 != 0) {
                pAVar8 = (this->fields)._.audioSource;
                if (pAVar8 == (AudioSource *)0x0) goto code_?;
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayOneShot
                          (pAVar8,(this->fields)._.shrinkSound,(MethodInfo *)0x0);
              }
              fVar3 = (this->fields)._.timeToSize;
              this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(TypeInfo__SizeModifier__ActionDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_00,(Object *)this,MethodInfo__GrowthModifier___UnScale_m__1_float_,
                         (MethodInfo *)0x0);
              routine = SizeModifier::SizeModifier_DoForSeconds
                                  ((SizeModifier *)this,fVar3,(SizeModifier_ActionDelegate *)this_00
                                   ,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <Scale>m__0(Single) */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier__Scale_m__0
               (GrowthModifier *this,float t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._._.owner;
  if (pAVar1 != (Avatar_1 *)0x0) {
    uVar2._0_4_ = (this->fields)._.defaultScale.x;
    uVar2._4_4_ = (this->fields)._.defaultScale.y;
    pMVar3 = (pAVar1->fields).mvAvatar;
    fVar4 = (this->fields)._.defaultScale.z;
    fVar5 = SizeModifier::SizeModifier_BlockStep
                       ((SizeModifier *)this,t,40.0,0.0,(this->fields)._.sizeModifier,
                        (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a_02.z = fVar4;
    a_02.x = (float)uVar2;
    a_02.y = SUB84(uVar2,4);
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe4,a_02,fVar5 + _UNK_?,(MethodInfo *)0x0);
    uVar7 = pVVar6->x;
    fVar5 = pVVar6->z;
    uVar8._4_4_ = (float)&UNK_?;
    uVar8._0_4_ = (float)uVar7;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xfffffff0,(this->fields)._.defaultScale,0.25,
                        (MethodInfo *)0x0);
    uVar9._0_4_ = pVVar6->x;
    uVar9._4_4_ = pVVar6->y;
    fVar10 = pVVar6->z;
    fVar4 = (this->fields)._.sineStrength;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    dVar11 = (double)(fVar4 * t);
    func_?();
    a.z = fVar10;
    a.x = (float)uVar9;
    a.y = SUB84(uVar9,4);
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe4,a,_UNK_? - (float)dVar11,in_stack_12
                       );
    a_00.z = fVar5;
    a_00.x = (float)uVar8;
    a_00.y = SUB84(uVar8,4);
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffd8,a_00,*pVVar6,(MethodInfo *)0x0);
    if (pMVar3 != (MVAvatar *)0x0) {
      uVar13._0_4_ = pVVar6->x;
      uVar13._4_4_ = pVVar6->y;
      (*(code *)(pMVar3->klass->vtable).set_Scale.method)
                (pMVar3,uVar13,pVVar6->z,(pMVar3->klass->vtable).get_WorldPosition.methodPtr);
      if (t != (this->fields)._.timeToSize) {
        return;
      }
      pAVar1 = (this->fields)._._.owner;
      if (pAVar1 != (Avatar_1 *)0x0) {
        uVar14._0_4_ = (this->fields)._.defaultScale.x;
        uVar14._4_4_ = (this->fields)._.defaultScale.y;
        fVar4 = (this->fields)._.sizeModifier;
        pMVar3 = (pAVar1->fields).mvAvatar;
        fVar5 = (this->fields)._.defaultScale.z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a_01.z = fVar5;
        a_01.x = (float)uVar14;
        a_01.y = SUB84(uVar14,4);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xffffffd8,a_01,fVar4,(MethodInfo *)0x0);
        if (pMVar3 != (MVAvatar *)0x0) {
          uVar15._0_4_ = pVVar6->x;
          uVar15._4_4_ = pVVar6->y;
          (*(code *)(pMVar3->klass->vtable).set_Scale.method)
                    (pMVar3,uVar15,pVVar6->z,(pMVar3->klass->vtable).get_WorldPosition.methodPtr);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void <UnScale>m__1(Single) */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier__UnScale_m__1
               (GrowthModifier *this,float t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._._.owner;
  if (pAVar1 != (Avatar_1 *)0x0) {
    fVar2 = (this->fields)._.defaultScale.x;
    fVar3 = (this->fields)._.defaultScale.y;
    pMVar4 = (pAVar1->fields).mvAvatar;
    fVar5 = (this->fields)._.defaultScale.z;
    fVar6 = (this->fields)._.sizeModifier;
    fVar7 = SizeModifier::SizeModifier_BlockStep
                      ((SizeModifier *)this,t,40.0,0.0,fVar6 - _UNK_?,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a_01.y = fVar3;
    a_01.x = fVar2;
    a_01.z = fVar5;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffec,a_01,fVar6 - fVar7,(MethodInfo *)0x0);
    fVar2 = pVVar8->z;
    pVVar8 = &(this->fields)._.defaultScale;
    uVar9 = pVVar8->x;
    __return_storage_ptr__ = (Vector3 *)&stack0xffffffd8;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        (__return_storage_ptr__,*pVVar8,0.25,(MethodInfo *)0x0);
    fVar5 = pVVar8->x;
    fVar7 = pVVar8->y;
    fVar3 = pVVar8->z;
    fVar6 = (this->fields)._.sineStrength;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    dVar10 = (double)(fVar6 * t);
    func_?();
    a.y = fVar7;
    a.x = fVar5;
    a.z = fVar3;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffd8,a,_UNK_? - (float)dVar10,
                         in_stack_11);
    a_00.y = (float)uVar9;
    a_00.x = (float)__return_storage_ptr__;
    a_00.z = fVar2;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffd8,a_00,*pVVar8,(MethodInfo *)0x0);
    if (pMVar4 != (MVAvatar *)0x0) {
      uVar12._0_4_ = pVVar8->x;
      uVar12._4_4_ = pVVar8->y;
      (*(code *)(pMVar4->klass->vtable).set_Scale.method)
                (pMVar4,uVar12,pVVar8->z,(pMVar4->klass->vtable).get_WorldPosition.methodPtr);
      pAVar1 = (this->fields)._._.owner;
      if ((pAVar1 != (Avatar_1 *)0x0) &&
         (pMVar4 = (pAVar1->fields).mvAvatar, pMVar4 != (MVAvatar *)0x0)) {
        MVAvatar::MVAvatar_set_SetTransparency(pMVar4,1.0,(MethodInfo *)0x0);
        if (t == (this->fields)._.timeToSize) {
          GrowthModifier_Destroy(this,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* AvatarModifierPackageType get_ModifierType() */

AvatarModifierPackageType__Enum
Assembly-CSharp.dll::GrowthModifier::GrowthModifier_get_ModifierType
          (GrowthModifier *this,MethodInfo *method)

{
  return AvatarModifierPackageType__Enum_Enlarged;
}

