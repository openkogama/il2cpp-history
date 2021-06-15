
/* Void Destroy() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier_Destroy
               (MouseModifier *this,MethodInfo *method)

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
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier_OnDisable
               (MouseModifier *this,MethodInfo *method)

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
    MouseModifier_Destroy(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Scale() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier_Scale(MouseModifier *this,MethodInfo *method)

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
                          (pAVar9,(this->fields)._.shrinkSound,(MethodInfo *)0x0);
              }
              fVar6 = (this->fields)._.timeToSize;
              this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(TypeInfo__SizeModifier__ActionDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_00,(Object *)this,MethodInfo__MouseModifier___Scale_m__0_float_,
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

void Assembly-CSharp.dll::MouseModifier::MouseModifier_UnScale
               (MouseModifier *this,MethodInfo *method)

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
            MouseModifier_Destroy(this,(MethodInfo *)0x0);
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
                          (pAVar8,(this->fields)._.growSound,(MethodInfo *)0x0);
              }
              fVar3 = (this->fields)._.timeToSize;
              this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(TypeInfo__SizeModifier__ActionDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_00,(Object *)this,MethodInfo__MouseModifier___UnScale_m__1_float_,
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


/* Void Update() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier_Update
               (MouseModifier *this,MethodInfo *method)

{
  if ((this->fields)._.isDeactivating != 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pMStack_2 = (Mathf__Class *)(fVar1 - (this->fields)._._.timeStamp);
  pfVar3 = &(this->fields)._.sizeUnstableAfterSeconds;
  if ((float)pMStack_2 < *pfVar3 || (float)pMStack_2 == *pfVar3) {
    return;
  }
  fVar1 = (this->fields)._.unstableSpeed;
  uVar4._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
  pAVar5 = (this->fields)._._.owner;
  (this->fields)._.unstableSpeed = (float)uVar4 + fVar1;
  if (pAVar5 != (Avatar_1 *)0x0) {
    VStack_6.y = (this->fields)._.defaultScale.x;
    VStack_6.z = (this->fields)._.defaultScale.y;
    fVar1 = (this->fields)._.sizeModifier;
    pMVar7 = (pAVar5->fields).mvAvatar;
    uVar4._0_4_ = (this->fields)._.defaultScale.z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_01.z = (float)uVar4;
    a_01.x = VStack_6.y;
    a_01.y = VStack_6.z;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffdc,a_01,fVar1,(MethodInfo *)0x0);
    fVar9 = pVVar8->z;
    fVar10 = (this->fields)._.defaultScale.z;
    pVVar8 = &(this->fields)._.defaultScale;
    fVar11 = pVVar8->y;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&VStack_6,*pVVar8,0.03,(MethodInfo *)0x0);
    uVar4._0_4_ = pVVar8->x;
    fStack_12 = pVVar8->y;
    fVar1 = (this->fields)._.sizeUnstableAfterSeconds;
    VStack_6.z = pVVar8->z;
    puStack_13 = (undefined *)(this->fields)._.unstableSpeed;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      pMStack_2 = TypeInfo__UnityEngine__Mathf;
      func_?();
    }
    fVar1 = (float)pMStack_2 - fVar1;
    pMStack_2 = (Mathf__Class *)0x0;
    dVar14 = (double)(fVar1 * (float)puStack_13);
    func_?();
    a.z = VStack_6.z;
    a.x = (float)uVar4;
    a.y = fStack_12;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffdc,a,_UNK_? - (float)dVar14,
                        in_stack_15);
    a_00.y = fVar10;
    a_00.x = fVar11;
    a_00.z = fVar9;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffd0,a_00,*pVVar8,(MethodInfo *)0x0);
    if (pMVar7 != (MVAvatar *)0x0) {
      uVar16 = pVVar8->x;
      uVar17 = pVVar8->y;
      (*(code *)(pMVar7->klass->vtable).set_Scale.method)
                (pMVar7,uVar16,uVar17,pVVar8->z,(pMVar7->klass->vtable).get_WorldPosition.methodPtr);
      return;
    }
  }
  func_?(0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void <Scale>m__0(Single) */

void Assembly-CSharp.dll::MouseModifier::MouseModifier__Scale_m__0
               (MouseModifier *this,float t,MethodInfo *method)

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
                       ((SizeModifier *)this,t,40.0,0.0,
                        _UNK_? - (this->fields)._.sizeModifier,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a_02.z = fVar4;
    a_02.x = (float)uVar2;
    a_02.y = SUB84(uVar2,4);
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe4,a_02,_UNK_? - fVar5,(MethodInfo *)0x0);
    uVar7 = pVVar6->x;
    fVar5 = pVVar6->z;
    uVar8._4_4_ = (float)&UNK_?;
    uVar8._0_4_ = (float)uVar7;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xfffffff0,(this->fields)._.defaultScale,
                        (this->fields)._.sizeModifier,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::MouseModifier::MouseModifier__UnScale_m__1
               (MouseModifier *this,float t,MethodInfo *method)

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
                      ((SizeModifier *)this,t,40.0,(this->fields)._.sizeModifier,1.0,
                       (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a_01.z = fVar4;
    a_01.x = (float)uVar2;
    a_01.y = SUB84(uVar2,4);
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe4,a_01,fVar5,(MethodInfo *)0x0);
    uVar7 = pVVar6->x;
    fVar5 = pVVar6->z;
    uVar8._4_4_ = (float)&UNK_?;
    uVar8._0_4_ = (float)uVar7;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xfffffff0,(this->fields)._.defaultScale,
                        (this->fields)._.sizeModifier,(MethodInfo *)0x0);
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
      if (t == (this->fields)._.timeToSize) {
        MouseModifier_Destroy(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* MouseModifier() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier__ctor(MouseModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.timeToSize = 1.5;
  (this->fields)._.sizeModifier = 1.0;
  (this->fields)._.sizeUnstableAfterSeconds = 28.0;
  (this->fields)._.unstableSpeed = 10.0;
  (this->fields)._.sineStrength = 14.0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields)._.defaultScale.x = pVVar1->x;
  (this->fields)._.defaultScale.y = fVar3;
  (this->fields)._.defaultScale.z = fVar4;
  LockCursorManager3DMode::LockCursorManager3DMode__ctor
            ((LockCursorManager3DMode *)this,(MethodInfo *)0x0);
  return;
}

