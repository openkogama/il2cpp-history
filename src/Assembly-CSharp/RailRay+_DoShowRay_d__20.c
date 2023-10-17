
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RailRay+<DoShowRay>d__20::RailRay_DoShowRay_d_20_MoveNext
               (RailRay_DoShowRay_d_20 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral__TintColor);
    cRam_? = '\x01';
  }
  pRVar1 = this;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  fVar5 = _UNK_?;
  iVar6 = (this->fields).__1__state;
  obj = (this->fields).__4__this;
  if (iVar6 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._endColor_5__2.r = fVar5;
    (this->fields)._endColor_5__2.g = fVar4;
    (this->fields)._endColor_5__2.b = fVar3;
    (this->fields)._endColor_5__2.a = fVar2;
    if ((obj == (RailRay *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)obj,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&puStack_9,pTVar7,(MethodInfo *)0x0);
    uVar10 = pVVar8->y;
    fVar5 = pVVar8->z;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)obj,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar7,(obj->fields).target,(MethodInfo *)0x0);
    pLVar11 = (obj->fields).rayRenderer;
    if (pLVar11 == (LineRenderer *)0x0) goto code_?;
    uVar12 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
              (pLVar11,2,(MethodInfo *)0x0);
    pLVar11 = (obj->fields).rayRenderer;
    if (pLVar11 == (LineRenderer *)0x0) goto code_?;
    position.y = (float)uVar10;
    position.x = (float)uVar12;
    position.z = fVar5;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (pLVar11,1,position,(MethodInfo *)0x0);
    this_01 = (RailRay_DoShowRay_d_20 *)(obj->fields).rayRenderer;
    if (this_01 == (RailRay_DoShowRay_d_20 *)0x0) goto code_?;
    method = (MethodInfo *)0x0;
    this = this_01;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              ((LineRenderer *)this_01,0,(pRVar1->fields).hit,(MethodInfo *)0x0);
    (pRVar1->fields)._time_5__3 = 1.2;
    (pRVar1->fields)._t_5__4 = 0.0;
code_?:
    fVar5 = (pRVar1->fields)._time_5__3;
    pfVar13 = &(pRVar1->fields)._t_5__4;
    if (*pfVar13 <= fVar5 && fVar5 != *pfVar13) {
      if ((obj != (RailRay *)0x0) &&
         (pLVar11 = (obj->fields).rayRenderer, pLVar11 != (LineRenderer *)0x0)) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)pLVar11,(MethodInfo *)0x0);
        fVar14 = (pRVar1->fields)._t_5__4 / (pRVar1->fields)._time_5__3;
        fVar5 = (obj->fields).startColor.r;
        fVar4 = (obj->fields).startColor.g;
        fVar3 = (obj->fields).startColor.b;
        fVar2 = (obj->fields).startColor.a;
        puStack_9 = (undefined *)(pRVar1->fields)._endColor_5__2.g;
        if (fVar14 < 0.0) {
          fVar14 = 0.0;
        }
        else if (_UNK_? < fVar14) {
          fVar14 = _UNK_?;
        }
        if (this_03 != (Material *)0x0) {
          value.y = ((float)puStack_9 - fVar4) * fVar14 + fVar4;
          value.x = ((pRVar1->fields)._endColor_5__2.r - fVar5) * fVar14 + fVar5;
          value.z = ((pRVar1->fields)._endColor_5__2.b - fVar3) * fVar14 + fVar3;
          value.w = ((pRVar1->fields)._endColor_5__2.a - fVar2) * fVar14 + fVar2;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_03,StringLiteral__TintColor,value,(MethodInfo *)0x0);
          this = (RailRay_DoShowRay_d_20 *)(pRVar1->fields)._t_5__4;
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          (pRVar1->fields)._t_5__4 = fVar5 + (float)this;
          pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
          (pRVar1->fields).__2__current = pOVar15;
          func_?(&(pRVar1->fields).__2__current,pOVar15);
          (pRVar1->fields).__1__state = 1;
          return 1;
        }
      }
      goto code_?;
    }
  }
  else {
    if (iVar6 == 1) {
      (this->fields).__1__state = -1;
      goto code_?;
    }
    if (iVar6 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if ((obj != (RailRay *)0x0) &&
     (this_00 = (obj->fields).particles, this_00 != (ParticleSystem *)0x0)) {
    bVar16 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_isPlaying(this_00,(MethodInfo *)0x0);
    if (bVar16 != 0) {
      this = (RailRay_DoShowRay_d_20 *)0x0;
      pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&this);
      (pRVar1->fields).__2__current = pOVar15;
      func_?(&(pRVar1->fields).__2__current,pOVar15);
      (pRVar1->fields).__1__state = 2;
      return 1;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
    if ((pPVar17 != (PrefabPool *)0x0) &&
       (this_02 = (pPVar17->fields).enumPoolManager, this_02 != (EnumPoolManager *)0x0)) {
      EnumPoolManager::EnumPoolManager_Return
                (this_02,(MonoBehaviour *)obj,(obj->fields).railEnumType,(MethodInfo *)0x0);
      return 0;
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  bVar16 = (*pcVar18)();
  return bVar16;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RailRay+<DoShowRay>d__20::
     RailRay_DoShowRay_d_20_System_Collections_IEnumerator_Reset
               (RailRay_DoShowRay_d_20 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__RailRay___DoShowRay_d__20__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

