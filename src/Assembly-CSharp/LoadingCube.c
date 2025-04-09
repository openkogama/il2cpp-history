
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
      (this->fields).cubeMaterial = pMVar1;
      func_?();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SelfDestruct() */

void Assembly-CSharp.dll::LoadingCube::LoadingCube_SelfDestruct
               (LoadingCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LoadingCube::LoadingCube_Update(LoadingCube *this,MethodInfo *method)

{
  fVar1 = 0.0;
  fStack_2 = 0.0;
  puStack_3 = (undefined *)0x0;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar4 == (MVNetworkGame *)0x0) {
    return;
  }
  fVar5 = (this->fields).time;
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pGVar7 = (this->fields).cube;
  (this->fields).time = fVar6 + fVar5;
  if (pGVar7 != (GameObject *)0x0) {
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar7,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    VVar9 = TypeInfo__UnityEngine__Vector3->static_fields->upVector;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (pTVar8 != (Transform *)0x0) {
      dVar10 = (double)(this->fields).time;
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                (pTVar8,VVar9,(float)dVar10 * _UNK_? + fVar5 * _UNK_?,
                 in_stack_11);
      pGVar7 = (this->fields).cube;
      if (pGVar7 != (GameObject *)0x0) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar7,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        VVar9 = TypeInfo__UnityEngine__Vector3->static_fields->rightVector;
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        if (pTVar8 != (Transform *)0x0) {
          fVar6 = (this->fields).time;
          dVar10 = (double)(fVar6 + fVar6);
          func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                    (pTVar8,VVar9,(float)dVar10 * _UNK_? + fVar5 * _UNK_?,
                     in_stack_11);
          pGVar7 = (this->fields).cube;
          if (pGVar7 != (GameObject *)0x0) {
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar7,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            VVar9 = TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              dVar10 = (double)((this->fields).time * _UNK_?);
              func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                        (pTVar8,VVar9,(float)dVar10 * _UNK_? + fVar5 * _UNK_?,
                         in_stack_12);
              pMVar13 = (this->fields).cubeMaterial;
              if (pMVar13 != (Material *)0x0) {
                pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                   ((Color *)&stack0xffffffdc,pMVar13,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Color::Color_RGBToHSV
                          (*pCVar14,(float *)&stack0xfffffff8,&fStack_2,(float *)&puStack_3,
                           (MethodInfo *)0x0);
                pMVar13 = (this->fields).cubeMaterial;
                fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                   ((MethodInfo *)0x0);
                pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_HSVToRGB_1
                                   ((Color *)&stack0xffffffdc,fVar5 * _UNK_? + fVar1,
                                    fStack_2,(float)puStack_3,1,(MethodInfo *)0x0);
                if (pMVar13 != (Material *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                            (pMVar13,*pCVar14,(MethodInfo *)0x0);
                  MVar15 = MVGameControllerBase::MVGameControllerBase_get_JoinState
                                    ((MethodInfo *)0x0);
                  if (MVar15 != MVJoinState__Enum_Playing) {
                    return;
                  }
                  if ((this->fields).visible == 0) {
                    return;
                  }
                  bVar16 = cRam_? == '\0';
                  (this->fields).visible = 0;
                  if (bVar16) {
                    func_?();
                    cRam_? = '\x01';
                  }
                  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                            ((Object_1 *)pGVar7,(MethodInfo *)0x0);
                  return;
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


/* LoadingCube() */

void Assembly-CSharp.dll::LoadingCube::LoadingCube__ctor(LoadingCube *this,MethodInfo *method)

{
  (this->fields).visible = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

