
/* Void Close() */

void Assembly-CSharp.dll::GamePointChestModelController::GamePointChestModelController_Close
               (GamePointChestModelController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__MainColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).openMesh;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).closedMesh;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pRVar2 = (this->fields).openingRenderer;
      (this->fields).isOpening = 0;
      if ((pRVar2 != (Renderer *)0x0) &&
         (pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar2,(MethodInfo *)0x0), pMVar3 != (Material *)0x0)) {
        pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                           (aCStack_5,pMVar3,StringLiteral__MainColor,(MethodInfo *)0x0);
        pRVar2 = (this->fields).openingRenderer;
        uVar6._0_4_ = pCVar4->r;
        uVar6._4_4_ = pCVar4->g;
        fVar7 = pCVar4->b;
        if (pRVar2 != (Renderer *)0x0) {
          pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar2,(MethodInfo *)0x0);
          aCStack_5[0].a = 1.0;
          aCStack_5[0].b = fVar7;
          aCStack_5[0]._0_8_ = uVar6;
          if (pMVar3 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                      (pMVar3,StringLiteral__MainColor,aCStack_5,(MethodInfo *)0x0);
            pGVar8 = (this->fields).greyOutScript;
            if (pGVar8 != (GreyOutObjectScript *)0x0) {
              GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar8,(MethodInfo *)0x0);
              pGVar8 = (this->fields).greyOutScript;
              if ((pGVar8 != (GreyOutObjectScript *)0x0) &&
                 (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pGVar8,(MethodInfo *)0x0),
                 pGVar1 != (GameObject *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                ,1,0);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (pGVar1 == (GameObject *)0x0) {
                  FUN_?();
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pvVar10 = (pGVar1->fields)._.m_CachedPtr;
                if (pvVar10 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcVar9 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                  uVar6 = func_?(&UNK_?);
                  FUN_?(uVar6,0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam_?)(pvVar10,1);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Disable() */

void Assembly-CSharp.dll::GamePointChestModelController::GamePointChestModelController_Disable
               (GamePointChestModelController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__MainColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).openingRenderer;
  if (pRVar1 != (Renderer *)0x0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       (pRVar1,(MethodInfo *)0x0);
    if (pMVar2 != (Material *)0x0) {
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                         (aCStack_4,pMVar2,StringLiteral__MainColor,(MethodInfo *)0x0);
      pRVar1 = (this->fields).openingRenderer;
      uVar5._0_4_ = pCVar3->r;
      uVar5._4_4_ = pCVar3->g;
      fVar6 = pCVar3->b;
      if (pRVar1 != (Renderer *)0x0) {
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (pRVar1,(MethodInfo *)0x0);
        aCStack_4[0].a = 0.0;
        aCStack_4[0].b = fVar6;
        aCStack_4[0]._0_8_ = uVar5;
        if (pMVar2 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (pMVar2,StringLiteral__MainColor,aCStack_4,(MethodInfo *)0x0);
          pGVar7 = (this->fields).openMesh;
          (this->fields).isOpening = 0;
          if (pGVar7 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar7,0,(MethodInfo *)0x0);
            pGVar7 = (this->fields).closedMesh;
            if (pGVar7 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar7,0,(MethodInfo *)0x0);
              this_00 = (this->fields).greyOutScript;
              if (this_00 != (GreyOutObjectScript *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                                ,0);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                this_01 = (UnityAction_1_System_Object_ *)
                          FUN_?(
                                       TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                                       );
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                UnityAction_1_System_Object___ctor
                          (this_01,(Object *)this_00,
                           MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                           ,(MethodInfo *)0x0);
                GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                          (this_00,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_01,
                           (MethodInfo *)0x0);
                (this_00->fields).isGreyedIn = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsVisible() */

bool Assembly-CSharp.dll::GamePointChestModelController::GamePointChestModelController_IsVisible
               (GamePointChestModelController *this,MethodInfo *method)

{
  pGVar1 = (this->fields).openMesh;
  if (pGVar1 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    pcRam_? = pcVar3;
    cVar6 = (*pcRam_?)(pvVar2);
    if (cVar6 != '\0') {
      return 1;
    }
    pGVar1 = (this->fields).closedMesh;
    if (pGVar1 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar1 == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pvVar2 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0,in_R8,in_R9,unaff_RBX);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar4 = (*pcRam_?)(pvVar2);
      return bVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Open() */

void Assembly-CSharp.dll::GamePointChestModelController::GamePointChestModelController_Open
               (GamePointChestModelController *this,MethodInfo *method)

{
  pGVar1 = (this->fields).openMesh;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).closedMesh;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      obj = (this->fields).openingAnimation;
      if (obj != (Animation *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Animation>_UnityEngine__Animation_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar2 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar2);
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        fVar5 = (float)(*pcRam_?)();
        pGVar6 = (this->fields).greyOutScript;
        (this->fields).openingStartTime = fVar5;
        (this->fields).isOpening = 1;
        if (pGVar6 != (GreyOutObjectScript *)0x0) {
          GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar6,(MethodInfo *)0x0);
          if ((this->fields).shouldGreyOut == 0) {
            pGVar6 = (this->fields).greyOutScript;
            if ((pGVar6 == (GreyOutObjectScript *)0x0) ||
               (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pGVar6,(MethodInfo *)0x0),
               pGVar1 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,0,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GamePointChestModelController::GamePointChestModelController_Update
               (GamePointChestModelController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__MainColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isOpening != 0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    fVar3 = fVar3 - (this->fields).openingStartTime;
    pfVar4 = &(this->fields).fadeStartTime;
    if (*pfVar4 <= fVar3 && fVar3 != *pfVar4) {
      pRVar5 = (this->fields).openingRenderer;
      fVar3 = _UNK_? -
              (fVar3 - (this->fields).fadeStartTime) /
              ((this->fields).fadeEndTime - (this->fields).fadeStartTime);
      if ((pRVar5 != (Renderer *)0x0) &&
         (pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar5,(MethodInfo *)0x0), pMVar6 != (Material *)0x0)) {
        pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                           (aCStack_8,pMVar6,StringLiteral__MainColor,(MethodInfo *)0x0);
        pRVar5 = (this->fields).openingRenderer;
        uVar2._0_4_ = pCVar7->r;
        uVar2._4_4_ = pCVar7->g;
        fVar9 = pCVar7->b;
        if (pRVar5 != (Renderer *)0x0) {
          pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             (pRVar5,(MethodInfo *)0x0);
          aCStack_8[0].a = fVar3;
          aCStack_8[0].b = fVar9;
          aCStack_8[0]._0_8_ = uVar2;
          if (pMVar6 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                      (pMVar6,StringLiteral__MainColor,aCStack_8,(MethodInfo *)0x0);
            if (0.0 < fVar3) {
              return;
            }
            this_00 = (this->fields).openMesh;
            (this->fields).isOpening = 0;
            if (this_00 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_00,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

