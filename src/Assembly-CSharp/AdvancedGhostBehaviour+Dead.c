
/* Void Enter(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Dead::AdvancedGhostBehaviour_Dead_Enter
               (AdvancedGhostBehaviour_Dead *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if ((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
     (this_00 = (ghostBehaviour->fields).GhostVisualization,
     this_00 != (AdvancedGhostVisualizaton *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      if (0 < (ghostBehaviour->fields).lives) {
        piVar1 = &(ghostBehaviour->fields).lives;
        *piVar1 = *piVar1 + -1;
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Exit(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Dead::AdvancedGhostBehaviour_Dead_Exit
               (AdvancedGhostBehaviour_Dead *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if (ghostBehaviour != (AdvancedGhostBehaviour *)0x0) {
    this_00 = (ghostBehaviour->fields).GhostVisualization;
    (ghostBehaviour->fields).respawn = 1;
    fVar1 = TypeRef__System__Activator__T._0_4_;
    this = (AdvancedGhostBehaviour_Dead *)0x0;
    if (this_00 != (AdvancedGhostVisualizaton *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AdvancedGhostVisualizaton__Die,2,
                      TypeRef__System__Activator__T._0_4_,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__AdvancedGhostVisualizaton__Respawn);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar2 = (this_00->fields).currentEffect;
      if (pAVar2 != (AdvancedGhostVisualizaton_EffectBase *)0x0) {
        (*(pAVar2->klass->vtable).__unknown_1.methodPtr)();
      }
      pAVar2 = (AdvancedGhostVisualizaton_EffectBase *)
               FUN_?(TypeInfo__AdvancedGhostVisualizaton__Respawn);
      (pAVar2->fields).duration = fVar1;
      (pAVar2->fields).timeLeft = fVar1;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (obj->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,1,(MethodInfo *)0x0);
          bVar6 = iRam_? != 0;
          (this_00->fields).currentEffect = pAVar2;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)&(this_00->fields).currentEffect >> 0xc);
            uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar6 = uVar9 == *puVar10;
              if (bVar6) {
                *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
          return;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?(this);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Type Update(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+Dead::AdvancedGhostBehaviour_Dead_Update
                 (AdvancedGhostBehaviour_Dead *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__AdvancedGhostBehaviour__Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (ghostBehaviour != (AdvancedGhostBehaviour *)0x0) {
    if ((ghostBehaviour->fields).lives != 0) {
      pFVar1 = (ghostBehaviour->fields).deathCheckFunc;
      if (pFVar1 == (Func_1_Boolean_ *)0x0) goto code_?;
      cVar2 = (*(pFVar1->fields)._._.invoke_impl)
                        ((pFVar1->fields)._._.method_code,(pFVar1->fields)._._.method);
      pIVar3 = TypeRef__AdvancedGhostBehaviour__Idle;
      if (cVar2 == '\0') {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        if (pIVar3 == (Il2CppType *)0x0) {
          return (Type *)0x0;
        }
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        pAVar4 = (AdvancedGhostBehaviour_IGhostBehaviourState__Class *)FUN_?(pIVar3,1);
        goto FUN_?;
      }
    }
    pAVar5 = (ghostBehaviour->fields).currentState;
    if (pAVar5 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
      pAVar4 = pAVar5->klass;
FUN_?:
      pIVar3 = &(pAVar4->_0).byval_arg;
      apTStackX_10[0] = (Type *)0x0;
      pIStackX_8 = pIVar3;
      cVar2 = FUN_?(pIVar3,&pIStackX_8,apTStackX_10,in_R9,unaff_RBX);
      if (cVar2 != '\0') {
        return apTStackX_10[0];
      }
      lVar6 = FUN_?(uRam_?);
      *(Il2CppType **)(lVar6 + 0x10) = pIVar3;
      pTVar7 = (Type *)FUN_?();
      return pTVar7;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  pTVar7 = (Type *)(*pcVar8)();
  return pTVar7;
}

