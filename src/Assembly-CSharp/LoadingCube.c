
/* Void Awake() */

void Assembly-CSharp.dll::LoadingCube::LoadingCube_Awake(LoadingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cube;
  if (this_00 != (GameObject *)0x0) {
    this_01 = (Renderer *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (this_00,
                         UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                        );
    if (this_01 != (Renderer *)0x0) {
      pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         (this_01,(MethodInfo *)0x0);
      (this->fields)._CubeMaterial_k__BackingField = pMVar1;
      func_?(&(this->fields)._CubeMaterial_k__BackingField,pMVar1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LoadingCube::LoadingCube_Update(LoadingCube *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar4 == (MVNetworkGame *)0x0) {
    return;
  }
  fStack_5 = (this->fields).time;
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pGVar7 = (this->fields).cube;
  (this->fields).time = fVar6 + fStack_5;
  if (pGVar7 != (GameObject *)0x0) {
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar7,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    CStack_10.b = (pVVar9->upVector).x;
    CStack_10.a = (pVVar9->upVector).y;
    fVar6 = (pVVar9->upVector).z;
    fStack_5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
    if (pTVar8 != (Transform *)0x0) {
      dVar11 = (double)(this->fields).time;
      func_?();
      axis_00.z = fVar6;
      axis_00.x = CStack_10.b;
      axis_00.y = CStack_10.a;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                (pTVar8,axis_00,(float)dVar11 * _UNK_? + fStack_5 * _UNK_?,
                 in_stack_12);
      pGVar7 = (this->fields).cube;
      if (pGVar7 != (GameObject *)0x0) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar7,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
        CStack_10.b = (pVVar9->rightVector).x;
        CStack_10.a = (pVVar9->rightVector).y;
        fVar6 = (pVVar9->rightVector).z;
        fStack_5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                              ((MethodInfo *)0x0);
        if (pTVar8 != (Transform *)0x0) {
          fVar13 = (this->fields).time;
          dVar11 = (double)(fVar13 + fVar13);
          func_?();
          axis_01.z = fVar6;
          axis_01.x = CStack_10.b;
          axis_01.y = CStack_10.a;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                    (pTVar8,axis_01,(float)dVar11 * _UNK_? + fStack_5 * _UNK_?,
                     in_stack_12);
          pGVar7 = (this->fields).cube;
          if (pGVar7 != (GameObject *)0x0) {
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar7,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
            CStack_10.b = (pVVar9->forwardVector).x;
            CStack_10.a = (pVVar9->forwardVector).y;
            fVar6 = (pVVar9->forwardVector).z;
            fStack_5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                  ((MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              dVar11 = (double)((this->fields).time * _UNK_?);
              func_?();
              axis.z = fVar6;
              axis.x = CStack_10.b;
              axis.y = CStack_10.a;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                        (pTVar8,axis,(float)dVar11 * _UNK_? + fStack_5 * _UNK_?,
                         in_stack_14);
              pMVar15 = (this->fields)._CubeMaterial_k__BackingField;
              if (pMVar15 != (Material *)0x0) {
                pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                   (&CStack_10,pMVar15,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Color::Color_RGBToHSV
                          (*pCVar16,&fStack_1,&fStack_2,&fStack_3,(MethodInfo *)0x0);
                CStack_10.a = fStack_1;
                fStack_5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                      ((MethodInfo *)0x0);
                pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_HSVToRGB_1
                                   (&CStack_10,fStack_5 * _UNK_? + CStack_10.a,fStack_2,
                                    fStack_3,1,(MethodInfo *)0x0);
                CStack_10.r = pCVar16->r;
                CStack_10.g = pCVar16->g;
                CStack_10.b = pCVar16->b;
                CStack_10.a = pCVar16->a;
                pMVar15 = (this->fields)._CubeMaterial_k__BackingField;
                if (pMVar15 != (Material *)0x0) {
                  pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                     ((Color *)&stack0xffffffcc,pMVar15,(MethodInfo *)0x0);
                  pMVar15 = (this->fields)._CubeMaterial_k__BackingField;
                  CStack_10.a = pCVar16->a;
                  if (pMVar15 != (Material *)0x0) {
                    value.g = CStack_10.g;
                    value.r = CStack_10.r;
                    value.b = CStack_10.b;
                    value.a = pCVar16->a;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                              (pMVar15,value,(MethodInfo *)0x0);
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
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

