
/* Void Awake() */

void Assembly-CSharp.dll::LoadingCube::LoadingCube_Awake(LoadingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cube;
  if ((this_00 != (GameObject *)0x0) &&
     (this_01 = (Renderer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (this_00,
                           UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                          ), this_01 != (Renderer *)0x0)) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       (this_01,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields)._CubeMaterial_k__BackingField = pMVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._CubeMaterial_k__BackingField >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LoadingCube::LoadingCube_Update(LoadingCube *this,MethodInfo *method)

{
  afStackX_18[0] = 0.0;
  afStack_1[0] = 0.0;
  afStackX_20[0] = 0.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    if ((pMVar2->fields).game == (MVNetworkGame *)0x0) {
      return;
    }
    fVar3 = (this->fields).time;
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
    fVar6 = (float)(*pcRam_?)();
    pGVar7 = (this->fields).cube;
    (this->fields).time = fVar6 + fVar3;
    if (pGVar7 != (GameObject *)0x0) {
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar7,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar5._0_4_ = (pVVar9->upVector).x;
      uVar5._4_4_ = (pVVar9->upVector).y;
      fVar3 = (pVVar9->upVector).z;
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
      fVar6 = (float)(*pcRam_?)();
      if (pTVar8 != (Transform *)0x0) {
        aCStack_10[0].b = fVar3;
        aCStack_10[0]._0_8_ = uVar5;
        fVar3 = (float)FUN_?((this->fields).time);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                  (pTVar8,(Vector3 *)aCStack_10,fVar3 * _UNK_? + fVar6 * _UNK_?,
                   Space__Enum_Self,(MethodInfo *)0x0);
        pGVar7 = (this->fields).cube;
        if (pGVar7 != (GameObject *)0x0) {
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar7,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar11._0_4_ = (pVVar9->rightVector).x;
          uVar11._4_4_ = (pVVar9->rightVector).y;
          fVar3 = (pVVar9->rightVector).z;
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
          fVar6 = (float)(*pcRam_?)();
          if (pTVar8 != (Transform *)0x0) {
            fVar12 = (this->fields).time;
            aCStack_10[0].b = fVar3;
            aCStack_10[0]._0_8_ = uVar11;
            fVar3 = (float)FUN_?(fVar12 + fVar12);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                      (pTVar8,(Vector3 *)aCStack_10,
                       fVar3 * _UNK_? + fVar6 * _UNK_?,Space__Enum_Self,
                       (MethodInfo *)0x0);
            pGVar7 = (this->fields).cube;
            if (pGVar7 != (GameObject *)0x0) {
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar13._0_4_ = (pVVar9->forwardVector).x;
              uVar13._4_4_ = (pVVar9->forwardVector).y;
              fVar3 = (pVVar9->forwardVector).z;
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
              fVar6 = (float)(*pcRam_?)();
              if (pTVar8 != (Transform *)0x0) {
                aCStack_10[0].b = fVar3;
                aCStack_10[0]._0_8_ = uVar13;
                fVar3 = (float)FUN_?((this->fields).time * _UNK_?);
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                          (pTVar8,(Vector3 *)aCStack_10,
                           fVar3 * _UNK_? + fVar6 * _UNK_?,Space__Enum_Self,
                           (MethodInfo *)0x0);
                pMVar14 = (this->fields)._CubeMaterial_k__BackingField;
                if (pMVar14 != (Material *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Material);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  iVar15 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                          Material_GetFirstPropertyNameIdByAttribute
                                    (pMVar14,ShaderPropertyFlags__Enum_MainColor,(MethodInfo *)0x0);
                  if (iVar15 < 0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__UnityEngine__Material);
                    }
                    iVar15 = TypeInfo__UnityEngine__Material->static_fields->k_ColorId;
                  }
                  pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1
                                      (aCStack_10,pMVar14,iVar15,(MethodInfo *)0x0);
                  fVar3 = pCVar16->r;
                  fVar6 = pCVar16->g;
                  fVar12 = pCVar16->b;
                  if (((fVar12 <= fVar6) ||
                      (offset = _UNK_?, dominantcolor = fVar12, colorone = fVar3,
                      colortwo = fVar6, fVar12 <= fVar3)) &&
                     (offset = TypeRef__System__Activator__T._0_4_, dominantcolor = fVar6,
                     colorone = fVar12, colortwo = fVar3, fVar6 <= fVar3)) {
                    offset = 0.0;
                    dominantcolor = fVar3;
                    colorone = fVar6;
                    colortwo = fVar12;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Color::Color_RGBToHSVHelper
                            (offset,dominantcolor,colorone,colortwo,afStackX_18,afStack_1,
                             afStackX_20,(MethodInfo *)0x0);
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
                  fVar3 = (float)(*pcRam_?)();
                  pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_HSVToRGB_1
                                      (aCStack_10,fVar3 * _UNK_? + afStackX_18[0],
                                       afStack_1[0],afStackX_20[0],1,(MethodInfo *)0x0);
                  uVar17._0_4_ = pCVar16->r;
                  uVar17._4_4_ = pCVar16->g;
                  fVar3 = pCVar16->b;
                  pMVar14 = (this->fields)._CubeMaterial_k__BackingField;
                  if (pMVar14 != (Material *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Material);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    iVar15 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                            Material_GetFirstPropertyNameIdByAttribute
                                      (pMVar14,ShaderPropertyFlags__Enum_MainColor,(MethodInfo *)0x0)
                    ;
                    if (iVar15 < 0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
                        FUN_?(TypeInfo__UnityEngine__Material);
                      }
                      iVar15 = TypeInfo__UnityEngine__Material->static_fields->k_ColorId;
                    }
                    pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1
                                        (aCStack_10,pMVar14,iVar15,(MethodInfo *)0x0);
                    pMVar14 = (this->fields)._CubeMaterial_k__BackingField;
                    aCStack_10[0].a = pCVar16->a;
                    aCStack_10[0].b = fVar3;
                    aCStack_10[0]._0_8_ = uVar17;
                    if (pMVar14 != (Material *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                                (pMVar14,aCStack_10,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

