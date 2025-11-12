
/* Void TeamTint(MVTeam) */

void Assembly-CSharp.dll::AdvancedGhostTintObject::AdvancedGhostTintObject_TeamTint
               (AdvancedGhostTintObject *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).teamIrisObjects;
  MVar2 = MVTeam__Enum_Server;
  if (team != MVTeam__Enum_None) {
    MVar2 = team;
  }
  uVar3 = 0;
  if (pLVar1 != (List_1_OculusTeamGameObject_ *)0x0) {
    lVar4 = 0x20;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar3) {
        return;
      }
      pLVar1 = (this->fields).teamIrisObjects;
      if (pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar3) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pOVar6 = (pLVar1->fields)._items;
      if (pOVar6 == (OculusTeamGameObject__Array *)0x0) break;
      if ((uint)pOVar6->max_length <= uVar3) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar7 = *(longlong *)((longlong)pOVar6->vector + lVar4 + -0x20);
      if ((lVar7 == 0) || (obj = *(Object **)(lVar7 + 0x18), obj == (Object *)0x0)) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj[1].klass == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)();
      pLVar1 = (this->fields).teamIrisObjects;
      if (pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
      pOVar6 = (pLVar1->fields)._items;
      if (pOVar6 == (OculusTeamGameObject__Array *)0x0) break;
      if ((uint)pOVar6->max_length <= uVar3) goto code_?;
      lVar7 = *(longlong *)((longlong)pOVar6->vector + lVar4 + -0x20);
      if (lVar7 == 0) break;
      if (*(MVTeam__Enum *)(lVar7 + 0x10) == MVar2) {
        lVar7 = FUN_?((this->fields).teamIrisObjects,uVar3);
        if ((lVar7 == 0) || (*(GameObject **)(lVar7 + 0x18) == (GameObject *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)(lVar7 + 0x18),1,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields).teamIrisObjects;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 8;
      if (pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) break;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Tint(Color) */

void Assembly-CSharp.dll::AdvancedGhostTintObject::AdvancedGhostTintObject_Tint
               (AdvancedGhostTintObject *this,Color *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempting_to_tint_oculus_object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_Attempting_to_tint_oculus_object;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,2,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

