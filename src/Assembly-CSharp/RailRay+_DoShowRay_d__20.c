
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RailRay+<DoShowRay>d__20::RailRay_DoShowRay_d_20_MoveNext(RailRay_DoShowRay_d_20 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral__TintColor);
    cRam_? = '\x01';
  }
  pRVar1 = this;
  iVar2 = (this->fields).__1__state;
  obj = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._endColor_5__2.r = 0.1;
    (this->fields)._endColor_5__2.g = 0.1;
    (this->fields)._endColor_5__2.b = 0.1;
    (this->fields)._endColor_5__2.a = 0.0;
    if ((obj == (RailRay *)0x0) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)obj,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) goto code_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&puStack_5,pTVar3,(MethodInfo *)0x0);
    uVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)obj,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar3,(obj->fields).target,(MethodInfo *)0x0);
    pLVar8 = (obj->fields).rayRenderer;
    if (pLVar8 == (LineRenderer *)0x0) goto code_?;
    uVar9 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount(pLVar8,2,(MethodInfo *)0x0);
    pLVar8 = (obj->fields).rayRenderer;
    if (pLVar8 == (LineRenderer *)0x0) goto code_?;
    position.y = (float)uVar6;
    position.x = (float)uVar9;
    position.z = fVar7;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition(pLVar8,1,position,(MethodInfo *)0x0);
    this_01 = (RailRay_DoShowRay_d_20 *)(obj->fields).rayRenderer;
    if (this_01 == (RailRay_DoShowRay_d_20 *)0x0) goto code_?;
    method = (MethodInfo *)0x0;
    this = this_01;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition((LineRenderer *)this_01,0,(pRVar1->fields).hit,(MethodInfo *)0x0);
    (pRVar1->fields)._time_5__3 = 1.2;
    (pRVar1->fields)._t_5__4 = 0.0;
code_?:
    fVar7 = (pRVar1->fields)._time_5__3;
    pfVar10 = &(pRVar1->fields)._t_5__4;
    if (*pfVar10 <= fVar7 && fVar7 != *pfVar10) {
      if ((obj != (RailRay *)0x0) && (pLVar8 = (obj->fields).rayRenderer, pLVar8 != (LineRenderer *)0x0)) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material((Renderer *)pLVar8,(MethodInfo *)0x0);
        fVar11 = (pRVar1->fields)._t_5__4 / (pRVar1->fields)._time_5__3;
        fVar7 = (obj->fields).startColor.r;
        fVar12 = (obj->fields).startColor.g;
        fVar13 = (obj->fields).startColor.b;
        fVar14 = (obj->fields).startColor.a;
        puStack_5 = (undefined *)(pRVar1->fields)._endColor_5__2.g;
        if (fVar11 < 0.0) {
          fVar11 = 0.0;
        }
        else if (1.0 < fVar11) {
          fVar11 = 1.0;
        }
        if (this_03 != (Material *)0x0) {
          value.y = ((float)puStack_5 - fVar12) * fVar11 + fVar12;
          value.x = ((pRVar1->fields)._endColor_5__2.r - fVar7) * fVar11 + fVar7;
          value.z = ((pRVar1->fields)._endColor_5__2.b - fVar13) * fVar11 + fVar13;
          value.w = ((pRVar1->fields)._endColor_5__2.a - fVar14) * fVar11 + fVar14;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector(this_03,StringLiteral__TintColor,value,(MethodInfo *)0x0);
          this = (RailRay_DoShowRay_d_20 *)(pRVar1->fields)._t_5__4;
          fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
          (pRVar1->fields)._t_5__4 = fVar7 + (float)this;
          pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
          ppOVar16 = &(pRVar1->fields).__2__current;
          *ppOVar16 = pOVar15;
          func_?(ppOVar16,pOVar15);
          (pRVar1->fields).__1__state = 1;
          return 1;
        }
      }
      goto code_?;
    }
  }
  else {
    if (iVar2 == 1) {
      (this->fields).__1__state = -1;
      goto code_?;
    }
    if (iVar2 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if ((obj != (RailRay *)0x0) && (this_00 = (obj->fields).particles, this_00 != (ParticleSystem *)0x0)) {
    bVar17 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_isPlaying(this_00,(MethodInfo *)0x0);
    if (bVar17 != 0) {
      this = (RailRay_DoShowRay_d_20 *)0x0;
      pOVar15 = (Object *)func_?(TypeInfo__System__Int32,&this);
      ppOVar16 = &(pRVar1->fields).__2__current;
      *ppOVar16 = pOVar15;
      func_?(ppOVar16,pOVar15);
      (pRVar1->fields).__1__state = 2;
      return 1;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar18 = TypeInfo__PrefabPool->static_fields->instance;
    if ((pPVar18 != (PrefabPool *)0x0) && (this_02 = (pPVar18->fields).enumPoolManager, this_02 != (EnumPoolManager *)0x0)) {
      EnumPoolManager::EnumPoolManager_Return(this_02,(MonoBehaviour *)obj,(obj->fields).railEnumType,(MethodInfo *)0x0);
      return 0;
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  bVar17 = (*pcVar19)();
  return bVar17;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RailRay+<DoShowRay>d__20::RailRay_DoShowRay_d_20_System_Collections_IEnumerator_Reset(RailRay_DoShowRay_d_20 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__RailRay___DoShowRay_d__20__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

