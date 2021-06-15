
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RailRay+<DoShowRay>c__Iterator0::RailRay_DoShowRay_c_Iterator0_MoveNext
               (RailRay_DoShowRay_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    CStack_3.r = 0.0;
    CStack_3.g = 0.0;
    CStack_3.b = 0.0;
    CStack_3.a = 0.0;
    func_?(&CStack_3,0x3dcccccd,0x3dcccccd,0x3dcccccd,0,0);
    pRVar4 = (pRVar1->fields)._this;
    (pRVar1->fields)._endColor___0.r = CStack_3.r;
    (pRVar1->fields)._endColor___0.g = CStack_3.g;
    (pRVar1->fields)._endColor___0.b = CStack_3.b;
    (pRVar1->fields)._endColor___0.a = CStack_3.a;
    if ((pRVar4 == (RailRay *)0x0) ||
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pRVar4,(MethodInfo *)0x0), pTVar5 == (Transform *)0x0))
    goto code_?;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffec,pTVar5,(MethodInfo *)0x0);
    fVar7 = pVVar6->y;
    fVar8 = pVVar6->z;
    (pRVar1->fields)._origin___0.x = pVVar6->x;
    (pRVar1->fields)._origin___0.y = fVar7;
    (pRVar1->fields)._origin___0.z = fVar8;
    pRVar4 = (pRVar1->fields)._this;
    if (pRVar4 == (RailRay *)0x0) goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pRVar4,(MethodInfo *)0x0);
    pRVar4 = (pRVar1->fields)._this;
    if ((pRVar4 == (RailRay *)0x0) || (pTVar5 == (Transform *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar5,(pRVar4->fields).target,(MethodInfo *)0x0);
    pRVar4 = (pRVar1->fields)._this;
    if ((pRVar4 == (RailRay *)0x0) ||
       (pLVar9 = (pRVar4->fields).rayRenderer, pLVar9 == (LineRenderer *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
              (pLVar9,2,(MethodInfo *)0x0);
    pRVar4 = (pRVar1->fields)._this;
    if ((pRVar4 == (RailRay *)0x0) ||
       (pLVar9 = (pRVar4->fields).rayRenderer, pLVar9 == (LineRenderer *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (pLVar9,1,(pRVar1->fields)._origin___0,(MethodInfo *)0x0);
    pRVar4 = (pRVar1->fields)._this;
    if ((pRVar4 == (RailRay *)0x0) ||
       (pLVar9 = (pRVar4->fields).rayRenderer, pLVar9 == (LineRenderer *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (pLVar9,0,(pRVar1->fields).hit,(MethodInfo *)0x0);
    (pRVar1->fields)._time___0 = 1.2;
    (pRVar1->fields)._t___0 = 0.0;
code_?:
    pRVar4 = (pRVar1->fields)._this;
    if ((pRVar4 != (RailRay *)0x0) &&
       (pLVar9 = (pRVar4->fields).rayRenderer, pLVar9 != (LineRenderer *)0x0)) {
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)pLVar9,(MethodInfo *)0x0);
      pRVar4 = (pRVar1->fields)._this;
      if ((pRVar4 != (RailRay *)0x0) &&
         (pCVar10 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                              (&CStack_3,(pRVar4->fields).startColor,(pRVar1->fields)._endColor___0
                               ,(pRVar1->fields)._t___0 / (pRVar1->fields)._time___0,
                               (MethodInfo *)0x0), this_03 != (Material *)0x0)) {
        this = (RailRay_DoShowRay_c_Iterator0 *)0x0;
        CStack_3.a = (float)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (this_03,StringLiteral__TintColor,(Vector4)*pCVar10,(MethodInfo *)0x0);
        this = (RailRay_DoShowRay_c_Iterator0 *)(pRVar1->fields)._t___0;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)this);
        fVar8 = fVar8 + (float)this;
        this = (RailRay_DoShowRay_c_Iterator0 *)&stack0xfffffff8;
        (pRVar1->fields)._t___0 = fVar8;
        pOVar11 = (Object *)func_?();
        (pRVar1->fields)._current = pOVar11;
        if ((pRVar1->fields)._disposing != 0) {
          return 1;
        }
        (pRVar1->fields)._PC = 1;
        return 1;
      }
    }
  }
  else {
    if (iVar2 == 1) {
      fVar8 = (this->fields)._time___0;
      pfVar12 = &(this->fields)._t___0;
      if (*pfVar12 <= fVar8 && fVar8 != *pfVar12) goto code_?;
    }
    else if (iVar2 != 2) {
      return 0;
    }
    pRVar4 = (this->fields)._this;
    if ((pRVar4 != (RailRay *)0x0) &&
       (this_00 = (pRVar4->fields).particles, this_00 != (ParticleSystem *)0x0)) {
      bVar13 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_get_isPlaying(this_00,(MethodInfo *)0x0);
      if (bVar13 != 0) {
        this = (RailRay_DoShowRay_c_Iterator0 *)0x0;
        pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&this);
        (pRVar1->fields)._current = pOVar11;
        if ((pRVar1->fields)._disposing != 0) {
          return 1;
        }
        (pRVar1->fields)._PC = 2;
        return 1;
      }
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?(TypeInfo__PrefabPool);
      }
      this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (this_01 != (PrefabPool *)0x0) {
        this_02 = (EnumPoolManager *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                             (MethodInfo *)0x0);
        pRVar4 = (pRVar1->fields)._this;
        if ((pRVar4 != (RailRay *)0x0) && (this_02 != (EnumPoolManager *)0x0)) {
          EnumPoolManager::EnumPoolManager_Return
                    (this_02,(MonoBehaviour *)pRVar4,(pRVar4->fields).railEnumType,(MethodInfo *)0x0
                    );
          (pRVar1->fields)._PC = -1;
          return 0;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar14 = (code *)swi(3);
  bVar13 = (*pcVar14)();
  return bVar13;
}


/* Void Reset() */

void Assembly-CSharp.dll::RailRay+<DoShowRay>c__Iterator0::RailRay_DoShowRay_c_Iterator0_Reset
               (RailRay_DoShowRay_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

