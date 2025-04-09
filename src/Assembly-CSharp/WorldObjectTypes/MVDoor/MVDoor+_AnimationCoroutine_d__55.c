
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<AnimationCoroutine>d__55::
     MVDoor_AnimationCoroutine_d_55_MoveNext
               (MVDoor_AnimationCoroutine_d_55 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (MVDoor *)0x0) goto code_?;
    MVDoor::MVDoor_ToggleDoorColliders(this_00,0,(MethodInfo *)0x0);
    pMVar2 = (this_00->fields).doorObject;
    if (pMVar2 == (MVDoorObject *)0x0) goto code_?;
    fVar3 = MVDoorObject::MVDoorObject_GetCurrentValue
                      (pMVar2,(this_00->fields).doorConfig.doorType,(MethodInfo *)0x0);
    fVar4 = (this->fields).from;
    fVar5 = (this->fields).to;
    (this->fields)._currentValue_5__2 = fVar3;
    if ((fVar4 == fVar5) || (fVar4 = (fVar3 - fVar4) / (fVar5 - fVar4), fVar4 < 0.0)) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      (this->fields)._t_5__3 = _UNK_?;
      goto code_?;
    }
    (this->fields)._t_5__3 = fVar4;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
code_?:
  if ((this->fields)._currentValue_5__2 == (this->fields).to) {
    bVar6 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
    if (this_00 != (MVDoor *)0x0) {
      if (bVar6 == 0) {
        MVDoor::MVDoor_ToggleDoorColliders(this_00,1,(MethodInfo *)0x0);
      }
      else {
        coroutine = (this_00->fields).collisionCheckRoutine;
        ppIVar7 = &(this_00->fields).collisionCheckRoutine;
        if (coroutine != (IEnumerator *)0x0) {
          Coroutines::Coroutines_Stop(coroutine,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57;
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        value[1].klass = (Object__Class *)0x0;
        value[2].klass = (Object__Class *)this_00;
        func_?(value + 2);
        *ppIVar7 = (IEnumerator *)value;
        func_?(ppIVar7,value);
        Coroutines::Coroutines_Start(*ppIVar7,(MethodInfo *)0x0);
      }
      ppIStack8 = &(this_00->fields).doorAnimationRoutine;
      *ppIStack8 = (IEnumerator *)0x0;
      uStack9 = 0;
      func_?();
      return 0;
    }
  }
  else {
    fVar4 = (this->fields)._t_5__3;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 != (MVDoor *)0x0) {
      fVar4 = fVar5 / (this_00->fields).doorConfig.toggleTime + fVar4;
      (this->fields)._t_5__3 = fVar4;
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      else if (_UNK_? < fVar4) {
        fVar4 = _UNK_?;
      }
      fVar4 = fVar4 * _UNK_? * fVar4 * fVar4 + fVar4 * _UNK_? * fVar4;
      fVar4 = (_UNK_? - fVar4) * (this->fields).from + fVar4 * (this->fields).to;
      (this->fields)._currentValue_5__2 = fVar4;
      pMVar2 = (this_00->fields).doorObject;
      if (pMVar2 != (MVDoorObject *)0x0) {
        MVDoorObject::MVDoorObject_SetCurrentValue
                  (pMVar2,fVar4,(this_00->fields).doorConfig.doorType,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)0x0;
        func_?();
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  bVar6 = (*pcVar10)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor+<AnimationCoroutine>d__55::
     MVDoor_AnimationCoroutine_d_55_System_Collections_IEnumerator_Reset
               (MVDoor_AnimationCoroutine_d_55 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

