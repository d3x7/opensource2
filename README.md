Вот перевод описания с GitHub на русский язык:

# opensource2 

(Открытый) Источник2 — разумный открытый SDK CS2 для ваших проектов.

#### Чит будет обновляться, запланированные вехи на данный момент:
* Достижение функциональности Osiris/Aimtux в CS2;
* Введение измерений и сбора данных для науки о данных;
* Создание неотличимой, весьма эффективной помощи прицеливания;  
* Написание инжектора DLL на Electron (Node.js) с обходом VAC и автоматическими обновлениями;

### Как использовать?
1. Клонируйте репозиторий: ``git clone --recurse-submodules --remote-submodules https://github.com/alza54/opensource2``
2. Убедитесь, что у вас установлен DirectX 11 SDK.
3. Откройте решение в Visual Studio 2022 на Windows (в идеале).
##### Примечание: нет необходимости копировать и вставлять зависимости в решение, поскольку они автоматически клонируются с git.
4. Поскольку Counter Strike 2 - это приложение 64-bit, скомпилируйте .DLL как x64 Отладка или Релиз.
5. Впрысните .DLL в игру с помощью инжектора по вашему выбору. В идеале напишите свой собственный, так как это несложно сделать.

### Работает ли это сейчас?
ПО было протестировано на [сборке ID 12321656, выпущенной 29.09.2023](https://steamdb.info/patchnotes/12321656/ "SteamDB.info Заметки к обновлению CS2")

### Вклад
* ПО находится на очень ранней стадии разработки, любой вклад приветствуется.

### Необнаруживаемо ли оно?
* Не рассматривайте его как чит для компиляции.
* Вы всегда должны модифицировать SDK, никогда не используйте встроенные читы, поскольку они являются примерами, из которых вы можете черпать вдохновение.

### Список изменений

#### v0.5.0

* **Возможности / Визуальные эффекты**: Добавлен Chams.
* **Возможности / ESP**: Оптимизировано отображение текста.  
* **Возможности / ESP**: Добавлен 3D-бокс ESP для объектов.
* **SDK**: добавлен расчет ограничивающего бокса на основе столкновений.
* **SDK**: добавлен расчет ограничивающего бокса на основе хитбоксов.

#### v0.4.0 ("Ежедневный" релиз)

* **SDK**: Исправлены индексы ***CEngineClient*** после обновления игры.
* **SDK**: Исправлена структура ***C_TraceHitboxData***.
* **SDK**: представлена схема ***C_PointCamera***.
* **SDK / Система костей**: Представлен метод ***GetBoneName***.
* **SDK / CCSPlayer_CameraServices**: Исправлено в соответствии с новой реализацией (больше нет свойства ``m_iFOV``, теперь экземпляр класса ***CPlayer_CameraServices*** доступен).
* **SDK / CBasePlayerController**: расширенная реализация. 
* **SDK / m_szLastPlaceName**: это свойство было перемещено из ***C_CSPlayerPawnBase*** в ***C_CSPlayerPawn*** при обновлении игры.
* **SDK / C_BaseEntity**: добавлена булева проверка ``IsPointCamera()`` в класс ***C_BaseEntity***.
* **SDK**: Очистил код.
* **Возможности**: Организованы возможности с помощью макросов и внедрения зависимостей.
* **Возможности / Рисование**: Представлена обёртка (экземпляр класса Function) для методов, связанных с рисованием на экране. 
* **Возможности / Рисование**: Представлена блокировка мьютекса для безопасного отображения потоков.
* **Возможности / Рисование**: Представлена функция ***RenderArrowToAngle***.
* **Математика**: Представлены функции: ***ToAngle***, ***CalculateRelativeAngle***, ***CalculateFOV***, ***CalculateAngleRadians***, ***deg2rad***, ***FromAngle***.
* **Возможности: Триггербот**: Пока убрана проверка дыма из-за обновления. Представлен шаблон сигнатуры функции для дальнейшего исследования.  
* **Возможности: Эймбот**: Представлен набор методов, связанных с Эймботом. Пока отображает ***Список врагов***.
* **Возможности: Изменение FOV**: Изменение FOV с возможностью выбора разного FOV для игрового вида и вида сцен (например, анимация начала матча).

##### v0.3.0 (Первый стабильный релиз)
* SDK: Представлена функция TraceSmoke (возвращает плотность дыма между двумя линиями). 
* SDK: исправлен сбой при выгрузке.
* SDK: исправлено исключение кнопки "Нет" при выгрузке.
* Добавлен новый шрифт: Red Hat Display Regular.
* Исправлено выделение шрифтов.
* Триггербот: представлен фильтр "Макс. интенсивность вспышки"
* Триггербот: представлен фильтр "Макс. плотность дыма" 
* Триггербот: представлен фильтр "Только при прицеливании" для снайперского оружия.
* Триггербот: исправлен конечный вектор трассировки линии с учетом отдачи.

# Скриншоты 

### v0.5.0
![GUI чита SDK](https://github.com/alza54/opensource2/blob/main/media/gui-v0.5.0-1.png?raw=true)
![GUI чита SDK](https://github.com/alza54/opensource2/blob/main/media/gui-v0.5.0-2.png?raw=true)

### v0.4.0
![GUI чита SDK](https://github.com/alza54/opensource2/blob/main/media/gui-v0.4.0.png?raw=true)

### v0.3.0
![GUI чита SDK](https://github.com/alza54/opensource2/blob/main/media/gui-v0.3.0.png?raw=true)

### v0.2.0
![GUI чита SDK](https://github.com/alza54/opensource2/blob/main/media/gui-v0.2.0.png?raw=true)
